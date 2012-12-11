#include <ace/Log_Msg.h>

int ACE_TMAIN (int, ACE_TCHAR *[]) {
  // Using the ACE Logging Facility
  // http://www.pearsonhighered.com/samplechapter/0201699710.pdf
  // Table 3.1. ACE_Log_Msg Logging Severity Levels
  //
  // Common Severity Level:
  // LM_DEBUG LM_ERROR
  ACE_DEBUG((LM_TRACE, ACE_TEXT("TRACE hello, world\n")));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("DEBUG hello, world\n")));
  ACE_DEBUG((LM_INFO, ACE_TEXT("INFO hello, world\n")));
  ACE_DEBUG((LM_NOTICE, ACE_TEXT("NOTICE hello, world\n")));
  ACE_DEBUG((LM_WARNING, ACE_TEXT("WARNING hello, world\n")));
  ACE_DEBUG((LM_ERROR, ACE_TEXT("ERROR hello, world\n")));
  ACE_DEBUG((LM_CRITICAL, ACE_TEXT("CRITICAL hello, world\n")));
  ACE_DEBUG((LM_ALERT, ACE_TEXT("ALERT hello, world\n")));
  ACE_DEBUG((LM_EMERGENCY, ACE_TEXT("EMERGENCY hello, world\n")));
  return 0;
}
