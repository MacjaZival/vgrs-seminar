#ifndef KEYBOARDSCREENPRESENTER_HPP
#define KEYBOARDSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <cstdint>

using namespace touchgfx;

class KeyboardScreenView;

class KeyboardScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    KeyboardScreenPresenter(KeyboardScreenView& v);

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
    void toggleKeyboardModifier(uint8_t modifiers);
    void handleNormalKey(uint16_t key);

    virtual ~KeyboardScreenPresenter() {}

private:
    KeyboardScreenPresenter();

    KeyboardScreenView& view;
};

#endif // KEYBOARDSCREENPRESENTER_HPP
