#include <ace/Log_Msg.h>

int ACE_TMAIN (int, ACE_TCHAR *argv[]) {
  ACE_ASSERT(argv[0] != NULL);
  ACE_LOG_MSG->open(argv[0], ACE_Log_Msg::SYSLOG, ACE_TEXT("ace_log_syslog"));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world.\n")));
  /* close syslog, go back stderr */
  ACE_LOG_MSG->open(argv[0], ACE_Log_Msg::STDERR);
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("to STDERR hello, world.\n")));
  return 0;
}
