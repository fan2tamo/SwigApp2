/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_MyDLL_WRAP_H_
#define SWIG_MyDLL_WRAP_H_

class SwigDirector_CallbackBase : public CallbackBase, public Swig::Director {

public:
    SwigDirector_CallbackBase();
    virtual void Callback(std::string const &str, std::vector< float > const &fVect);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(char *, void *);
    void swig_connect_director(SWIG_Callback0_t callbackCallback);

private:
    SWIG_Callback0_t swig_callbackCallback;
    void swig_init_callbacks();
};


#endif