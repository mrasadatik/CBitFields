#ifndef TCP_H
#define TCP_H

#include <inttypes.h>

struct tcpFlagsReservedAndHeader {
    // Control Flags
    uint16_t FIN : 1; // Terminate the connection
    uint16_t SYN : 1; // Synchronize sequence numbers
    uint16_t RST : 1; // Reset the connection
    uint16_t PSH : 1; // Request for push
    uint16_t ACK : 1; // Acknowledgement number is valid( used in case of cumulative acknowledgement)
    uint16_t URG : 1; // Urgent pointer is valid

    uint16_t reserved : 6;
    uint16_t hlen : 4; // Header Length
};

struct tcpHeader {
    uint16_t sourcePort;
    uint16_t destinationPort;

    uint32_t sequenceNumber;
    uint32_t acknowledgementNumber;

    struct tcpFlagsReservedAndHeader tcpFRH;

    uint16_t windowSize;
    uint16_t checksum;
    uint16_t urgentPointer;
};

#endif // TCP_H
