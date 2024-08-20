#include <gui/touchpadscreen_screen/TouchpadScreenView.hpp>
#include <gui/touchpadscreen_screen/TouchpadScreenPresenter.hpp>

TouchpadScreenPresenter::TouchpadScreenPresenter(TouchpadScreenView& v)
    : view(v)
{

}

void TouchpadScreenPresenter::activate()
{

}

void TouchpadScreenPresenter::deactivate()
{

}

void TouchpadScreenPresenter::HandleButtonPressed()
{
	view.goToKeyboardScreen();
}

void TouchpadScreenPresenter::handleMouseMovement(uint8_t x, uint8_t y)
{
	model->handleMouseMovement(x, y);
}

void TouchpadScreenPresenter::handleMouseClick(uint8_t buttons)
{
	model->handleMouseClick(buttons);
}

