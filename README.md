# TCP Header Mimic - C Bitfields Practice Project

## Project Overview
This is a C console project developed using Code::Blocks, designed to help practice using C bitfields. The project mimics a simplified version of a TCP header structure, focusing on the representation and manipulation of the various flags and fields within a TCP header. This project will help you understand how bitfields work in C by using them to represent the control flags and other fields within a TCP header.

The TCP header structure is composed of several 16-bit and 32-bit fields, which are implemented using C bitfields to efficiently represent the data.

## Project Files
- **/include/tcp.h**  
  This header file contains the structure definitions for the TCP header. It includes bitfields for control flags, reserved bits, and other fields.
  
- **/main.c**  
  The main source file that demonstrates the use of the TCP header structure with bitfields. It initializes a TCP header with predefined values, assigns values to control flags using bitfields, and then prints out the header's fields.

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
