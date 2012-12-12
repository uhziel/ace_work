#include <ace/Log_Msg.h>

void foobar() {
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%R %R\n"), 10.243));
}

int ACE_TMAIN (int, ACE_TCHAR *[]) {
  // Using the ACE Logging Facility
  // http://www.pearsonhighered.com/samplechapter/0201699710.pdf
  // Table 3.2. ACE Logging Format Directives
  //
  // Common Format Directives:
  // %I(indent) %s(string) %d(digit) %g(float)

  // Output:
  // hello, world
  // Aborting...Aborted (core dumped)
  //ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world\n%a")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%c %c\n"), 'a'));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%C %C\n"), ACE_TEXT("hello")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%d %d\n"), -1));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%i %i\n"), -1));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%e %e\n"), 1e-19));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%E %E\n"), 1e-19));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%f %f\n"), 1e-19));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%F %F\n"), 1e-19));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%g %g\n"), 1e-19));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%G %G\n"), 1e-19));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%l %l\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%M %M\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%m %m\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%N %N\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%n %n\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%o %o\n"), 10));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%p %p\n"), ACE_TEXT("errno")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%r %r\n"), foobar));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%S %S\n"), 9));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%s %s\n"), ACE_TEXT("hello")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%T %T\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%D %D\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%%t %t\n")));
  return 0;
}
