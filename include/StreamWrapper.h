/*
  +----------------------------------------------------------------------+
  | SeasLog                                                              |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Chitao Gao  <neeke@php.net>                                  |
  +----------------------------------------------------------------------+
*/

#ifndef _SEASLOG_STREAMWRAPPER_H_
#define _SEASLOG_STREAMWRAPPER_H_

#include "php_seaslog.h"

void seaslog_init_stream_list(TSRMLS_D);
int seaslog_clear_stream(int destroy, int model, char *opt TSRMLS_DC);
php_stream *process_stream(char *opt, int opt_len TSRMLS_DC);

#endif /* _SEASLOG_STREAMWRAPPER_H_ */

