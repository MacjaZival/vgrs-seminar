/*
 * KeyboardKeyMappings.hpp
 *
 *  Created on: Aug 18, 2024
 *      Author: matos
 */

#ifndef APPLICATION_USER_GUI_GUIEVENTS_HPP_
#define APPLICATION_USER_GUI_GUIEVENTS_HPP_

#include <unistd.h>

typedef struct GUIKeyboardEvent {
    uint8_t MODIFIERS;
    uint16_t keyChar;
} GUIKeyboardEvent_t;

typedef struct GUIMouseEvent {
    uint8_t BUTTONS;
    uint8_t X;
    uint8_t Y;
} GUIMouseEvent_t;

#endif
/* APPLICATION_USER_GUI_KEYBOARDKEYMAPPINGS_HPP_ */
