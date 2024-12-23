# TCP Header Mimic - C Bitfields Practice Project

## Project Overview
This is a C console project developed using Code::Blocks, designed to help practice using C bitfields. The project mimics a simplified version of a TCP header structure, focusing on the representation and manipulation of the various flags and fields within a TCP header. This project will help you understand how bitfields work in C by using them to represent the control flags and other fields within a TCP header.

The TCP header structure is composed of several 16-bit and 32-bit fields, which are implemented using C bitfields to efficiently represent the data.

## Project Files
- **/include/tcp.h**  
  This header file contains the structure definitions for the TCP header. It includes bitfields for control flags, reserved bits, and other fields.
  
- **/main.c**  
  The main source file that demonstrates the use of the TCP header structure with bitfields. It initializes a TCP header with predefined values, assigns values to control flags using bitfields, and then prints out the header's fields.

## tcp.h - Header File
This header defines the `tcpFlagsReservedAndHeader` structure and the `tcpHeader` structure:

### tcpFlagsReservedAndHeader Structure:
This structure represents the control flags and reserved fields within the TCP header. It uses bitfields to allocate the exact number of bits for each flag.

```c
struct tcpFlagsReservedAndHeader {
    // Control Flags (1 bit each)
    uint16_t FIN : 1; // Terminate the connection
    uint16_t SYN : 1; // Synchronize sequence numbers
    uint16_t RST : 1; // Reset the connection
    uint16_t PSH : 1; // Request for push
    uint16_t ACK : 1; // Acknowledgement number is valid
    uint16_t URG : 1; // Urgent pointer is valid

    uint16_t reserved : 6; // Reserved bits (6 bits)
    uint16_t hLen : 4; // Header length (4 bits)
};
```

### tcpHeader Structure:
The `tcpHeader` structure represents the entire TCP header and includes the control flags, source and destination ports, sequence and acknowledgment numbers, window size, checksum, and urgent pointer.

```c
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
```

## main.c - Main Program File
The `main.c` file demonstrates how to initialize and print the contents of a TCP header structure. It includes:

1. Assigning values to each field of the TCP header.
2. Setting the control flags (FIN, SYN, RST, PSH, ACK, URG) using bitfields.
3. Printing the header's contents, including the flags, ports, sequence and acknowledgment numbers, and other fields.

### Example Output:
```
Source Port: 897
Destination Port: 1167
Sequence Number: 595499922
Acknowledgement Number: 108928247
TCP Control Flags:
    FIN: 1
    SYN: 0
    RST: 0
    PSH: 0
    ACK: 0
    URG: 0
Reserved: 0
Header Length: 15
Window Size: 28063
Checksum: 18853
Urgent Pointer: 18625
```

## Key Concepts Practiced
- **Bitfields in C**: Learn how to use bitfields to efficiently represent data in a structure.
- **TCP Header Representation**: Mimic the structure of a simplified TCP header to understand its components.
- **Data Representation and Manipulation**: Understand how individual bits within the TCP header can be accessed and manipulated using bitfields.

## Conclusion
This project is a great way to practice using bitfields in C while learning about the structure of a TCP header. By mimicking a real-world protocol, you will get hands-on experience with bit-level data manipulation and bitfield usage.

---

## Course Information

- **University**: East West University
- **Course**: CSE207 - Data Structures
- **Instructor**: Dr. Hasan Mahmood Aminul Islam (DHMAI)
- **Teaching Assistant**: Abdullah Al Tamim
- **Student**: Md Asaduzzaman Atik (2023-1-60-130)
