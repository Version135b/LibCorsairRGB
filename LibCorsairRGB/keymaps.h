#ifndef KEYBOARD_H
#define KEYBOARD_H
  #ifdef LIBCORSAIRRGB_EXPORTS
  #define LIBCORSAIRRGB_API __declspec(dllexport)
  #else
  #define LIBCORSAIRRGB_API __declspec(dllimport)
  #endif

  LIBCORSAIRRGB_API enum k70_iso_keymap {
    escape = 0x0,
    grave = 0x01,
    tab = 0x02,
    capslock = 0x03,
    lshift = 0x04,
    lctrl = 0x05,
    f12 = 0x06,
    equals = 0x07,
    winlock = 0x08,
    numpad7 = 0x09,
    f1 = 0x0C,
    num1 = 0x0D,
    q = 0x0E,
    a = 0x0F,
    bslash = 0x10,
    lwinkey = 0x11,
    printscrn = 0x12,
    mute = 0x14,
    numpad8 = 0x15,
    f2 = 0x18,
    num2 = 0x19,
    w = 0x1A,
    s = 0x1B,
    z = 0x1C,
    alt = 0x1D,
    scoll_lock = 0x1E,
    backspace = 0x1F,
    mediastop = 0x20,
    numpad9 = 0x21,
    f3 = 0x24,
    num3 = 0x25,
    e = 0x26,
    d = 0x27,
    x = 0x28,
    pausebreak = 0x2A,
    del = 0x2B,
    mediaback = 0x2C,
    f4 = 0x30,
    num4 = 0x31,
    r = 0x32,
    f = 0x33,
    c = 0x34,
    space = 0x35,
    insert = 0x36,
    end = 0x37,
    mediaplaypause = 0x38,
    numpad4 = 0x39,
    f5 = 0x3C,
    num5 = 0x3D,
    t = 0x3E,
    g = 0x3F,
    v = 0x40,
    home = 0x42,
    pagedown = 0x43,
    medianext = 0x44,
    numpad5 = 0x45,
    f6 = 0x48,
    num6 = 0x49,
    y = 0x4A,
    h = 0x4B,
    b = 0x4C,
    pageup = 0x4E,
    rshift = 0x4F,
    numlock = 0x50,
    numpad6 = 0x51,
    f7 = 0x54,
    num7 = 0x55,
    u = 0x56,
    j = 0x57,
    n = 0x58,
    altgr = 0x59,
    rsquare = 0x5A,
    rctrl = 0x5B,
    divide = 0x5C,
    numpad1 = 0x5D,
    f8 = 0x60,
    num8 = 0x61,
    i = 0x62,
    k = 0x63,
    m = 0x64,
    rwinkey = 0x65,
    arrowup = 0x67,
    multiply = 0x68,
    numpad2 = 0x69,
    f9 = 0x6C,
    num9 = 0x6D,
    o = 0x6E,
    l = 0x6F,
    comma = 0x70,
    contextmenu = 0x71,
    hash = 0x72,
    arrowleft = 0x73,
    minus = 0x74,
    numpad3 = 0x75,
    f10 = 0x78,
    num0 = 0x79,
    p = 0x7A,
    semicolon = 0x7B,
    period = 0x7C,
    enter = 0x7E,
    arrowdown = 0x7F,
    plus = 0x80,
    numpad0 = 0x81,
    f11 = 0x84,
    dash = 0x85,
    lsquare = 0x86,
    apostrophe = 0x87,
    fslash = 0x88,
    brightness = 0x89,
    arrowright = 0x8B,
    numpadenter = 0x8C,
    decimal = 0x8D,
    missing = 0xFF
  };

  extern LIBCORSAIRRGB_API k70_iso_keymap k70_iso_matrix[7][22];

  k70_iso_keymap k70_iso_matrix[7][22] = {
    {k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::brightness, k70_iso_keymap::winlock, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::mute, k70_iso_keymap::missing, k70_iso_keymap::missing},
    {k70_iso_keymap::escape, k70_iso_keymap::missing, k70_iso_keymap::f1, k70_iso_keymap::f2, k70_iso_keymap::f3, k70_iso_keymap::f4, k70_iso_keymap::f5, k70_iso_keymap::f6, k70_iso_keymap::f7, k70_iso_keymap::f8, k70_iso_keymap::missing, k70_iso_keymap::f9, k70_iso_keymap::f10, k70_iso_keymap::f11, k70_iso_keymap::f12, k70_iso_keymap::printscrn, k70_iso_keymap::scoll_lock, k70_iso_keymap::pausebreak, k70_iso_keymap::mediastop, k70_iso_keymap::mediaback, k70_iso_keymap::mediaplaypause, k70_iso_keymap::medianext},
    {k70_iso_keymap::grave, k70_iso_keymap::num1, k70_iso_keymap::num2, k70_iso_keymap::num3, k70_iso_keymap::num4, k70_iso_keymap::num5, k70_iso_keymap::num6, k70_iso_keymap::num7, k70_iso_keymap::num8, k70_iso_keymap::num9, k70_iso_keymap::num0, k70_iso_keymap::dash, k70_iso_keymap::equals, k70_iso_keymap::backspace, k70_iso_keymap::backspace, k70_iso_keymap::insert, k70_iso_keymap::home, k70_iso_keymap::pageup, k70_iso_keymap::numlock, k70_iso_keymap::divide, k70_iso_keymap::multiply, k70_iso_keymap::minus},
    {k70_iso_keymap::tab, k70_iso_keymap::q, k70_iso_keymap::w, k70_iso_keymap::e, k70_iso_keymap::r, k70_iso_keymap::t, k70_iso_keymap::y, k70_iso_keymap::u, k70_iso_keymap::i, k70_iso_keymap::o, k70_iso_keymap::p, k70_iso_keymap::lsquare, k70_iso_keymap::rsquare, k70_iso_keymap::enter, k70_iso_keymap::enter, k70_iso_keymap::del, k70_iso_keymap::end, k70_iso_keymap::pagedown, k70_iso_keymap::numpad7, k70_iso_keymap::numpad8, k70_iso_keymap::numpad9, k70_iso_keymap::plus},
    {k70_iso_keymap::capslock, k70_iso_keymap::a, k70_iso_keymap::s, k70_iso_keymap::d, k70_iso_keymap::f, k70_iso_keymap::g, k70_iso_keymap::h, k70_iso_keymap::j, k70_iso_keymap::k, k70_iso_keymap::l, k70_iso_keymap::semicolon, k70_iso_keymap::apostrophe, k70_iso_keymap::hash, k70_iso_keymap::enter, k70_iso_keymap::enter, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::numpad4, k70_iso_keymap::numpad5, k70_iso_keymap::numpad6, k70_iso_keymap::plus},
    {k70_iso_keymap::lshift, k70_iso_keymap::bslash, k70_iso_keymap::z, k70_iso_keymap::x, k70_iso_keymap::c, k70_iso_keymap::v, k70_iso_keymap::b, k70_iso_keymap::n, k70_iso_keymap::m, k70_iso_keymap::comma, k70_iso_keymap::period, k70_iso_keymap::fslash, k70_iso_keymap::rshift, k70_iso_keymap::rshift, k70_iso_keymap::rshift, k70_iso_keymap::missing, k70_iso_keymap::arrowup, k70_iso_keymap::missing, k70_iso_keymap::numpad1, k70_iso_keymap::numpad2, k70_iso_keymap::numpad3, k70_iso_keymap::numpadenter},
    {k70_iso_keymap::lctrl, k70_iso_keymap::lwinkey, k70_iso_keymap::alt, k70_iso_keymap::alt, k70_iso_keymap::missing, k70_iso_keymap::space, k70_iso_keymap::space, k70_iso_keymap::space, k70_iso_keymap::missing, k70_iso_keymap::missing, k70_iso_keymap::altgr, k70_iso_keymap::rwinkey, k70_iso_keymap::contextmenu, k70_iso_keymap::rctrl, k70_iso_keymap::rctrl, k70_iso_keymap::arrowleft, k70_iso_keymap::arrowdown, k70_iso_keymap::arrowright, k70_iso_keymap::numpad0, k70_iso_keymap::numpad0, k70_iso_keymap::decimal, k70_iso_keymap::numpadenter}
  };
#endif