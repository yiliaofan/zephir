
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/concat.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Test_BuiltIn_StringMethods) {

	ZEPHIR_REGISTER_CLASS(Test\\BuiltIn, StringMethods, test, builtin_stringmethods, test_builtin_stringmethods_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLength1) {

	zval _0;


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "hello", 0);
	RETURN_LONG(zephir_fast_strlen_ev(&_0));

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLength2) {

	zval _0;


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "hello", 0);
	RETURN_LONG(zephir_fast_strlen_ev(&_0));

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLength3) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SS(_0, "hello", "hello");
	RETURN_MM_LONG(zephir_fast_strlen_ev(_0));

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLength4) {

	zval *a_param = NULL;
	zval *a = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	zephir_get_strval(a, a_param);


	RETURN_MM_LONG(zephir_fast_strlen_ev(a));

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLength5) {

	zval *a_param = NULL;
	zval *a = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	zephir_get_strval(a, a_param);


	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_CONCAT_SV(_0, "hello", a);
	RETURN_MM_LONG(zephir_fast_strlen_ev(_0));

}

PHP_METHOD(Test_BuiltIn_StringMethods, getIndex) {

	zval *str_param = NULL, *needle_param = NULL, *_0;
	zval *str = NULL, *needle = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &needle_param);

	zephir_get_strval(str, str_param);
	zephir_get_strval(needle, needle_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_strpos(_0, str, needle, 0 );
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getIndexWithPosition) {

	int position;
	zval *str_param = NULL, *needle_param = NULL, *position_param = NULL, _0, *_1;
	zval *str = NULL, *needle = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 3, 0, &str_param, &needle_param, &position_param);

	zephir_get_strval(str, str_param);
	zephir_get_strval(needle, needle_param);
	position = zephir_get_intval(position_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, position);
	ZEPHIR_INIT_VAR(_1);
	zephir_fast_strpos(_1, str, needle, zephir_get_intval(&_0) );
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getTrimmed) {

	zval *_0, _1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, " hello \t\n", 0);
	zephir_fast_trim(_0, &_1, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getTrimmed1) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_trim(_0, str, NULL , ZEPHIR_TRIM_BOTH TSRMLS_CC);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLeftTrimmed) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_trim(_0, str, NULL , ZEPHIR_TRIM_LEFT TSRMLS_CC);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getRightTrimmed) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_trim(_0, str, NULL , ZEPHIR_TRIM_RIGHT TSRMLS_CC);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLower) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_strtolower(_0, str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getUpper) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_fast_strtoupper(_0, str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getLowerFirst) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "lcfirst", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getUpperFirst) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "ucfirst", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getFormatted) {

	zval *str_param = NULL, _0, *_1;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "hello %s!", 0);
	ZEPHIR_INIT_VAR(_1);
	zephir_call_func_p2(_1, "sprintf", &_0, str);
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getMd5) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "md5", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getSha1) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "sha1", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getNl2br) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "nl2br", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getParsedCsv) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "str_getcsv", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getParsedJson) {

	zend_bool asObject;
	zval *str_param = NULL, *asObject_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &str_param, &asObject_param);

	zephir_get_strval(str, str_param);
	if (!asObject_param) {
		asObject = 0;
	} else {
		asObject = zephir_get_boolval(asObject_param);
	}


	ZEPHIR_INIT_VAR(_0);
	zephir_json_decode(_0, &(_0), str, zephir_get_intval(str)  TSRMLS_CC);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getRepeatted) {

	int count;
	zval *str_param = NULL, *count_param = NULL, _0, *_1;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &count_param);

	zephir_get_strval(str, str_param);
	count = zephir_get_intval(count_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, count);
	ZEPHIR_INIT_VAR(_1);
	zephir_call_func_p2(_1, "str_repeat", str, &_0);
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getShuffled) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "str_shuffle", str);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getSplited) {

	zval *str_param = NULL, *del_param = NULL, *_0;
	zval *str = NULL, *del = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &str_param, &del_param);

	zephir_get_strval(str, str_param);
	zephir_get_strval(del, del_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p2(_0, "str_split", str, del);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getCompare) {

	zval *left_param = NULL, *right_param = NULL, *_0;
	zval *left = NULL, *right = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &left_param, &right_param);

	zephir_get_strval(left, left_param);
	zephir_get_strval(right, right_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p2(_0, "strcmp", left, right);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getCompareLocale) {

	zval *left_param = NULL, *right_param = NULL, *_0;
	zval *left = NULL, *right = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &left_param, &right_param);

	zephir_get_strval(left, left_param);
	zephir_get_strval(right, right_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p2(_0, "strcoll", left, right);
	RETURN_CCTOR(_0);

}

PHP_METHOD(Test_BuiltIn_StringMethods, getHtmlSpecialChars) {

	zval *str_param = NULL, *_0;
	zval *str = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &str_param);

	zephir_get_strval(str, str_param);


	ZEPHIR_INIT_VAR(_0);
	zephir_call_func_p1(_0, "htmlspecialchars", str);
	RETURN_CCTOR(_0);

}

