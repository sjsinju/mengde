#ifndef MENGDE_GUI_FOUNDATION_MOUSE_WHEEL_EVENT_H_
#define MENGDE_GUI_FOUNDATION_MOUSE_WHEEL_EVENT_H_

#include "util/common.h"

namespace mengde {
namespace gui {
namespace foundation {

class MouseWheelEvent {
 public:
  enum class Horizontal : uint16_t { kNone, kLeft, kRight };

  enum class Vertical : uint16_t { kNone, kUp, kDown };

 public:
  MouseWheelEvent(Horizontal, Vertical, Vec2D);
  MouseWheelEvent(const MouseWheelEvent&, Vec2D);
  bool  IsLeft() const { return hor_ == Horizontal::kLeft; }
  bool  IsRight() const { return hor_ == Horizontal::kRight; }
  bool  IsUp() const { return ver_ == Vertical::kUp; }
  bool  IsDown() const { return ver_ == Vertical::kDown; }
  Vec2D GetCoords() const { return coords_; }

 private:
  Horizontal hor_;
  Vertical   ver_;
  Vec2D      coords_;
};

}  // namespace foundation
}  // namespace gui
}  // namespace mengde

#endif  // MENGDE_GUI_FOUNDATION_MOUSE_WHEEL_EVENT_H_
