#ifndef KEYBOARDSCREENVIEW_HPP
#define KEYBOARDSCREENVIEW_HPP

#include <gui_generated/keyboardscreen_screen/KeyboardScreenViewBase.hpp>
#include <gui/keyboardscreen_screen/KeyboardScreenPresenter.hpp>
#include <gui/common/FullScreenKeyboard.h>

class KeyboardScreenView : public KeyboardScreenViewBase
{
public:
    KeyboardScreenView();
    virtual ~KeyboardScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

private:

    static const uint8_t BUFFER_SIZE = 18;
	Unicode::UnicodeChar buffer[BUFFER_SIZE];

	Keyboard keyboard;

	Callback<KeyboardScreenView> escPressed;
	Callback<KeyboardScreenView> delPressed;

	Callback<KeyboardScreenView> tabPressed;
	Callback<KeyboardScreenView> backspacePressed;

	Callback<KeyboardScreenView> enterPressed;

	Callback<KeyboardScreenView> shiftPressed;
	Callback<KeyboardScreenView> homePressed;
	Callback<KeyboardScreenView> endPressed;

	Callback<KeyboardScreenView> ctrlPressed;
	Callback<KeyboardScreenView> modPressed;
	Callback<KeyboardScreenView> altPressed;

	Callback<KeyboardScreenView, Unicode::UnicodeChar> keyPressed;

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

#endif // KEYBOARDSCREENVIEW_HPP
