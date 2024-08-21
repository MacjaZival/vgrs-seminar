#ifndef MODEL_HPP
#define MODEL_HPP

#include <cstdint>
#include <gui/common/GUIEvents.hpp>

#ifndef SIMULATOR // Simulator cannot import these headers (but can function without them)
#include "main.h"
#include <cmsis_os.h> // for RTOS queues

extern "C"
{
	extern osMessageQueueId_t userButtonQueueHandle;
	extern osMessageQueueId_t usbEventQueueHandle;
	extern osMessageQueueId_t usbSwapQueueHandle;
}
#endif

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void toggleKeyboardModifier(uint8_t modifiers);
    void handleNormalKey(uint16_t key);
    void handleMouseMovement(uint8_t x, uint8_t y);
    void handleMouseClick(uint8_t buttons);
protected:
    ModelListener* modelListener;

    // keyboard
    uint8_t activeModifiers;
#ifndef SIMULATOR
    USBEvent usbKeyboardEvent;

    //mouse
    USBEvent usbMouseEvent;
#endif
};

#endif // MODEL_HPP
