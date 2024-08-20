#ifndef TOUCHPADSCREENPRESENTER_HPP
#define TOUCHPADSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <cstdint>

using namespace touchgfx;

class TouchpadScreenView;

class TouchpadScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TouchpadScreenPresenter(TouchpadScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    void HandleButtonPressed();
    void handleMouseMovement(uint8_t x, uint8_t y);
    void handleMouseClick(uint8_t buttons);

    virtual ~TouchpadScreenPresenter() {}

private:
    TouchpadScreenPresenter();

    TouchpadScreenView& view;
};

#endif // TOUCHPADSCREENPRESENTER_HPP
