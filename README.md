# torch-cpp
C++ distributions of pytorch



Running an adaptation of from the example on [this site](https://pytorch.org/cppdocs/installing.html)

## Input files: 

**CMake*.txt**

**example-app.cpp**



## Compilation (run line by line): 

mkdir build
cd build

cmake -DCMAKE_PREFIX_PATH=/path/to/libtorch
cmake --build . --config Release



## Output : 

**.\example-app**	   (binary)

**out.log** 				    (through UNIX output print command)