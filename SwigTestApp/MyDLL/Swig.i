%module (directors="1") MyDLL
 
%{
#include "Header.h"
%}
 
%include <windows.i> 
%include <std_string.i>
%include <std_vector.i>
%template(FloatVector) std::vector<float>;

%feature("director") CallbackBase;

%include "Header.h"
