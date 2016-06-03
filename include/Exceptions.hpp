#ifndef EMULATORBOY_INCLUDE_EXCEPTIONS_HPP
#define EMULATORBOY_INCLUDE_EXCEPTIONS_HPP

#include <exception>
#include <Predefs.hpp>

class IOException : public std::exception {
public:
    IOException(const String& message) : _message("IOException: " + message) {}
    virtual const char* what() const throw() { return _message.c_str(); }

private:
    String _message;
};

class UnsupportedInstructionException : public std::exception {
public:
    UnsupportedInstructionException(const String& message) : _message("UnsupportedInstructionException: " + message) {}
    virtual const char* what() const throw() { return _message.c_str(); }

private:
    String _message;
};

#endif