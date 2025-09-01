#include "libft.h"

int ft_atoi(const char *nptr) {
  int i = 0;
  int sign = 1;
  unsigned long int result = 0;

   while (nptr[i] == 32 || nptr[i] >= 9 && nptr[i] <= 13)
      i++;

    if(nptr[i] == '-') {
      sign = -1;
      i++;
    } else if (nptr[i] == '+')
    {
      i++;
    }
    
    while (ft_isdigit(nptr[i]))
    {
      result *= 10;
      result += nptr[i] - '0';
      i++;
    }
    
   return result * sign;
}

int main () {
   printf("%i\n", ft_atoi(" -123junk")); // -123
    printf("%i\n", ft_atoi(" +321dust")); // 321
    printf("%i\n", ft_atoi("0")); // 0
    printf("%i\n", ft_atoi("0042")); // 42
    printf("%i\n", ft_atoi("0x2A")); // 0
    printf("%i\n", ft_atoi("junk")); // no conversion can be performed
    printf("%i\n", ft_atoi("2147483648")); //  -2147483648
}