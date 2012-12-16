#include <ace/Log_Msg.h>

int ACE_TMAIN (int, ACE_TCHAR *argv[]) {
  /* method 1 */
  /*
  ACE_ASSERT(argv[0] != NULL);
  ACE_LOG_MSG->open(argv[0], ACE_Log_Msg::STDERR);
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world\n")));
  */
  /* method 2 */
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello,")));
  ACE_LOG_MSG->set_flags(ACE_Log_Msg::STDERR);
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("world\n")));
  return 0;
}
