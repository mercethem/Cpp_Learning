#include <iostream>
/**
 .h file inside

 extern "C" void func1(int);
 extern "C" int func2(int);
 extern "C" double func3(int);
 extern "C" char func4(int);


 or

 extern "C"
 {
 ...
 functions declarations
 }

 if you want to use both C compiler and C++ compiler to .h file we should use
                                                                        C   ===> __STDC__
                                                                        C++ ===> __cplusplus

    in header file so .h file!!!!

      II
      II
      II
     VVVVV
      VVV
       V

    #ifdef __cplusplus //c++ compilers get inside that block but c compilers do not use that block
        extern "C" {
    #endif

    #ifdef __cplusplus
    }
    #endif


 */
