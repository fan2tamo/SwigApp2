/* File : Swig.i */
%module (directors="1") MyDLL
 
%{
#include "Header.h"
%}
 
%include <windows.i> 
%include <std_string.i>
%include <std_vector.i>
%template(FloatVector) std::vector<float>;

/* turn on director wrapping Callback */
%feature("director") CallbackBase;

%include "Header.h"
