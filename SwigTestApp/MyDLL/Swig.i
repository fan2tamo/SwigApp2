/* File : Swig.i */
%include <windows.i> 
%include <wchar.i>
%include <std_string.i>
%include <std_vector.i>
%include <arrays_csharp.i>

%module (directors="1") MyDLL
 
%{
#include "Header.h"
%}
 
%feature("director") CallbackBase;

/* Let's just grab the original header file here */
%include "Header.h"
%template(FloatVector) std::vector<float>;