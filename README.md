# Normal C/C++ Project Environment

**A simple template for starting a C/C++ Project.**

## Overview

This template provides a basic structure for starting a C/C++ Project. It includes essential directories and files to help you organize your code and easily get started with development.

## Project Structure

```plaintext
.C-CPP_Project_Env
├── bin
│   ├── build
│   │   └── build
│   ├── debug
│   │   └── debug
│   ├── release
│   │   └── release
│   └── test
│       ├── doc
│       │   ├── input
│       │   └── output
│       ├── test
│       └── test.cpp
├── C-CPP_Project_Env.code-workspace
├── c_cpp_properties.json
├── doc
│   ├── Doxyfile
│   ├── pdf
│   │   └── NONE.pdf
│   └── TODO.md
├── download
│   └── NONE
├── LICENSE
├── pkg
│   ├── C-Cpp_pkg.sh
│   └── CMakeLists.txt
├── project
│   ├── doc
│   │   └── doc
│   ├── inc
│   │   └── inc.hpp
│   ├── res
│   │   └── res
│   └── src
│       ├── lib.cpp
│       └── main.cpp
├── README.md
├── run.sh
├── settings.json
├── struct
└── test.sh

16 directories, 26 files
```

## How to Use

To lunch the project on your Linux system, follow these steps:

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/ZouariOmar/C-CPP_Project_Env.git
    ```

2. **Navigate to the Directory**:

    ```sh
    cd C-CPP_Project_Env
    ```

3. **Make the script executable**:

    ```sh
    chmod +x run.sh
    ```

4. **Build & Run the Application**:

    ```sh
    ./run.sh <COMMAND>
    ```

- **Note: if you are using VSC, you can't run your program using the "Code Runner" extension**

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or suggestions, please feel free to reach out to us at [zouariomar20@gmail.com](mailto:zouariomar20@gmail.com)
