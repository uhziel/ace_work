#include <ace/Log_Msg.h>

void foo (void);

int ACE_TMAIN (int, ACE_TCHAR *[])
{
  ACE_TRACE(ACE_TEXT ("main"));
  ACE_DEBUG ((LM_INFO, ACE_TEXT ("%IHi Mom\n")));
  foo();
  ACE_DEBUG ((LM_INFO, ACE_TEXT ("%IGoodnight\n")));
  return 0;
}

void foo (void)
{
  ACE_TRACE (ACE_TEXT ("foo"));
  ACE_DEBUG ((LM_INFO, ACE_TEXT ("%IHowdy Pardner\n")));
}
