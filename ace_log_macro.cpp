#include <ace/Log_Msg.h>

void subfunction() {
  ACE_TRACE(ACE_TEXT("subfunction"));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%IACE_DEBUG subfunction\n")));
}

int ACE_TMAIN (int, ACE_TCHAR *[]) {
  char buf[] = "abcdefjfhijlmnopqrstuvwzyz";
  // Using the ACE Logging Facility
  // http://www.pearsonhighered.com/samplechapter/0201699710.pdf
  // Table 3.3. ACE Logging Macros
  //
  // Common Logging Macros:
  // ACE_DEBUG ACE_ERROR ACE_TRACE

  // Output:
  // ACE_ASSERT: file ace_log_macro.cpp, line 12 assertion failed for '1==0'.Aborting...
  // Aborted (core dumped)
  //ACE_ASSERT(1==0);

  ACE_HEX_DUMP((LM_DEBUG, buf, sizeof(buf)/sizeof(buf[0]), ACE_TEXT("ACE_HEX_DUMP")));

  // Output:
  // return 1;
  //ACE_RETURN(1);

  // Output:
  // ACE_ERROR_RETURN hello
  // return 2;
  //ACE_ERROR_RETURN((LM_DEBUG, ACE_TEXT("ACE_ERROR_RETURN %s\n"), ACE_TEXT("hello")), 2);

  ACE_TRACE(ACE_TEXT("main"));
  ACE_ERROR((LM_DEBUG, ACE_TEXT("%IACE_ERROR %s\n"), ACE_TEXT("hello")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("%IACE_DEBUG %s\n"), ACE_TEXT("hello")));
  subfunction();
  return 0;
}
