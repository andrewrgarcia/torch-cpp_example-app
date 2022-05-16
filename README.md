# torch-cpp_example-app

An adaptation from the [Pytorch minimal example for C++ pytorch](https://pytorch.org/cppdocs/installing.html)

## Requirements

C++ Distributions of PyTorch. 

[Download Pytorch](https://download.pytorch.org/libtorch/nightly/cpu/libtorch-shared-with-deps-latest.zip)

## Development

```ruby
cmake -DCMAKE_PREFIX_PATH=/home/andrew/libtorch   	#may need to change this to your directory name
cmake --build . --config Release
```

### Deployment

```ruby
./example-app
```
