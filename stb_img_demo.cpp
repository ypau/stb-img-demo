#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

int main(int argc, const char *argv[])
{
  if (argc <= 1)
  {
    std::cout << "Usage: " << argv[0] << " [image file]\n";
    return 1;
  }

  for (int ii = 1; ii < argc; ii++)
  {

    int x, y, n;
    auto ok = stbi_info(argv[ii], &x, &y, &n);
    if (ok)
    {
      std::cout << argv[ii] << ": " << x << " x " << y << ", " << n << " channels\n";
    }
    else
    {
      std::cerr << "Failed to read " << argv[ii] << std::endl;
    }
  }
  return 0;
}