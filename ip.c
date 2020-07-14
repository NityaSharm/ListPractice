
  3 // Structure for IP header
  4
  5
  6 // ip header format
  7 /*
  8 #if  0
  9 ///*
 10  * Definitions for internet protocol version 4.
 11   *
 12    * Per RFC 791, September 1981.
 13     */
 14 #define IPVERSION   4
 15
 16 ///*
 17    // * Structure of an internet header, naked of options.
 18     // */
 19 struct ip {
 20 #if BYTE_ORDER == LITTLE_ENDIAN
 21     u_int   ip_hl:4,        /* header length */
 22             ip_v:4;         /* version */
 23 #endif
 24 #if BYTE_ORDER == BIG_ENDIAN
 25     u_int   ip_v:4,         /* version */
 26             ip_hl:4;        /* header length */
 27 #endif
 28     u_char  ip_tos;         /* type of service */
 29     u_short ip_len;         /* total length */
 30     u_short ip_id;          /* identification */
 31     u_short ip_off;         /* fragment offset field */
 32 #define IP_RF 0x8000            /* reserved fragment flag */
 33 #define IP_DF 0x4000