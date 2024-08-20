/*
 * FullScreenKeyboard.h
 *
 *  Created on: Aug 13, 2024
 *      Author: matos
 */


#ifndef APPLICATION_USER_GUI_FULLSCREENKEYBOARD_H_
#define APPLICATION_USER_GUI_FULLSCREENKEYBOARD_H_

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Keyboard.hpp>
#include "CustomKeyboardLayout.hpp"
#include "KeyboardKeyMappings.hpp"

using namespace touchgfx;

class FullScreenKeyboard: public Container {
public:

	FullScreenKeyboard();
	virtual ~FullScreenKeyboard() { }

private:

    static const uint8_t BUFFER_SIZE = 18;
    Unicode::UnicodeChar buffer[BUFFER_SIZE];

	Keyboard keyboard;

	Callback<FullScreenKeyboard> escPressed;
	Callback<FullScreenKeyboard> delPressed;

	Callback<FullScreenKeyboard> tabPressed;
	Callback<FullScreenKeyboard> backspacePressed;

	Callback<FullScreenKeyboard> enterPressed;

	Callback<FullScreenKeyboard> shiftPressed;
	Callback<FullScreenKeyboard> homePressed;
	Callback<FullScreenKeyboard> endPressed;

	Callback<FullScreenKeyboard> ctrlPressed;
	Callback<FullScreenKeyboard> modPressed;
	Callback<FullScreenKeyboard> altPressed;

    Callback<FullScreenKeyboard, Unicode::UnicodeChar> keyPressed;

    void escPressedHandler();
    void delPressedHandler();

    void tabPressedHandler();
    void backspacePressedHandler();

    void enterPressedHandler();

    void shiftPressedHandler();
    void homePressedHandler();
    void endPressedHandler();

    void ctrlPressedHandler();
    void modPressedHandler();
    void altPressedHandler();

    void keyPressedhandler(Unicode::UnicodeChar keyChar);
};

#endif /* APPLICATION_USER_GUI_FULLSCREENKEYBOARD_H_ */
