#include <gui/touchpadscreen_screen/TouchpadScreenView.hpp>
#include <touchgfx/Utils.hpp>

TouchpadScreenView::TouchpadScreenView() : touchpadContainer()
{

}

void TouchpadScreenView::setupScreen()
{
    TouchpadScreenViewBase::setupScreen();
    touchgfx_printf("setup screen called (sanity check)\n");
    touchpadContainer.setPosition(0, 0, 40, 40);

	add(touchpadContainer);
}

void TouchpadScreenView::tearDownScreen()
{
    TouchpadScreenViewBase::tearDownScreen();
}

void TouchpadScreenView::handleDragEvent(const DragEvent& event)
{
	touchgfx_printf("Drag event (%d, %d) -> (%d, %d): %d, %d\n", event.getOldX(), event.getOldY(), event.getNewX(), event.getNewY(), event.getDeltaX(), event.getDeltaY());
	touchpadContainer.moveTo(event.getNewX()-20, event.getNewY()-20);
	presenter->handleMouseMovement(event.getDeltaX(), event.getDeltaY());
	isPressValid = false;
	TouchpadScreenViewBase::handleDragEvent(event);
}

void TouchpadScreenView::handleClickEvent(const ClickEvent& event)
{
	if(event.getType() == ClickEvent::RELEASED) {
		touchgfx_printf("Click event (RELEASED) (%d, %d)\n", event.getX(), event.getY());
		if(isPressValid) {
			presenter->handleMouseClick(0x1);
		}
	} else if (event.getType() == ClickEvent::PRESSED) {
		touchpadContainer.moveTo(event.getX()-20, event.getY()-20);
		isPressValid = true;
	}
	TouchpadScreenViewBase::handleClickEvent(event);
}

