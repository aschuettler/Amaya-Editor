/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotBool ElementHasAction ( PtrElement pEl,
                                   APPevent event,
                                   ThotBool pre );
extern ThotBool CallEventAttribute ( NotifyAttribute * notifyAttr,
                                     ThotBool pre );
extern ThotBool CallEventType ( NotifyEvent * notifyEvent,
                                ThotBool pre );
extern void CallbackError ( int ref,
                            int typedata,
                            char *data );
extern ThotBool CallMenu ( ThotWidget w,
                           struct Cat_Context *catalogue,
                           caddr_t call_d );
extern ThotBool CallMenuWX ( ThotWidget w,
                             void * catalogue );
extern ThotBool CallMenuGTK ( ThotWidget w,
                              struct Cat_Context *catalogue );
extern void TtaDefineDialogueCallback ( Proc procedure );

#else /* __STDC__ */

extern ThotBool ElementHasAction ( PtrElement pEl,
                                     APPevent event,
                                     ThotBool pre );
extern ThotBool CallEventAttribute ( NotifyAttribute * notifyAttr,
                                       ThotBool pre );
extern ThotBool CallEventType ( NotifyEvent * notifyEvent,
                                  ThotBool pre );
extern void CallbackError ( int ref,
                              int typedata,
                              char *data );
extern ThotBool CallMenu ( ThotWidget w,
                             struct Cat_Context *catalogue,
                             caddr_t call_d );
extern ThotBool CallMenuWX ( ThotWidget w,
                               void * catalogue );
extern ThotBool CallMenuGTK ( ThotWidget w,
                                struct Cat_Context *catalogue );
extern void TtaDefineDialogueCallback ( Proc procedure );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
