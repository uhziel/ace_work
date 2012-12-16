#include <ace/Log_Msg.h>
#include <ace/streams.h>

int ACE_TMAIN (int, ACE_TCHAR *argv[]) {
  ACE_OSTREAM_TYPE *ostream = new std::ofstream(ACE_TEXT("ace_log_ostream.log"));
  ACE_LOG_MSG->msg_ostream(ostream, 1);
  ACE_LOG_MSG->set_flags(ACE_Log_Msg::OSTREAM);
  ACE_LOG_MSG->clr_flags(ACE_Log_Msg::STDERR);

  ACE_DEBUG((LM_DEBUG, ACE_TEXT("hello, world\n")));
  return 0;
}
