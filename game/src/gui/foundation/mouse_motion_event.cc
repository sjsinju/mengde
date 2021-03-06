#include "mouse_motion_event.h"

namespace mengde {
namespace gui {
namespace foundation {

MouseMotionEvent::MouseMotionEvent(const MouseMotionEvent& e, Vec2D change)
    : motion_(e.motion_), coords_(e.coords_ + change), coords_rel_(e.coords_rel_) {}

MouseMotionEvent::MouseMotionEvent(Type motion, const Vec2D coords, const Vec2D coords_rel)
    : motion_(motion), coords_(coords), coords_rel_(coords_rel) {}

MouseMotionEvent::MouseMotionEvent(Type motion) : MouseMotionEvent(motion, {0, 0}, {0, 0}) {
  // Do not need coords and coords_rel for MouseOut
  ASSERT(motion == Type::kOut);
}

}  // namespace foundation
}  // namespace gui
}  // namespace mengde
