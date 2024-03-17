#include "../lib/print.h"

void print16(void *p) {
  unsigned short *us_ptr = reinterpret_cast<unsigned short *>(p);
  short *s_ptr = reinterpret_cast<short *>(p);

  std::cout << "unsigned short:";
  std::cout << " hex: ";
  std::cout << std::hex << std::setw(4 * 2) << *us_ptr;
  std::cout << " bin: ";
  std::cout << std::setw(16 * 2) << std::bitset<16>(*us_ptr);
  std::cout << " dec: ";
  std::cout << std::dec  << std::setw(5 * 2) << *us_ptr << std::endl;

  std::cout << " singned short:";
  std::cout << " hex: ";
  std::cout << std::setw(4 * 2) << std::hex << *s_ptr;
  std::cout << " bin: ";
  std::cout << std::setw(16 * 2) << std::bitset<16>(*s_ptr);
  std::cout << " dec: ";
  std::cout << std::setw(5 * 2) << std::dec << *s_ptr << std::endl << std::endl;
}

void print32(void *p) {
  unsigned int *us_ptr = reinterpret_cast<unsigned int *>(p);
  int *s_ptr = reinterpret_cast<int *>(p);
  float *f_ptr = reinterpret_cast<float *>(p);

  std::cout << std::setw(15) << "unsigned int:";
  std::cout << " hex: ";
  std::cout << std::hex << std::setw(8) << *us_ptr;
  std::cout << " bin: ";
  std::cout << std::setw(32) << std::bitset<32>(*us_ptr);
  std::cout << " dec: ";
  std::cout << std::setw(10) << std::dec << *us_ptr << std::endl;
            

  std::cout << std::setw(15) << " signed int:";
  std::cout << " hex: ";
  std::cout << std::hex << std::setw(8) << *s_ptr;
  std::cout << " bin: ";
  std::cout << std::setw(32) << std::bitset<32>(*s_ptr);
  std::cout << " dec: ";
  std::cout << std::setw(10) << std::dec << *s_ptr << std::endl;

  std::cout << std::setw(15) << " float:" ;
  std::cout << " fix: ";
  std::cout << std::fixed << std::setw(8) << std::setprecision(2) << *f_ptr;
  std::cout << " sci: ";
  std::cout << std::scientific << std::setw(32) << *f_ptr << std::endl << std::endl;
}

void print64(void *p) {
  unsigned long *ul_ptr = reinterpret_cast<unsigned long *>(p);
  long *l_ptr = reinterpret_cast<long *>(p);
  double *d_ptr = reinterpret_cast<double *>(p);

  std::cout << "Unsigned long: " << std::endl;
  std::cout << "hex: " << std::hex << *ul_ptr << std::endl;      // hex
  std::cout << "bin: " << std::bitset<64>(*ul_ptr) << std::endl; // bin
  std::cout << "dec: " << std::dec << *ul_ptr << std::endl
            << std::endl; // dec

  std::cout << "Signed Long: " << std::endl;
  std::cout << "hex: " << std::hex << *l_ptr << std::endl;      // hex
  std::cout << "bin: " << std::bitset<64>(*l_ptr) << std::endl; // bin
  std::cout << "dec: " << std::dec << *l_ptr << std::endl
            << std::endl; // dec

  std::cout << "Double: " << std::endl;
  std::cout << std::fixed << std::setprecision(2) << *d_ptr << std::endl;
  std::cout << std::scientific << *d_ptr << std::endl
            << std::endl;
}
