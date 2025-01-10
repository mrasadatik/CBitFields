#include <stdio.h>

#include "./include/tcp.h"

int main()
{
    struct tcpHeader udTCP;

    udTCP.tcpPA.sourcePort = 0b0000100010100001;
    udTCP.tcpPA.destinationPort = 0b0010010010000111;

    udTCP.sequenceNumber = 0b00001110000001011110000000000110;
    udTCP.acknowledgementNumber = 0b00000011111100001000110001011111;

    udTCP.tcpFRHl.FIN = 0b1;
    udTCP.tcpFRHl.SYN = 0b0;
    udTCP.tcpFRHl.RST = 0b0;
    udTCP.tcpFRHl.PSH = 0b0;
    udTCP.tcpFRHl.ACK = 0b0;
    udTCP.tcpFRHl.URG = 0b0;

    udTCP.tcpFRHl.reserved = 0b000000;
    udTCP.tcpFRHl.hLen = 0b1111;

    udTCP.windowSize = 0b0110110001111111;
    udTCP.tcpCP.checksum = 0b0001001100100101;
    udTCP.tcpCP.urgentPointer = 0b0001001001100001;

    printf("Port Addresses:\n");
    printf("\tSource: %hi\n", udTCP.tcpPA.sourcePort);
    printf("\tDestination: %hi\n\n", udTCP.tcpPA.destinationPort);

    printf("Sequence Number: %ld\n", udTCP.sequenceNumber);
    printf("Acknowledgement Number: %ld\n\n", udTCP.acknowledgementNumber);

    printf("TCP Control Flags:\n");
    printf("\tFIN: %hd\n", udTCP.tcpFRHl.FIN);
    printf("\tSYN: %hd\n", udTCP.tcpFRHl.SYN);
    printf("\tRST: %hd\n", udTCP.tcpFRHl.RST);
    printf("\tPSH: %hd\n", udTCP.tcpFRHl.PSH);
    printf("\tACK: %hd\n", udTCP.tcpFRHl.ACK);
    printf("\tURG: %hd\n\n", udTCP.tcpFRHl.URG);

    printf("Reserved: %hd\n", udTCP.tcpFRHl.reserved);
    printf("Header Length: %hd\n", udTCP.tcpFRHl.hLen);

    printf("Window Size: %hd\n\n", udTCP.windowSize);

    printf("Checksum: %hd\n", udTCP.tcpCP.checksum);
    printf("Urgent Pointer: %hd\n", udTCP.tcpCP.urgentPointer);

    return 0;
}
