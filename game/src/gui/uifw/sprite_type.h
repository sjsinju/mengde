#ifndef MENGDE_GUI_UIFW_SPRITE_TYPE_H_
#define MENGDE_GUI_UIFW_SPRITE_TYPE_H_

#include "common.h"

namespace mengde {
namespace gui {
namespace uifw {

// Sprite Type

enum SpriteType {
#define MACRO_SPRITE_TYPE(ename, bname, dir, ofs, snum, bsize) kSprite##ename,
#include "sprite_type.h.inc"
  kSpriteCount
};

enum SpriteEffectType { kEffectNone, kEffectFade, kEffectShade, kEffectBright, kEffectTint };

struct SpriteEffect {
  SpriteEffectType effect;
  int              progress;
};

extern const char* kSpriteToString[];
extern const char* kSpriteBitmapName[];
extern const bool  kSpriteHasDir[];
extern const int   kSpriteOffset[];
extern const int   kSpriteNumSprites[];
extern const int   kSpriteBitmapSize[];

}  // namespace uifw
}  // namespace gui
}  // namespace mengde

#endif  // MENGDE_GUI_UIFW_SPRITE_TYPE_H_
