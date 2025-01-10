#ifndef TCP_H
#define TCP_H

#include <inttypes.h>

struct tcpPortAddresses {
    uint32_t sourcePort : 16;
    uint32_t destinationPort : 16;
};

struct tcpFlagsReservedAndHeaderLen {
    uint16_t FIN : 1;
    uint16_t SYN : 1;
    uint16_t RST : 1;
    uint16_t PSH : 1;
    uint16_t ACK : 1;
    uint16_t URG : 1;

    uint16_t reserved : 6;
    uint16_t hLen : 4;
};

struct tcpChecksumAndPointer {
    uint32_t checksum : 16;
    uint32_t urgentPointer : 16;
};

struct tcpHeader {
    struct tcpPortAddresses tcpPA;

    uint32_t sequenceNumber;
    uint32_t acknowledgementNumber;

    struct tcpFlagsReservedAndHeaderLen tcpFRHl;

    uint16_t windowSize;

    struct tcpChecksumAndPointer tcpCP;
};

#endif // TCP_H
