# Periodic Table

## Building the Project
**Note**: These instructions are specifically for Windows. For other platforms, adjust the paths and compilation steps accordingly.

### Requirements

- C++17 or higher
- SFML 2.6.1 or higher (prebuilt binaries)
- nlohmann/json (already included)

### Setting up SFML
1. **Clone the project**:
   - Clone the repository from GitHub:
   ```bash
   git clone https://github.com/varun0138/Periodic-table.git
   cd Periodic-table
   ```

2. **Download Libraries**: 
   - Download prebuilt binaries for SFML from the official [SFML website](https://www.sfml-dev.org/index.php).
   - Download JSON library from [nlohmann/json](https://github.com/nlohmann/json).
   
3. **Configure your project**:
   - Extract the SFML binaries and place them in a folder (e.g., SFML-2.6.1).
   
4. **Add SFML to your environment**:
   - Update the `Makefile` included in the project with SFML libs and include paths.
   
   Example `Makefile`:
   ```makefile
    all: compile link run clean

    SFML_INCLUDE = C:/SFML-2.6.1/include
    SFML_LIB = C:/SFML-2.6.1/lib

    compile:
        g++ -c *.cpp -std=c++17 -g -Wall -m64 -I $(SFML_INCLUDE) -DSFML_STATIC 

    link:
        g++ *.o -o main -L $(SFML_LIB) -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 

    clean:
        del *.o *.exe
        
    run:
        ./main
    ```
5. **Compile the project**:
   ```
   make
   ```