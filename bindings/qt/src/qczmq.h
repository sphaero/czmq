/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#ifndef Q_QCZMQ_H
#define Q_QCZMQ_H

#include <QObject>
#include <QString>
#include <czmq.h>

#if defined(Q_OS_WIN)
#  if !defined(QT_CZMQ_EXPORT) && !defined(QT_CZMQ_IMPORT)
#    define QT_CZMQ_EXPORT
#  elif defined(QT_CZMQ_IMPORT)
#    if defined(QT_CZMQ_EXPORT)
#      undef QT_CZMQ_EXPORT
#    endif
#    define QT_CZMQ_EXPORT __declspec(dllimport)
#  elif defined(QT_CZMQ_EXPORT)
#    undef QT_CZMQ_EXPORT
#    define QT_CZMQ_EXPORT __declspec(dllexport)
#  endif
#else
#  define QT_CZMQ_EXPORT
#endif

//  Opaque class structures to allow forward references
class QZactor;
class QZargs;
class QZarmour;
class QZcert;
class QZcertstore;
class QZchunk;
class QZclock;
class QZconfig;
class QZdigest;
class QZdir;
class QZdirPatch;
class QZfile;
class QZframe;
class QZhash;
class QZhashx;
class QZiflist;
class QZlist;
class QZlistx;
class QZloop;
class QZmsg;
class QZpoller;
class QZproc;
class QZsock;
class QZstr;
class QZsys;
class QZtimerset;
class QZtrie;
class QZuuid;
class QZhttpClient;
class QZhttpServer;
class QZhttpServerOptions;
class QZhttpRequest;
class QZhttpResponse;
class QZudp;

//  Public API classes
#include "qzactor.h"
#include "qzargs.h"
#include "qzarmour.h"
#include "qzcert.h"
#include "qzcertstore.h"
#include "qzchunk.h"
#include "qzclock.h"
#include "qzconfig.h"
#include "qzdigest.h"
#include "qzdir.h"
#include "qzdirpatch.h"
#include "qzfile.h"
#include "qzframe.h"
#include "qzhash.h"
#include "qzhashx.h"
#include "qziflist.h"
#include "qzlist.h"
#include "qzlistx.h"
#include "qzloop.h"
#include "qzmsg.h"
#include "qzpoller.h"
#include "qzproc.h"
#include "qzsock.h"
#include "qzstr.h"
#include "qzsys.h"
#include "qztimerset.h"
#include "qztrie.h"
#include "qzuuid.h"
#include "qzhttpclient.h"
#include "qzhttpserver.h"
#include "qzhttpserveroptions.h"
#include "qzhttprequest.h"
#include "qzhttpresponse.h"
#include "qzudp.h"

#endif //  Q_CZMQ_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
