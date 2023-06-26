#include <Python.h>

int main() {
    Py_Initialize();  // Initialize the Python interpreter
    
    // Execute a simple Python statement
    PyRun_SimpleString("print('Hello, Python!')");
    
    Py_Finalize();  // Clean up the Python interpreter
    
    return 0;
}
