#include <stdio.h>

#include "./include/tcp.h"

int main()
{
    struct tcpHeader udTCP;

    // Assign TCP Header Values
    udTCP.sourcePort = 0b0000100010100001;
    udTCP.destinationPort = 0b0010010010000111;
    udTCP.sequenceNumber = 0b00001110000001011110000000000110;
    udTCP.acknowledgementNumber = 0b00000011111100001000110001011111;

    udTCP.tcpFRH.FIN = 0b1;
    udTCP.tcpFRH.SYN = 0b0;
    udTCP.tcpFRH.RST = 0b0;
    udTCP.tcpFRH.PSH = 0b0;
    udTCP.tcpFRH.ACK = 0b0;
    udTCP.tcpFRH.URG = 0b0;

    udTCP.tcpFRH.reserved = 0b000000;
    udTCP.tcpFRH.hLen = 0b1111;

    udTCP.windowSize = 0b0110110001111111;
    udTCP.checksum = 0b0001001100100101;
    udTCP.urgentPointer = 0b0001001001100001;

    // Print TCP Header
    printf("Source Port: %hi\n", udTCP.sourcePort);
    printf("Destination Port: %hi\n", udTCP.destinationPort);
    printf("Sequence Number: %ld\n", udTCP.sequenceNumber);
    printf("Acknowledgement Number: %ld\n", udTCP.acknowledgementNumber);

    printf("TCP Control Flags:\n");
    printf("\tFIN: %hd\n", udTCP.tcpFRH.FIN);
    printf("\tSYN: %hd\n", udTCP.tcpFRH.SYN);
    printf("\tRST: %hd\n", udTCP.tcpFRH.RST);
    printf("\tPSH: %hd\n", udTCP.tcpFRH.PSH);
    printf("\tACK: %hd\n", udTCP.tcpFRH.ACK);
    printf("\tURG: %hd\n", udTCP.tcpFRH.URG);

    printf("Reserved: %hd\n", udTCP.tcpFRH.reserved);
    printf("Header Length: %hd\n", udTCP.tcpFRH.hLen);

    printf("Window Size: %hd\n", udTCP.windowSize);
    printf("Checksum: %hd\n", udTCP.checksum);
    printf("Urgent Pointer: %hd\n", udTCP.urgentPointer);

    return 0;
}
