#ifndef TOUCHPADSCREENVIEW_HPP
#define TOUCHPADSCREENVIEW_HPP

#include <gui_generated/touchpadscreen_screen/TouchpadScreenViewBase.hpp>
#include <gui/touchpadscreen_screen/TouchpadScreenPresenter.hpp>
#include <gui/common/TouchpadContainer.h>
#include <touchgfx/events/DragEvent.hpp>
#include <touchgfx/events/ClickEvent.hpp>
#include <touchgfx/mixins/Draggable.hpp>



class TouchpadScreenView : public TouchpadScreenViewBase
{
public:
    TouchpadScreenView();
    virtual ~TouchpadScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleDragEvent(const DragEvent& event);
    virtual void handleClickEvent(const ClickEvent& event);
protected:
    TouchpadContainer touchpadContainer;

    bool isPressValid = false;
};

#endif // TOUCHPADSCREENVIEW_HPP
