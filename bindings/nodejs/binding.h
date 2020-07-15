/*  =========================================================================
    CZMQ Node.js binding header file

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of CZMQ, the high-level C binding for 0MQ:
    http://czmq.zeromq.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef CZMQ_BINDING_H_INCLUDED
#define CZMQ_BINDING_H_INCLUDED

#define CZMQ_BUILD_DRAFT_API

#include "czmq.h"
#include "nan.h"

using namespace v8;
using namespace Nan;

class Zargs: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zargs (int argc, char **argv);
        explicit Zargs (zargs_t *self);
        zargs_t *self;
    private:
        ~Zargs ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_progname);
    static NAN_METHOD (_arguments);
    static NAN_METHOD (_first);
    static NAN_METHOD (_next);
    static NAN_METHOD (_param_first);
    static NAN_METHOD (_param_next);
    static NAN_METHOD (_param_name);
    static NAN_METHOD (_get);
    static NAN_METHOD (_getx);
    static NAN_METHOD (_has);
    static NAN_METHOD (_hasx);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class Zarmour: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zarmour (void);
        explicit Zarmour (zarmour_t *self);
        zarmour_t *self;
    private:
        ~Zarmour ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_encode);
    static NAN_METHOD (_decode);
    static NAN_METHOD (_mode);
    static NAN_METHOD (_mode_str);
    static NAN_METHOD (_set_mode);
    static NAN_METHOD (_pad);
    static NAN_METHOD (_set_pad);
    static NAN_METHOD (_pad_char);
    static NAN_METHOD (_set_pad_char);
    static NAN_METHOD (_line_breaks);
    static NAN_METHOD (_set_line_breaks);
    static NAN_METHOD (_line_length);
    static NAN_METHOD (_set_line_length);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class Zcert: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zcert (void);
        explicit Zcert (zcert_t *self);
        zcert_t *self;
    private:
        ~Zcert ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_public_key);
    static NAN_METHOD (_secret_key);
    static NAN_METHOD (_public_txt);
    static NAN_METHOD (_secret_txt);
    static NAN_METHOD (_set_meta);
    static NAN_METHOD (_unset_meta);
    static NAN_METHOD (_meta);
    static NAN_METHOD (_meta_keys);
    static NAN_METHOD (_save);
    static NAN_METHOD (_save_public);
    static NAN_METHOD (_save_secret);
    static NAN_METHOD (_apply);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_eq);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class Zcertstore: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zcertstore (const char *location);
        explicit Zcertstore (zcertstore_t *self);
        zcertstore_t *self;
    private:
        ~Zcertstore ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_lookup);
    static NAN_METHOD (_insert);
    static NAN_METHOD (_empty);
    static NAN_METHOD (_print);
    static NAN_METHOD (_certs);
    static NAN_METHOD (_test);
};

class Zchunk: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zchunk (const void *data, size_t size);
        explicit Zchunk (zchunk_t *self);
        zchunk_t *self;
    private:
        ~Zchunk ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_resize);
    static NAN_METHOD (_size);
    static NAN_METHOD (_max_size);
    static NAN_METHOD (_data);
    static NAN_METHOD (_set);
    static NAN_METHOD (_append);
    static NAN_METHOD (_extend);
    static NAN_METHOD (_consume);
    static NAN_METHOD (_exhausted);
    static NAN_METHOD (_slurp);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_strhex);
    static NAN_METHOD (_strdup);
    static NAN_METHOD (_streq);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_packx);
    static NAN_METHOD (_unpack);
    static NAN_METHOD (_digest);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class Zclock: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zclock ();
    private:
        ~Zclock ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (_sleep);
    static NAN_METHOD (_time);
    static NAN_METHOD (_mono);
    static NAN_METHOD (_usecs);
    static NAN_METHOD (_timestr);
    static NAN_METHOD (_test);
};

class Zconfig: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zconfig (const char *name, zconfig_t *parent);
        explicit Zconfig (zconfig_t *self);
        zconfig_t *self;
    private:
        ~Zconfig ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_name);
    static NAN_METHOD (_value);
    static NAN_METHOD (_put);
    static NAN_METHOD (_putf);
    static NAN_METHOD (_get);
    static NAN_METHOD (_set_name);
    static NAN_METHOD (_set_value);
    static NAN_METHOD (_child);
    static NAN_METHOD (_next);
    static NAN_METHOD (_locate);
    static NAN_METHOD (_at_depth);
    static NAN_METHOD (_set_comment);
    static NAN_METHOD (_comments);
    static NAN_METHOD (_save);
    static NAN_METHOD (_savef);
    static NAN_METHOD (_filename);
    static NAN_METHOD (_reload);
    static NAN_METHOD (_chunk_load);
    static NAN_METHOD (_chunk_save);
    static NAN_METHOD (_str_load);
    static NAN_METHOD (_str_save);
    static NAN_METHOD (_has_changed);
    static NAN_METHOD (_remove_subtree);
    static NAN_METHOD (_remove);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class Zdigest: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zdigest (void);
        explicit Zdigest (zdigest_t *self);
        zdigest_t *self;
    private:
        ~Zdigest ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_update);
    static NAN_METHOD (_data);
    static NAN_METHOD (_size);
    static NAN_METHOD (_string);
    static NAN_METHOD (_test);
};

class Zdir: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zdir (const char *path, const char *parent);
        explicit Zdir (zdir_t *self);
        zdir_t *self;
    private:
        ~Zdir ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_path);
    static NAN_METHOD (_modified);
    static NAN_METHOD (_cursize);
    static NAN_METHOD (_count);
    static NAN_METHOD (_list);
    static NAN_METHOD (_remove);
    static NAN_METHOD (_diff);
    static NAN_METHOD (_resync);
    static NAN_METHOD (_cache);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class ZdirPatch: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZdirPatch (const char *path, zfile_t *file, int op, const char *alias);
        explicit ZdirPatch (zdir_patch_t *self);
        zdir_patch_t *self;
    private:
        ~ZdirPatch ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_path);
    static NAN_METHOD (_file);
    static NAN_METHOD (_op);
    static NAN_METHOD (_vpath);
    static NAN_METHOD (_digest_set);
    static NAN_METHOD (_digest);
    static NAN_METHOD (_test);
};

class Zfile: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zfile (const char *path, const char *name);
        explicit Zfile (zfile_t *self);
        zfile_t *self;
    private:
        ~Zfile ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_filename);
    static NAN_METHOD (_restat);
    static NAN_METHOD (_modified);
    static NAN_METHOD (_cursize);
    static NAN_METHOD (_is_directory);
    static NAN_METHOD (_is_regular);
    static NAN_METHOD (_is_readable);
    static NAN_METHOD (_is_writeable);
    static NAN_METHOD (_is_stable);
    static NAN_METHOD (_has_changed);
    static NAN_METHOD (_remove);
    static NAN_METHOD (_input);
    static NAN_METHOD (_output);
    static NAN_METHOD (_read);
    static NAN_METHOD (_eof);
    static NAN_METHOD (_write);
    static NAN_METHOD (_readln);
    static NAN_METHOD (_close);
    static NAN_METHOD (_digest);
    static NAN_METHOD (_test);
};

class Zframe: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zframe (const void *data, size_t size);
        explicit Zframe (zframe_t *self);
        zframe_t *self;
    private:
        ~Zframe ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_send);
    static NAN_METHOD (_size);
    static NAN_METHOD (_data);
    static NAN_METHOD (_meta);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_strhex);
    static NAN_METHOD (_strdup);
    static NAN_METHOD (_streq);
    static NAN_METHOD (_more);
    static NAN_METHOD (_set_more);
    static NAN_METHOD (_routing_id);
    static NAN_METHOD (_set_routing_id);
    static NAN_METHOD (_group);
    static NAN_METHOD (_set_group);
    static NAN_METHOD (_eq);
    static NAN_METHOD (_reset);
    static NAN_METHOD (_print);
    static NAN_METHOD (_print_n);
    static NAN_METHOD (_test);
};

class Zhash: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zhash (void);
        explicit Zhash (zhash_t *self);
        zhash_t *self;
    private:
        ~Zhash ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_delete);
    static NAN_METHOD (_rename);
    static NAN_METHOD (_size);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_keys);
    static NAN_METHOD (_cursor);
    static NAN_METHOD (_comment);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_save);
    static NAN_METHOD (_load);
    static NAN_METHOD (_refresh);
    static NAN_METHOD (_autofree);
    static NAN_METHOD (_test);
};

class Zhashx: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zhashx (void);
        explicit Zhashx (zhashx_t *self);
        zhashx_t *self;
    private:
        ~Zhashx ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_purge);
    static NAN_METHOD (_size);
    static NAN_METHOD (_keys);
    static NAN_METHOD (_values);
    static NAN_METHOD (_comment);
    static NAN_METHOD (_save);
    static NAN_METHOD (_load);
    static NAN_METHOD (_refresh);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_dup_v2);
    static NAN_METHOD (_test);
};

class Ziflist: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Ziflist (void);
        explicit Ziflist (ziflist_t *self);
        ziflist_t *self;
    private:
        ~Ziflist ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_reload);
    static NAN_METHOD (_size);
    static NAN_METHOD (_first);
    static NAN_METHOD (_next);
    static NAN_METHOD (_address);
    static NAN_METHOD (_broadcast);
    static NAN_METHOD (_netmask);
    static NAN_METHOD (_print);
    static NAN_METHOD (_new_ipv6);
    static NAN_METHOD (_reload_ipv6);
    static NAN_METHOD (_is_ipv6);
    static NAN_METHOD (_test);
};

class Zlist: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zlist (void);
        explicit Zlist (zlist_t *self);
        zlist_t *self;
    private:
        ~Zlist ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_purge);
    static NAN_METHOD (_size);
    static NAN_METHOD (_autofree);
    static NAN_METHOD (_test);
};

class Zlistx: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zlistx (void);
        explicit Zlistx (zlistx_t *self);
        zlistx_t *self;
    private:
        ~Zlistx ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_size);
    static NAN_METHOD (_purge);
    static NAN_METHOD (_sort);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_pack);
    static NAN_METHOD (_test);
};

class Zloop: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zloop (void);
        explicit Zloop (zloop_t *self);
        zloop_t *self;
    private:
        ~Zloop ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_reader_end);
    static NAN_METHOD (_reader_set_tolerant);
    static NAN_METHOD (_timer_end);
    static NAN_METHOD (_set_ticket_delay);
    static NAN_METHOD (_set_max_timers);
    static NAN_METHOD (_set_verbose);
    static NAN_METHOD (_set_nonstop);
    static NAN_METHOD (_start);
    static NAN_METHOD (_test);
};

class Zmsg: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zmsg (void);
        explicit Zmsg (zmsg_t *self);
        zmsg_t *self;
    private:
        ~Zmsg ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_send);
    static NAN_METHOD (_sendm);
    static NAN_METHOD (_size);
    static NAN_METHOD (_content_size);
    static NAN_METHOD (_routing_id);
    static NAN_METHOD (_set_routing_id);
    static NAN_METHOD (_prepend);
    static NAN_METHOD (_append);
    static NAN_METHOD (_pop);
    static NAN_METHOD (_pushmem);
    static NAN_METHOD (_addmem);
    static NAN_METHOD (_pushstr);
    static NAN_METHOD (_addstr);
    static NAN_METHOD (_pushstrf);
    static NAN_METHOD (_addstrf);
    static NAN_METHOD (_popstr);
    static NAN_METHOD (_addmsg);
    static NAN_METHOD (_popmsg);
    static NAN_METHOD (_remove);
    static NAN_METHOD (_first);
    static NAN_METHOD (_next);
    static NAN_METHOD (_last);
    static NAN_METHOD (_encode);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_print);
    static NAN_METHOD (_print_n);
    static NAN_METHOD (_eq);
    static NAN_METHOD (_signal);
    static NAN_METHOD (_test);
};

class Zpoller: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zpoller (zsock_t *reader);
        explicit Zpoller (zpoller_t *self);
        zpoller_t *self;
    private:
        ~Zpoller ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_add);
    static NAN_METHOD (_set_nonstop);
    static NAN_METHOD (_expired);
    static NAN_METHOD (_terminated);
    static NAN_METHOD (_test);
};

class Zproc: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zproc (void);
        explicit Zproc (zproc_t *self);
        zproc_t *self;
    private:
        ~Zproc ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_args);
    static NAN_METHOD (_set_args);
    static NAN_METHOD (_set_argsx);
    static NAN_METHOD (_set_env);
    static NAN_METHOD (_run);
    static NAN_METHOD (_returncode);
    static NAN_METHOD (_pid);
    static NAN_METHOD (_running);
    static NAN_METHOD (_wait);
    static NAN_METHOD (_shutdown);
    static NAN_METHOD (_kill);
    static NAN_METHOD (_set_verbose);
    static NAN_METHOD (_test);
};

class Zsock: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zsock (int type);
        explicit Zsock (zsock_t *self);
        zsock_t *self;
    private:
        ~Zsock ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_bind);
    static NAN_METHOD (_endpoint);
    static NAN_METHOD (_unbind);
    static NAN_METHOD (_connect);
    static NAN_METHOD (_disconnect);
    static NAN_METHOD (_attach);
    static NAN_METHOD (_type_str);
    static NAN_METHOD (_send);
    static NAN_METHOD (_recv);
    static NAN_METHOD (_bsend);
    static NAN_METHOD (_brecv);
    static NAN_METHOD (_routing_id);
    static NAN_METHOD (_set_routing_id);
    static NAN_METHOD (_set_unbounded);
    static NAN_METHOD (_wait);
    static NAN_METHOD (_flush);
    static NAN_METHOD (_join);
    static NAN_METHOD (_leave);
    static NAN_METHOD (_has_in);
    static NAN_METHOD (_set_only_first_subscribe);
    static NAN_METHOD (_set_hello_msg);
    static NAN_METHOD (_set_disconnect_msg);
    static NAN_METHOD (_set_wss_trust_system);
    static NAN_METHOD (_set_wss_hostname);
    static NAN_METHOD (_set_wss_trust_pem);
    static NAN_METHOD (_set_wss_cert_pem);
    static NAN_METHOD (_set_wss_key_pem);
    static NAN_METHOD (_out_batch_size);
    static NAN_METHOD (_set_out_batch_size);
    static NAN_METHOD (_in_batch_size);
    static NAN_METHOD (_set_in_batch_size);
    static NAN_METHOD (_socks_password);
    static NAN_METHOD (_set_socks_password);
    static NAN_METHOD (_socks_username);
    static NAN_METHOD (_set_socks_username);
    static NAN_METHOD (_set_xpub_manual_last_value);
    static NAN_METHOD (_router_notify);
    static NAN_METHOD (_set_router_notify);
    static NAN_METHOD (_multicast_loop);
    static NAN_METHOD (_set_multicast_loop);
    static NAN_METHOD (_metadata);
    static NAN_METHOD (_set_metadata);
    static NAN_METHOD (_loopback_fastpath);
    static NAN_METHOD (_set_loopback_fastpath);
    static NAN_METHOD (_zap_enforce_domain);
    static NAN_METHOD (_set_zap_enforce_domain);
    static NAN_METHOD (_gssapi_principal_nametype);
    static NAN_METHOD (_set_gssapi_principal_nametype);
    static NAN_METHOD (_gssapi_service_principal_nametype);
    static NAN_METHOD (_set_gssapi_service_principal_nametype);
    static NAN_METHOD (_bindtodevice);
    static NAN_METHOD (_set_bindtodevice);
    static NAN_METHOD (_heartbeat_ivl);
    static NAN_METHOD (_set_heartbeat_ivl);
    static NAN_METHOD (_heartbeat_ttl);
    static NAN_METHOD (_set_heartbeat_ttl);
    static NAN_METHOD (_heartbeat_timeout);
    static NAN_METHOD (_set_heartbeat_timeout);
    static NAN_METHOD (_use_fd);
    static NAN_METHOD (_set_use_fd);
    static NAN_METHOD (_set_xpub_manual);
    static NAN_METHOD (_set_xpub_welcome_msg);
    static NAN_METHOD (_set_stream_notify);
    static NAN_METHOD (_invert_matching);
    static NAN_METHOD (_set_invert_matching);
    static NAN_METHOD (_set_xpub_verboser);
    static NAN_METHOD (_connect_timeout);
    static NAN_METHOD (_set_connect_timeout);
    static NAN_METHOD (_tcp_maxrt);
    static NAN_METHOD (_set_tcp_maxrt);
    static NAN_METHOD (_thread_safe);
    static NAN_METHOD (_multicast_maxtpdu);
    static NAN_METHOD (_set_multicast_maxtpdu);
    static NAN_METHOD (_vmci_buffer_size);
    static NAN_METHOD (_set_vmci_buffer_size);
    static NAN_METHOD (_vmci_buffer_min_size);
    static NAN_METHOD (_set_vmci_buffer_min_size);
    static NAN_METHOD (_vmci_buffer_max_size);
    static NAN_METHOD (_set_vmci_buffer_max_size);
    static NAN_METHOD (_vmci_connect_timeout);
    static NAN_METHOD (_set_vmci_connect_timeout);
    static NAN_METHOD (_tos);
    static NAN_METHOD (_set_tos);
    static NAN_METHOD (_set_router_handover);
    static NAN_METHOD (_set_connect_rid);
    static NAN_METHOD (_set_connect_rid_bin);
    static NAN_METHOD (_handshake_ivl);
    static NAN_METHOD (_set_handshake_ivl);
    static NAN_METHOD (_socks_proxy);
    static NAN_METHOD (_set_socks_proxy);
    static NAN_METHOD (_set_xpub_nodrop);
    static NAN_METHOD (_set_router_mandatory);
    static NAN_METHOD (_set_probe_router);
    static NAN_METHOD (_set_req_relaxed);
    static NAN_METHOD (_set_req_correlate);
    static NAN_METHOD (_set_conflate);
    static NAN_METHOD (_zap_domain);
    static NAN_METHOD (_set_zap_domain);
    static NAN_METHOD (_mechanism);
    static NAN_METHOD (_plain_server);
    static NAN_METHOD (_set_plain_server);
    static NAN_METHOD (_plain_username);
    static NAN_METHOD (_set_plain_username);
    static NAN_METHOD (_plain_password);
    static NAN_METHOD (_set_plain_password);
    static NAN_METHOD (_curve_server);
    static NAN_METHOD (_set_curve_server);
    static NAN_METHOD (_curve_publickey);
    static NAN_METHOD (_set_curve_publickey);
    static NAN_METHOD (_set_curve_publickey_bin);
    static NAN_METHOD (_curve_secretkey);
    static NAN_METHOD (_set_curve_secretkey);
    static NAN_METHOD (_set_curve_secretkey_bin);
    static NAN_METHOD (_curve_serverkey);
    static NAN_METHOD (_set_curve_serverkey);
    static NAN_METHOD (_set_curve_serverkey_bin);
    static NAN_METHOD (_gssapi_server);
    static NAN_METHOD (_set_gssapi_server);
    static NAN_METHOD (_gssapi_plaintext);
    static NAN_METHOD (_set_gssapi_plaintext);
    static NAN_METHOD (_gssapi_principal);
    static NAN_METHOD (_set_gssapi_principal);
    static NAN_METHOD (_gssapi_service_principal);
    static NAN_METHOD (_set_gssapi_service_principal);
    static NAN_METHOD (_ipv6);
    static NAN_METHOD (_set_ipv6);
    static NAN_METHOD (_immediate);
    static NAN_METHOD (_set_immediate);
    static NAN_METHOD (_sndhwm);
    static NAN_METHOD (_set_sndhwm);
    static NAN_METHOD (_rcvhwm);
    static NAN_METHOD (_set_rcvhwm);
    static NAN_METHOD (_maxmsgsize);
    static NAN_METHOD (_set_maxmsgsize);
    static NAN_METHOD (_multicast_hops);
    static NAN_METHOD (_set_multicast_hops);
    static NAN_METHOD (_set_xpub_verbose);
    static NAN_METHOD (_tcp_keepalive);
    static NAN_METHOD (_set_tcp_keepalive);
    static NAN_METHOD (_tcp_keepalive_idle);
    static NAN_METHOD (_set_tcp_keepalive_idle);
    static NAN_METHOD (_tcp_keepalive_cnt);
    static NAN_METHOD (_set_tcp_keepalive_cnt);
    static NAN_METHOD (_tcp_keepalive_intvl);
    static NAN_METHOD (_set_tcp_keepalive_intvl);
    static NAN_METHOD (_tcp_accept_filter);
    static NAN_METHOD (_set_tcp_accept_filter);
    static NAN_METHOD (_last_endpoint);
    static NAN_METHOD (_set_router_raw);
    static NAN_METHOD (_ipv4only);
    static NAN_METHOD (_set_ipv4only);
    static NAN_METHOD (_set_delay_attach_on_connect);
    static NAN_METHOD (_hwm);
    static NAN_METHOD (_set_hwm);
    static NAN_METHOD (_swap);
    static NAN_METHOD (_set_swap);
    static NAN_METHOD (_affinity);
    static NAN_METHOD (_set_affinity);
    static NAN_METHOD (_identity);
    static NAN_METHOD (_set_identity);
    static NAN_METHOD (_rate);
    static NAN_METHOD (_set_rate);
    static NAN_METHOD (_recovery_ivl);
    static NAN_METHOD (_set_recovery_ivl);
    static NAN_METHOD (_recovery_ivl_msec);
    static NAN_METHOD (_set_recovery_ivl_msec);
    static NAN_METHOD (_mcast_loop);
    static NAN_METHOD (_set_mcast_loop);
    static NAN_METHOD (_rcvtimeo);
    static NAN_METHOD (_set_rcvtimeo);
    static NAN_METHOD (_sndtimeo);
    static NAN_METHOD (_set_sndtimeo);
    static NAN_METHOD (_sndbuf);
    static NAN_METHOD (_set_sndbuf);
    static NAN_METHOD (_rcvbuf);
    static NAN_METHOD (_set_rcvbuf);
    static NAN_METHOD (_linger);
    static NAN_METHOD (_set_linger);
    static NAN_METHOD (_reconnect_ivl);
    static NAN_METHOD (_set_reconnect_ivl);
    static NAN_METHOD (_reconnect_ivl_max);
    static NAN_METHOD (_set_reconnect_ivl_max);
    static NAN_METHOD (_backlog);
    static NAN_METHOD (_set_backlog);
    static NAN_METHOD (_set_subscribe);
    static NAN_METHOD (_set_unsubscribe);
    static NAN_METHOD (_type);
    static NAN_METHOD (_rcvmore);
    static NAN_METHOD (_events);
    static NAN_METHOD (_test);
};

class Zstr: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zstr ();
    private:
        ~Zstr ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (_recv);
    static NAN_METHOD (_recvx);
    static NAN_METHOD (_recv_compress);
    static NAN_METHOD (_send);
    static NAN_METHOD (_sendm);
    static NAN_METHOD (_sendf);
    static NAN_METHOD (_sendfm);
    static NAN_METHOD (_sendx);
    static NAN_METHOD (_send_compress);
    static NAN_METHOD (_sendm_compress);
    static NAN_METHOD (_str);
    static NAN_METHOD (_free);
    static NAN_METHOD (_test);
};

class Zsys: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zsys ();
    private:
        ~Zsys ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (_shutdown);
    static NAN_METHOD (_sockname);
    static NAN_METHOD (_create_pipe);
    static NAN_METHOD (_handler_reset);
    static NAN_METHOD (_catch_interrupts);
    static NAN_METHOD (_is_interrupted);
    static NAN_METHOD (_set_interrupted);
    static NAN_METHOD (_file_exists);
    static NAN_METHOD (_file_modified);
    static NAN_METHOD (_file_mode);
    static NAN_METHOD (_file_delete);
    static NAN_METHOD (_file_stable);
    static NAN_METHOD (_dir_create);
    static NAN_METHOD (_dir_delete);
    static NAN_METHOD (_dir_change);
    static NAN_METHOD (_file_mode_private);
    static NAN_METHOD (_file_mode_default);
    static NAN_METHOD (_version);
    static NAN_METHOD (_sprintf_hint);
    static NAN_METHOD (_sprintf);
    static NAN_METHOD (_socket_error);
    static NAN_METHOD (_hostname);
    static NAN_METHOD (_daemonize);
    static NAN_METHOD (_run_as);
    static NAN_METHOD (_has_curve);
    static NAN_METHOD (_set_io_threads);
    static NAN_METHOD (_set_thread_sched_policy);
    static NAN_METHOD (_set_thread_priority);
    static NAN_METHOD (_set_thread_name_prefix);
    static NAN_METHOD (_thread_name_prefix);
    static NAN_METHOD (_thread_affinity_cpu_add);
    static NAN_METHOD (_thread_affinity_cpu_remove);
    static NAN_METHOD (_set_max_sockets);
    static NAN_METHOD (_socket_limit);
    static NAN_METHOD (_set_max_msgsz);
    static NAN_METHOD (_max_msgsz);
    static NAN_METHOD (_set_zero_copy_recv);
    static NAN_METHOD (_zero_copy_recv);
    static NAN_METHOD (_set_file_stable_age_msec);
    static NAN_METHOD (_file_stable_age_msec);
    static NAN_METHOD (_set_linger);
    static NAN_METHOD (_set_sndhwm);
    static NAN_METHOD (_set_rcvhwm);
    static NAN_METHOD (_set_pipehwm);
    static NAN_METHOD (_pipehwm);
    static NAN_METHOD (_set_ipv6);
    static NAN_METHOD (_ipv6);
    static NAN_METHOD (_set_interface);
    static NAN_METHOD (_interface);
    static NAN_METHOD (_set_ipv6_address);
    static NAN_METHOD (_ipv6_address);
    static NAN_METHOD (_set_ipv6_mcast_address);
    static NAN_METHOD (_ipv6_mcast_address);
    static NAN_METHOD (_set_ipv4_mcast_address);
    static NAN_METHOD (_ipv4_mcast_address);
    static NAN_METHOD (_set_auto_use_fd);
    static NAN_METHOD (_auto_use_fd);
    static NAN_METHOD (_zprintf);
    static NAN_METHOD (_zprintf_error);
    static NAN_METHOD (_zplprintf);
    static NAN_METHOD (_zplprintf_error);
    static NAN_METHOD (_set_logident);
    static NAN_METHOD (_set_logsender);
    static NAN_METHOD (_set_logsystem);
    static NAN_METHOD (_error);
    static NAN_METHOD (_warning);
    static NAN_METHOD (_notice);
    static NAN_METHOD (_info);
    static NAN_METHOD (_debug);
    static NAN_METHOD (_test);
};

class Ztimerset: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Ztimerset (void);
        explicit Ztimerset (ztimerset_t *self);
        ztimerset_t *self;
    private:
        ~Ztimerset ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_cancel);
    static NAN_METHOD (_set_interval);
    static NAN_METHOD (_reset);
    static NAN_METHOD (_timeout);
    static NAN_METHOD (_execute);
    static NAN_METHOD (_test);
};

class Ztrie: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Ztrie (char delimiter);
        explicit Ztrie (ztrie_t *self);
        ztrie_t *self;
    private:
        ~Ztrie ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_remove_route);
    static NAN_METHOD (_matches);
    static NAN_METHOD (_hit_parameter_count);
    static NAN_METHOD (_hit_parameters);
    static NAN_METHOD (_hit_asterisk_match);
    static NAN_METHOD (_print);
    static NAN_METHOD (_test);
};

class Zuuid: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zuuid (void);
        explicit Zuuid (zuuid_t *self);
        zuuid_t *self;
    private:
        ~Zuuid ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_set);
    static NAN_METHOD (_set_str);
    static NAN_METHOD (_data);
    static NAN_METHOD (_size);
    static NAN_METHOD (_str);
    static NAN_METHOD (_str_canonical);
    static NAN_METHOD (_export);
    static NAN_METHOD (_eq);
    static NAN_METHOD (_neq);
    static NAN_METHOD (_dup);
    static NAN_METHOD (_test);
};

class ZhttpClient: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZhttpClient (bool verbose);
        explicit ZhttpClient (zhttp_client_t *self);
        zhttp_client_t *self;
    private:
        ~ZhttpClient ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_test);
};

class ZhttpServer: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZhttpServer (zhttp_server_options_t *options);
        explicit ZhttpServer (zhttp_server_t *self);
        zhttp_server_t *self;
    private:
        ~ZhttpServer ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_port);
    static NAN_METHOD (_test);
};

class ZhttpServerOptions: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZhttpServerOptions (void);
        explicit ZhttpServerOptions (zhttp_server_options_t *self);
        zhttp_server_options_t *self;
    private:
        ~ZhttpServerOptions ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_port);
    static NAN_METHOD (_set_port);
    static NAN_METHOD (_backend_address);
    static NAN_METHOD (_set_backend_address);
    static NAN_METHOD (_test);
};

class ZhttpRequest: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZhttpRequest (void);
        explicit ZhttpRequest (zhttp_request_t *self);
        zhttp_request_t *self;
    private:
        ~ZhttpRequest ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_method);
    static NAN_METHOD (_set_method);
    static NAN_METHOD (_url);
    static NAN_METHOD (_set_url);
    static NAN_METHOD (_content_type);
    static NAN_METHOD (_set_content_type);
    static NAN_METHOD (_content_length);
    static NAN_METHOD (_headers);
    static NAN_METHOD (_content);
    static NAN_METHOD (_get_content);
    static NAN_METHOD (_set_content);
    static NAN_METHOD (_set_content_const);
    static NAN_METHOD (_reset_content);
    static NAN_METHOD (_match);
    static NAN_METHOD (_test);
};

class ZhttpResponse: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit ZhttpResponse (void);
        explicit ZhttpResponse (zhttp_response_t *self);
        zhttp_response_t *self;
    private:
        ~ZhttpResponse ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_content_type);
    static NAN_METHOD (_set_content_type);
    static NAN_METHOD (_status_code);
    static NAN_METHOD (_set_status_code);
    static NAN_METHOD (_headers);
    static NAN_METHOD (_content_length);
    static NAN_METHOD (_content);
    static NAN_METHOD (_get_content);
    static NAN_METHOD (_set_content);
    static NAN_METHOD (_set_content_const);
    static NAN_METHOD (_reset_content);
    static NAN_METHOD (_test);
};

class Zudp: public Nan::ObjectWrap {
    public:
        static NAN_MODULE_INIT (Init);
        explicit Zudp (int type, bool reuse);
        explicit Zudp (zudp_t *self);
        zudp_t *self;
    private:
        ~Zudp ();
    static Nan::Persistent <Function> &constructor ();

    static NAN_METHOD (New);
    static NAN_METHOD (destroy);
    static NAN_METHOD (defined);
    static NAN_METHOD (_sendto);
    static NAN_METHOD (_recv);
    static NAN_METHOD (_bind);
    static NAN_METHOD (_fd);
    static NAN_METHOD (_error);
    static NAN_METHOD (_test);
};

#endif
