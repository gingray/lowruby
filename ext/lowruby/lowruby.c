#include "lowruby.h"

VALUE rb_mLowruby;

void
Init_lowruby(void)
{
  rb_mLowruby = rb_define_module("Lowruby");
}
