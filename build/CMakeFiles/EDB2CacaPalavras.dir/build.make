# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build"

# Include any dependencies generated for this target.
include CMakeFiles/EDB2CacaPalavras.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EDB2CacaPalavras.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EDB2CacaPalavras.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EDB2CacaPalavras.dir/flags.make

CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o: CMakeFiles/EDB2CacaPalavras.dir/flags.make
CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o: /home/schwaad/Área\ de\ trabalho/Programação/C/EDB2/Caca_Palavras/src/avl.c
CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o: CMakeFiles/EDB2CacaPalavras.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o -MF CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o.d -o CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o -c "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/avl.c"

CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/avl.c" > CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.i

CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/avl.c" -o CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.s

CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o: CMakeFiles/EDB2CacaPalavras.dir/flags.make
CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o: /home/schwaad/Área\ de\ trabalho/Programação/C/EDB2/Caca_Palavras/src/jogo.c
CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o: CMakeFiles/EDB2CacaPalavras.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o -MF CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o.d -o CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o -c "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/jogo.c"

CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/jogo.c" > CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.i

CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/jogo.c" -o CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.s

CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o: CMakeFiles/EDB2CacaPalavras.dir/flags.make
CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o: /home/schwaad/Área\ de\ trabalho/Programação/C/EDB2/Caca_Palavras/src/main.c
CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o: CMakeFiles/EDB2CacaPalavras.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o -MF CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o.d -o CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o -c "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/main.c"

CMakeFiles/EDB2CacaPalavras.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDB2CacaPalavras.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/main.c" > CMakeFiles/EDB2CacaPalavras.dir/src/main.c.i

CMakeFiles/EDB2CacaPalavras.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDB2CacaPalavras.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/main.c" -o CMakeFiles/EDB2CacaPalavras.dir/src/main.c.s

CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o: CMakeFiles/EDB2CacaPalavras.dir/flags.make
CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o: /home/schwaad/Área\ de\ trabalho/Programação/C/EDB2/Caca_Palavras/src/trie.c
CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o: CMakeFiles/EDB2CacaPalavras.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o -MF CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o.d -o CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o -c "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/trie.c"

CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/trie.c" > CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.i

CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/trie.c" -o CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.s

CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o: CMakeFiles/EDB2CacaPalavras.dir/flags.make
CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o: /home/schwaad/Área\ de\ trabalho/Programação/C/EDB2/Caca_Palavras/src/utils.c
CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o: CMakeFiles/EDB2CacaPalavras.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o -MF CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o.d -o CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o -c "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/utils.c"

CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/utils.c" > CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.i

CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/src/utils.c" -o CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.s

# Object files for target EDB2CacaPalavras
EDB2CacaPalavras_OBJECTS = \
"CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o" \
"CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o" \
"CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o" \
"CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o" \
"CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o"

# External object files for target EDB2CacaPalavras
EDB2CacaPalavras_EXTERNAL_OBJECTS =

EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/src/avl.c.o
EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/src/jogo.c.o
EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/src/main.c.o
EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/src/trie.c.o
EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/src/utils.c.o
EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/build.make
EDB2CacaPalavras: CMakeFiles/EDB2CacaPalavras.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable EDB2CacaPalavras"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EDB2CacaPalavras.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EDB2CacaPalavras.dir/build: EDB2CacaPalavras
.PHONY : CMakeFiles/EDB2CacaPalavras.dir/build

CMakeFiles/EDB2CacaPalavras.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EDB2CacaPalavras.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EDB2CacaPalavras.dir/clean

CMakeFiles/EDB2CacaPalavras.dir/depend:
	cd "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras" "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras" "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build" "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build" "/home/schwaad/Área de trabalho/Programação/C/EDB2/Caca_Palavras/build/CMakeFiles/EDB2CacaPalavras.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/EDB2CacaPalavras.dir/depend

