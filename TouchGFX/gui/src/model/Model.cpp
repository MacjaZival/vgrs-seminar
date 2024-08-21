#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <touchgfx/Utils.hpp>



Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	static uint8_t state;
	osStatus_t status = osMessageQueueGet(userButtonQueueHandle, &state, NULL, 0);
	if(status == osOK) {
		modelListener->HandleButtonPressed();
		static uint8_t swap = 1;
		osMessageQueuePut(usbSwapQueueHandle, &swap, 0U, 0U);
	}
#endif
}

void Model::toggleKeyboardModifier(uint8_t modifiers)
{
	activeModifiers ^= modifiers;
	touchgfx_printf("Keyboard modifiers changed: 0x%x\n", activeModifiers);
}

void Model::handleNormalKey(uint16_t key)
{
#ifndef SIMULATOR

	GUIKeyboardEvent* keyboardEvent = (GUIKeyboardEvent*) malloc(sizeof(GUIKeyboardEvent));
	keyboardEvent->MODIFIERS = activeModifiers;
	keyboardEvent->keyChar = key;

	usbKeyboardEvent = {
		USB_EVENT_KEYBOARD,
		keyboardEvent,
	};
	osMessageQueuePut(usbEventQueueHandle, &usbKeyboardEvent, 0U, 0U);

#else
	touchgfx_printf("Key pressed: 0x%x\n", key);
#endif
}

void Model::handleMouseMovement(uint8_t x, uint8_t y)
{
#ifndef SIMULATOR
	GUIMouseEvent* mouseEvent = (GUIMouseEvent*) malloc(sizeof(GUIMouseEvent));
	mouseEvent->BUTTONS = 0;
	mouseEvent->X = x;
	mouseEvent->Y = y;
	usbMouseEvent = {
		USB_EVENT_MOUSE,
		mouseEvent,
	};
	osMessageQueuePut(usbEventQueueHandle, &usbMouseEvent, 0U, 0U);

#else
	touchgfx_printf("Mouse moved: %d, %d\n", x, y);
#endif
}

void Model::handleMouseClick(uint8_t buttons)
{
#ifndef SIMULATOR
	GUIMouseEvent* mouseEvent = (GUIMouseEvent*) malloc(sizeof(GUIMouseEvent));
		mouseEvent->BUTTONS = buttons;
		mouseEvent->X = 0;
		mouseEvent->Y = 0;
		usbMouseEvent = {
			USB_EVENT_MOUSE,
			mouseEvent,
		};
	osMessageQueuePut(usbEventQueueHandle, &usbMouseEvent, 0U, 0U);

#else
	touchgfx_printf("Mouse clicked: 0x%x\n", buttons);
#endif
}
