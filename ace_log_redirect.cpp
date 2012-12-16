#include <ace/Log_Msg.h>
#include <ace/streams.h>

int ACE_TMAIN (int, ACE_TCHAR *argv[]) {
  // -> stderr
  ACE_LOG_MSG->open(argv[0], ACE_Log_Msg::STDERR);
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world. -> stderr\n")));

  // -> syslog
  ACE_LOG_MSG->open(argv[0], ACE_Log_Msg::SYSLOG, ACE_TEXT("ace_log_redirect"));
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world. -> syslog\n")));

  // -> ostream
  ACE_OSTREAM_TYPE *ostream = new std::ofstream(ACE_TEXT("ace_log_redirect.log"), ios::out | ios::app);
  ACE_LOG_MSG->msg_ostream(ostream, 1);
  /* error. will -> syslog ostream
  ACE_LOG_MSG->set_flags(ACE_Log_Msg::OSTREAM);
  */
  ACE_LOG_MSG->open(argv[0], ACE_Log_Msg::OSTREAM);
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world. -> ostream\n")));

  // -> stderr ostream
  ACE_LOG_MSG->set_flags(ACE_Log_Msg::STDERR | ACE_Log_Msg::OSTREAM);
  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world. -> stderr ostream\n")));

  return 0;
}
