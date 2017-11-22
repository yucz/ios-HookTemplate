
#include <IOKit/IOTypes.h>
#include <IOKit/IOKitLib.h>
#include <CoreSurface/CoreSurface.h>

#include <stdio.h> // For mprotect
#include <sys/mman.h>

#ifdef __cplusplus
extern "C" {
#endif

#define kIOMobileFramebufferError 0xE0000000

typedef kern_return_t IOMobileFramebufferReturn;
typedef io_service_t IOMobileFramebufferService;
#if TARGET_CPU_ARM64
typedef void * IOMobileFramebufferConnection;  
#else
typedef io_connect_t IOMobileFramebufferConnection;
#endif
/*! @function IOMobileFramebufferOpen
 @abstract Basically wraps IOServiceOpen, works the same way as the documented method
 @param service The io_service_t you get from IOServiceGetMatchingService(kIOMasterPortDefault, IOServiceMatching("IOMobileFramebuffer"))
 @param owningTask Use mach_task_self()
 @param type Currently unknown
 @param connection A pointer to your new connection
 @result A IOMobileFramebufferReturn error code. */

IOMobileFramebufferReturn
IOMobileFramebufferOpen(
                        IOMobileFramebufferService service,
                        task_port_t owningTask,
                        unsigned int type,
                        IOMobileFramebufferConnection * connection );

/*! @function IOMobileFramebufferGetLayerDefaultSurface
 @abstract Gets the CALayer associated with the display
 @param connection Your connection pointer
 @param surface Your surface ID
 @param layer A pointer to your new layer
 @result A IOMobileFramebufferReturn error code. */
 #if TARGET_CPU_ARM64

IOMobileFramebufferReturn
IOMobileFramebufferGetLayerDefaultSurface(
                                          IOMobileFramebufferConnection connection,
                                          void* surface,
                                          CoreSurfaceBufferRef *ptr);
#else

IOMobileFramebufferReturn
IOMobileFramebufferGetLayerDefaultSurface(
                                          IOMobileFramebufferConnection connection,
                                          int surface,
                                          CoreSurfaceBufferRef *ptr);
#endif

IOMobileFramebufferReturn
IOMobileFramebufferSwapBegin(
                             IOMobileFramebufferConnection connection,
                             int *token);

IOMobileFramebufferReturn
IOMobileFramebufferSwapEnd(
                           IOMobileFramebufferConnection connection);

IOMobileFramebufferReturn
IOMobileFramebufferSwapSetLayer(
                                IOMobileFramebufferConnection connection,
                                int layerid,
                                CoreSurfaceBufferRef surface);

IOMobileFramebufferReturn
IOMobileFramebufferSwapWait(
                            IOMobileFramebufferConnection connection,
                            int token,
                            int something);

//IOMobileFramebufferReturn
//IOMobileFramebufferGetID(
//                       IOMobileFramebufferService *connect,
//                       CFTypeID *id );

/*
 IOMobileFramebufferGetDisplaySize(io_connect_t connect, CGSize *t);
 */

#ifdef __cplusplus
}
#endif