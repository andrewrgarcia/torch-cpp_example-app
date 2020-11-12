#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({20, 20, 20});
  std::cout << tensor << std::endl;
}

