#include <gui/keyboardscreen_screen/KeyboardScreenView.hpp>
#include <gui/keyboardscreen_screen/KeyboardScreenPresenter.hpp>

KeyboardScreenPresenter::KeyboardScreenPresenter(KeyboardScreenView& v)
    : view(v)
{

}

void KeyboardScreenPresenter::activate()
{

}

void KeyboardScreenPresenter::deactivate()
{

}

void KeyboardScreenPresenter::HandleButtonPressed()
{
	view.goToTouchpadScreen();
}

void KeyboardScreenPresenter::toggleKeyboardModifier(uint8_t modifiers)
{
	model->toggleKeyboardModifier(modifiers);
}

void KeyboardScreenPresenter::handleNormalKey(uint16_t key)
{
	model->handleNormalKey(key);
}
