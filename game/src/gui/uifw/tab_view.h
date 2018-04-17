#ifndef MENGDE_GUI_UIFW_TAB_VIEW_H_
#define MENGDE_GUI_UIFW_TAB_VIEW_H_

#include "composite_view.h"
#include "util/common.h"

#include "common.h"

namespace mengde {
namespace gui {
namespace uifw {

class ButtonView;

class TabView : public CompositeView {
 public:
  TabView(const Rect*);
  void AddTab(const string&, View*);
  int  GetNumTabs() { return (int)v_tab_buttons_.size(); }
  void SetViewIndex(int);

 private:
  std::vector<ButtonView*> v_tab_buttons_;
  std::vector<View*>       v_tabs_;
  int                      view_index_;
};

}  // namespace uifw
}  // namespace gui
}  // namespace mengde

#endif  // MENGDE_GUI_UIFW_TAB_VIEW_H_
