#include <gui/keyboardscreen_screen/KeyboardScreenView.hpp>
#include <touchgfx/Utils.hpp>
#include <string.h>

KeyboardScreenView::KeyboardScreenView() : keyboard(),
escPressed(this, &KeyboardScreenView::escPressedHandler),
delPressed(this, &KeyboardScreenView::delPressedHandler),

tabPressed(this, &KeyboardScreenView::tabPressedHandler),
backspacePressed(this, &KeyboardScreenView::backspacePressedHandler),

enterPressed(this, &KeyboardScreenView::enterPressedHandler),

shiftPressed(this, &KeyboardScreenView::shiftPressedHandler),
homePressed(this, &KeyboardScreenView::homePressedHandler),
endPressed(this, &KeyboardScreenView::endPressedHandler),

ctrlPressed(this, &KeyboardScreenView::ctrlPressedHandler),
modPressed(this, &KeyboardScreenView::modPressedHandler),
altPressed(this, &KeyboardScreenView::altPressedHandler),

keyPressed(this, &KeyboardScreenView::keyPressedhandler)
{
	fullscreenLayout.callbackAreaArray[0].callback = &escPressed;
	fullscreenLayout.callbackAreaArray[1].callback = &delPressed;

	fullscreenLayout.callbackAreaArray[2].callback = &tabPressed;
	fullscreenLayout.callbackAreaArray[3].callback = &backspacePressed;

	fullscreenLayout.callbackAreaArray[4].callback = &enterPressed;

	fullscreenLayout.callbackAreaArray[5].callback = &shiftPressed;
	fullscreenLayout.callbackAreaArray[6].callback = &homePressed;
	fullscreenLayout.callbackAreaArray[7].callback = &endPressed;

	fullscreenLayout.callbackAreaArray[8].callback = &ctrlPressed;
	fullscreenLayout.callbackAreaArray[9].callback = &modPressed;
	fullscreenLayout.callbackAreaArray[10].callback = &altPressed;

	keyboard.setLayout(&fullscreenLayout);
	keyboard.setKeyListener(keyPressed);
	keyboard.setKeymappingList(&keyMappingListAnsi);
	keyboard.setPosition(0, 0, 480, 272);

	memset(buffer, 0, sizeof(buffer));
	keyboard.setBuffer(buffer, BUFFER_SIZE);

	add(keyboard);
}

void KeyboardScreenView::setupScreen()
{
    KeyboardScreenViewBase::setupScreen();
}

void KeyboardScreenView::tearDownScreen()
{
    KeyboardScreenViewBase::tearDownScreen();
}

void KeyboardScreenView::escPressedHandler()
{
	presenter->handleNormalKey(0x1);
	touchgfx_printf("ESC pressed\n");
}

void KeyboardScreenView::delPressedHandler()
{
	presenter->handleNormalKey(0x2);
}

void KeyboardScreenView::tabPressedHandler()
{
	presenter->handleNormalKey(0x3);
}
void KeyboardScreenView::backspacePressedHandler()
{
	presenter->handleNormalKey(0x4);
}

void KeyboardScreenView::enterPressedHandler()
{
	presenter->handleNormalKey(0x5);
}

void KeyboardScreenView::shiftPressedHandler()
{
	presenter->toggleKeyboardModifier(0x2);
}
void KeyboardScreenView::homePressedHandler()
{
	presenter->handleNormalKey(0x6);
}
void KeyboardScreenView::endPressedHandler()
{
	presenter->handleNormalKey(0x7);
}

void KeyboardScreenView::ctrlPressedHandler()
{
	presenter->toggleKeyboardModifier(0x1);
}
void KeyboardScreenView::modPressedHandler()
{
	presenter->toggleKeyboardModifier(0x8);
}
void KeyboardScreenView::altPressedHandler()
{
	presenter->toggleKeyboardModifier(0x4);
}

void KeyboardScreenView::keyPressedhandler(Unicode::UnicodeChar keyChar)
{
	if(keyChar != 0) {
		touchgfx_printf("Key pressed: %c\n", keyChar);
		presenter->handleNormalKey(keyChar);
	}
	keyboard.setBufferPosition(0);
}
