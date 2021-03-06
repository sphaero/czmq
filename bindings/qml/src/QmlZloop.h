/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#ifndef QML_ZLOOP_H
#define QML_ZLOOP_H

#include <QtQml>

#include <czmq.h>
#include "qml_czmq_plugin.h"


class QmlZloop : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isNULL READ isNULL)

public:
    zloop_t *self;

    QmlZloop() { self = NULL; }
    bool isNULL() { return self == NULL; }

    static QObject* qmlAttachedProperties(QObject* object); // defined in QmlZloop.cpp

public slots:
    //  Register socket reader with the reactor. When the reader has messages,
    //  the reactor will call the handler, passing the arg. Returns 0 if OK, -1
    //  if there was an error. If you register the same socket more than once,
    //  each instance will invoke its corresponding handler.
    int reader (QmlZsock *sock, zloop_reader_fn handler, void *arg);

    //  Cancel a socket reader from the reactor. If multiple readers exist for
    //  same socket, cancels ALL of them.
    void readerEnd (QmlZsock *sock);

    //  Configure a registered reader to ignore errors. If you do not set this,
    //  then readers that have errors are removed from the reactor silently.
    void readerSetTolerant (QmlZsock *sock);

    //  Register low-level libzmq pollitem with the reactor. When the pollitem
    //  is ready, will call the handler, passing the arg. Returns 0 if OK, -1
    //  if there was an error. If you register the pollitem more than once, each
    //  instance will invoke its corresponding handler. A pollitem with
    //  socket=NULL and fd=0 means 'poll on FD zero'.
    int poller (zmq_pollitem_t *item, zloop_fn handler, void *arg);

    //  Cancel a pollitem from the reactor, specified by socket or FD. If both
    //  are specified, uses only socket. If multiple poll items exist for same
    //  socket/FD, cancels ALL of them.
    void pollerEnd (zmq_pollitem_t *item);

    //  Configure a registered poller to ignore errors. If you do not set this,
    //  then poller that have errors are removed from the reactor silently.
    void pollerSetTolerant (zmq_pollitem_t *item);

    //  Register a timer that expires after some delay and repeats some number of
    //  times. At each expiry, will call the handler, passing the arg. To run a
    //  timer forever, use 0 times. Returns a timer_id that is used to cancel the
    //  timer in the future. Returns -1 if there was an error.
    int timer (size_t delay, size_t times, zloop_timer_fn handler, void *arg);

    //  Cancel a specific timer identified by a specific timer_id (as returned by
    //  zloop_timer).
    int timerEnd (int timerId);

    //  Register a ticket timer. Ticket timers are very fast in the case where
    //  you use a lot of timers (thousands), and frequently remove and add them.
    //  The main use case is expiry timers for servers that handle many clients,
    //  and which reset the expiry timer for each message received from a client.
    //  Whereas normal timers perform poorly as the number of clients grows, the
    //  cost of ticket timers is constant, no matter the number of clients. You
    //  must set the ticket delay using zloop_set_ticket_delay before creating a
    //  ticket. Returns a handle to the timer that you should use in
    //  zloop_ticket_reset and zloop_ticket_delete.
    void *ticket (zloop_timer_fn handler, void *arg);

    //  Reset a ticket timer, which moves it to the end of the ticket list and
    //  resets its execution time. This is a very fast operation.
    void ticketReset (void *handle);

    //  Delete a ticket timer. We do not actually delete the ticket here, as
    //  other code may still refer to the ticket. We mark as deleted, and remove
    //  later and safely.
    void ticketDelete (void *handle);

    //  Set the ticket delay, which applies to all tickets. If you lower the
    //  delay and there are already tickets created, the results are undefined.
    void setTicketDelay (size_t ticketDelay);

    //  Set hard limit on number of timers allowed. Setting more than a small
    //  number of timers (10-100) can have a dramatic impact on the performance
    //  of the reactor. For high-volume cases, use ticket timers. If the hard
    //  limit is reached, the reactor stops creating new timers and logs an
    //  error.
    void setMaxTimers (size_t maxTimers);

    //  Set verbose tracing of reactor on/off. The default verbose setting is
    //  off (false).
    void setVerbose (bool verbose);

    //  By default the reactor stops if the process receives a SIGINT or SIGTERM
    //  signal. This makes it impossible to shut-down message based architectures
    //  like zactors. This method lets you switch off break handling. The default
    //  nonstop setting is off (false).
    void setNonstop (bool nonstop);

    //  Start the reactor. Takes control of the thread and returns when the 0MQ
    //  context is terminated or the process is interrupted, or any event handler
    //  returns -1. Event handlers may register new sockets and timers, and
    //  cancel sockets. Returns 0 if interrupted, -1 if canceled by a handler.
    int start ();
};

class QmlZloopAttached : public QObject
{
    Q_OBJECT
    QObject* m_attached;

public:
    QmlZloopAttached (QObject* attached) {
        Q_UNUSED (attached);
    };

public slots:
    //  Self test of this class.
    void test (bool verbose);

    //  Create a new zloop reactor
    QmlZloop *construct ();

    //  Destroy a reactor
    void destruct (QmlZloop *qmlSelf);
};


QML_DECLARE_TYPEINFO(QmlZloop, QML_HAS_ATTACHED_PROPERTIES)

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
