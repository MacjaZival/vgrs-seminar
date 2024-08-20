/*
 * FullScreenKeyboard.cpp
 *
 *  Created on: Aug 13, 2024
 *      Author: matos
 */

#include <gui/common/FullScreenKeyboard.h>
#include <touchgfx/Utils.hpp>
#include <string.h>

FullScreenKeyboard::FullScreenKeyboard() : keyboard(),
escPressed(this, &FullScreenKeyboard::escPressedHandler),
delPressed(this, &FullScreenKeyboard::delPressedHandler),

tabPressed(this, &FullScreenKeyboard::tabPressedHandler),
backspacePressed(this, &FullScreenKeyboard::backspacePressedHandler),

enterPressed(this, &FullScreenKeyboard::enterPressedHandler),

shiftPressed(this, &FullScreenKeyboard::shiftPressedHandler),
homePressed(this, &FullScreenKeyboard::homePressedHandler),
endPressed(this, &FullScreenKeyboard::endPressedHandler),

ctrlPressed(this, &FullScreenKeyboard::ctrlPressedHandler),
modPressed(this, &FullScreenKeyboard::modPressedHandler),
altPressed(this, &FullScreenKeyboard::altPressedHandler),

keyPressed(this, &FullScreenKeyboard::keyPressedhandler)

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

void FullScreenKeyboard::escPressedHandler()
{
	touchgfx_printf("ESC pressed\n");
}

void FullScreenKeyboard::delPressedHandler()
{

}

void FullScreenKeyboard::tabPressedHandler()
{

}
void FullScreenKeyboard::backspacePressedHandler()
{

}

void FullScreenKeyboard::enterPressedHandler()
{

}

void FullScreenKeyboard::shiftPressedHandler()
{

}
void FullScreenKeyboard::homePressedHandler()
{

}
void FullScreenKeyboard::endPressedHandler()
{

}

void FullScreenKeyboard::ctrlPressedHandler()
{

}
void FullScreenKeyboard::modPressedHandler()
{

}
void FullScreenKeyboard::altPressedHandler()
{

}

void FullScreenKeyboard::keyPressedhandler(Unicode::UnicodeChar keyChar)
{
	touchgfx_printf("Key pressed: %c\n", keyChar);
	keyboard.setBufferPosition(0);
}
