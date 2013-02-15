// generated by Fast Light User Interface Designer (fluid) version 1.00

#include "widget_panel.h"

Fl_Input *v_input[4]={(Fl_Input *)0};

Fl_Window* make_widget_panel() {
  Fl_Window* w;
  { Fl_Window* o = new Fl_Window(370, 480);
    w = o;
    w->hotspot(o);
    { Fl_Input* o = new Fl_Input(90, 10, 210, 20, "Name:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)name_cb);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Light_Button* o = new Fl_Light_Button(300, 10, 60, 20, "public");
      o->box(FL_THIN_UP_BOX);
      o->selection_color(1);
      o->labelsize(10);
      o->callback((Fl_Callback*)name_public_cb);
      o->when(FL_WHEN_CHANGED);
    }
    { Fl_Input* o = new Fl_Input(90, 35, 170, 20, "Class:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)subclass_cb, (void*)(4));
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Choice* o = new Fl_Choice(260, 35, 100, 20);
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)subtype_cb);
    }
    { Fl_Input* o = new Fl_Input(90, 60, 270, 20, "Label:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)label_cb);
      o->when(FL_WHEN_CHANGED);
    }
    { Fl_Choice* o = new Fl_Choice(90, 80, 150, 20, "Label Type:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)labeltype_cb);
      o->menu(labeltypemenu);
    }
    { Fl_Button* o = new Fl_Button(240, 80, 20, 20, "@-1<-");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_LEFT));
    }
    { Fl_Button* o = new Fl_Button(260, 80, 20, 20, "@-1->");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_RIGHT));
    }
    { Fl_Button* o = new Fl_Button(280, 80, 20, 20, "@-18");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_TOP));
    }
    { Fl_Button* o = new Fl_Button(300, 80, 20, 20, "@-12");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_BOTTOM));
    }
    { Fl_Button* o = new Fl_Button(320, 80, 20, 20, "@-3square");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_INSIDE));
    }
    { Fl_Button* o = new Fl_Button(340, 80, 20, 10, "wrap");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labelsize(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_WRAP));
    }
    { Fl_Button* o = new Fl_Button(340, 90, 20, 10, "clip");
      o->type(1);
      o->box(FL_THIN_UP_BOX);
      o->labelsize(8);
      o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_CLIP));
    }
    { Fl_Choice* o = new Fl_Choice(90, 100, 170, 20, "Label Font:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)labelfont_cb);
      o->menu(fontmenu);
    }
    { Fl_Value_Input* o = new Fl_Value_Input(260, 100, 50, 20);
      o->box(FL_THIN_UP_BOX);
      o->maximum(100);
      o->step(1);
      o->value(14);
      o->callback((Fl_Callback*)labelsize_cb);
    }
    { Fl_Button* o = new Fl_Button(310, 100, 50, 20, "Label Color");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(8);
      o->callback((Fl_Callback*)labelcolor_cb);
    }
    { Fl_Choice* o = new Fl_Choice(90, 125, 220, 20, "Box:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)box_cb);
      o->menu(boxmenu);
    }
    { Fl_Button* o = new Fl_Button(310, 125, 50, 20, "Color");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(8);
      o->callback((Fl_Callback*)color_cb);
    }
    { Fl_Choice* o = new Fl_Choice(90, 145, 220, 20, "Down Box:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)down_box_cb);
      o->menu(boxmenu);
    }
    { Fl_Button* o = new Fl_Button(310, 145, 50, 20, "Select Color");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(8);
      o->callback((Fl_Callback*)color2_cb);
    }
    { Fl_Choice* o = new Fl_Choice(90, 170, 170, 20, "Text Font:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)textfont_cb);
      o->hide();
      o->menu(fontmenu);
    }
    { Fl_Input* o = new Fl_Input(90, 170, 170, 20, "xclass:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)xclass_cb);
      o->when(FL_WHEN_NEVER);
    }
    { Shortcut_Button* o = new Shortcut_Button(90, 170, 270, 20, "Shortcut:");
      o->box(FL_THIN_UP_BOX);
      o->color(7);
      o->selection_color(7);
      o->callback((Fl_Callback*)shortcut_in_cb);
      o->align(FL_ALIGN_LEFT);
    }
    { Fl_Value_Input* o = new Fl_Value_Input(260, 170, 50, 20);
      o->box(FL_THIN_UP_BOX);
      o->maximum(100);
      o->step(1);
      o->value(14);
      o->callback((Fl_Callback*)textsize_cb);
      o->hide();
    }
    { Fl_Button* o = new Fl_Button(310, 170, 50, 20, "Text Color");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(8);
      o->callback((Fl_Callback*)textcolor_cb);
      o->hide();
    }
    { Fl_Value_Input* o = new Fl_Value_Input(20, 205, 60, 20, "Size:");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(10);
      o->step(0.010101);
      o->callback((Fl_Callback*)slider_size_cb);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Value_Input* o = new Fl_Value_Input(90, 205, 60, 20, "Minimum:");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)min_cb);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Value_Input* o = new Fl_Value_Input(160, 205, 60, 20, "Maximum:");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(10);
      o->value(1);
      o->callback((Fl_Callback*)max_cb);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Value_Input* o = new Fl_Value_Input(230, 205, 60, 20, "Step:");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)step_cb);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Value_Input* o = new Fl_Value_Input(300, 205, 60, 20, "Value:");
      o->box(FL_THIN_UP_BOX);
      o->labelsize(10);
      o->callback((Fl_Callback*)value_cb);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Group* o = new Fl_Group(20, 230, 340, 20);
      o->callback((Fl_Callback*)propagate_load);
      o->align(FL_ALIGN_TOP_LEFT);
      { Fl_Light_Button* o = new Fl_Light_Button(20, 230, 70, 20, "non_modal");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(9);
        o->callback((Fl_Callback*)non_modal_cb);
        o->align(132|FL_ALIGN_INSIDE);
      }
      { Fl_Light_Button* o = new Fl_Light_Button(90, 230, 60, 20, "visible");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(10);
        o->callback((Fl_Callback*)visible_cb);
      }
      { Fl_Light_Button* o = new Fl_Light_Button(90, 230, 60, 20, "modal");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(10);
        o->callback((Fl_Callback*)modal_cb);
      }
      { Fl_Light_Button* o = new Fl_Light_Button(160, 230, 60, 20, "active");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(10);
        o->callback((Fl_Callback*)active_cb);
      }
      { Fl_Light_Button* o = new Fl_Light_Button(160, 230, 60, 20, "border");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(10);
        o->callback((Fl_Callback*)border_cb);
      }
      { Fl_Light_Button* o = new Fl_Light_Button(230, 230, 60, 20, "resizable");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(10);
        o->callback((Fl_Callback*)resizable_cb);
        o->when(FL_WHEN_CHANGED);
      }
      { Fl_Light_Button* o = new Fl_Light_Button(300, 230, 60, 20, "hotspot");
        o->box(FL_THIN_UP_BOX);
        o->selection_color(1);
        o->labelsize(10);
        o->callback((Fl_Callback*)hotspot_cb);
        o->when(FL_WHEN_CHANGED);
      }
      o->end();
    }
    { Fl_Input* o = v_input[0] = new Fl_Input(90, 260, 270, 20, "Extra Code:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)v_input_cb, (void*)(0));
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = v_input[1] = new Fl_Input(90, 280, 270, 20);
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)v_input_cb, (void*)(1));
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = v_input[2] = new Fl_Input(90, 300, 270, 20);
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)v_input_cb, (void*)(2));
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = v_input[3] = new Fl_Input(90, 320, 270, 20);
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)v_input_cb, (void*)(3));
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Box* o = new Fl_Box(0, 350, 90, 20, "Callback:");
      o->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
    }
    { Fl_Input* o = new Fl_Input(90, 350, 270, 50);
      o->type(4);
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)callback_cb);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Box* o = new Fl_Box(90, 370, 100, 30, "label");
      o->hide();
      o->deactivate();
      Fl_Group::current()->resizable(o);
    }
    { Fl_Input* o = new Fl_Input(90, 400, 170, 20, "user_data:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)user_data_cb);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Input* o = new Fl_Input(300, 400, 60, 20, "Type:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)user_data_type_cb);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Choice* o = new Fl_Choice(90, 420, 100, 20, "When:");
      o->box(FL_THIN_UP_BOX);
      o->callback((Fl_Callback*)when_cb);
      o->when(FL_WHEN_NEVER);
      o->menu(whenmenu);
    }
    { Fl_Light_Button* o = new Fl_Light_Button(190, 420, 70, 20, "no change");
      o->box(FL_THIN_UP_BOX);
      o->selection_color(1);
      o->labelsize(10);
      o->callback((Fl_Callback*)when_button_cb);
      o->when(FL_WHEN_NEVER);
    }
    { Fl_Group* o = new Fl_Group(10, 450, 350, 20);
      { Fl_Button* o = new Fl_Button(10, 450, 80, 20, "no &overlay");
        o->labelcolor(1);
        o->callback((Fl_Callback*)overlay_cb);
      }
      { Fl_Button* o = new Fl_Button(100, 450, 80, 20, "Revert");
        o->callback((Fl_Callback*)revert_cb);
      }
      { Fl_Button* o = new Fl_Button(190, 450, 80, 20, "Cancel");
        o->callback((Fl_Callback*)cancel_cb);
      }
      { Fl_Return_Button* o = new Fl_Return_Button(280, 450, 80, 20, "OK");
        o->callback((Fl_Callback*)ok_cb);
      }
      o->end();
    }
    o->end();
  }
  return w;
}