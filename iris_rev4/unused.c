// Window Movement

// bool is_alt_tab_active = false;
// uint16_t alt_tab_timer = 0;

// if (clockwise) {
//   if (!is_alt_tab_active) {
//     is_alt_tab_active = true;
//    register_code(KC_LALT);
//  }
//   alt_tab_timer = timer_read();
//   tap_code16(KC_TAB);
// } else {
//   alt_tab_timer = timer_read();
//   tap_code16(S(KC_TAB));
// }

// void matrix_scan_user(void) {
//   if (is_alt_tab_active) {
//     if (timer_elapsed(alt_tab_timer) > 1250) {
//       unregister_code(KC_LALT);
//       is_alt_tab_active = false;
//     }
//   }
// }