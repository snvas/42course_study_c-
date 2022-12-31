#include <iostream>
#include <cmath>
/// Fixed-point Format: 11.5 (16-bit)
typedef uint16_t fixed_point_t;

#define FIXED_POINT_FRACTIONAL_BITS 8

/// Converts 11.5 format -> double
double fixed_to_double(fixed_point_t input);

/// Converts double to 11.5 format
fixed_point_t double_to_fixed(double input);

//We take the input value and divide it by (2fractional_bits), putting the result into a double
inline double fixed_to_double(fixed_point_t input)
{
    return ((double)input / (double)(1 << FIXED_POINT_FRACTIONAL_BITS));
}
/*To convert from floating-point to fixed-point, we follow this algorithm:

Calculate x = floating_input * 2^(fractional_bits)
Round x to the nearest whole number (e.g. round(x))
Store the rounded x in an integer container
Using the algorithm above, we would implement our float-to-fixed conversion as follows:
*/
inline fixed_point_t double_to_fixed(double input)
{
    return (fixed_point_t)(round(input * (1 << FIXED_POINT_FRACTIONAL_BITS)));
}

// Convert 16-bit fixed-point to double
double fixed16_to_double(fixed_point_t input, uint8_t fractional_bits)
{
    return ((double)input / (double)(1 << fractional_bits));
}


int main(){


	double a = 505253;
	double_to_fixed(a);
	std::cout << "Fixed " << a << std::endl;
	fixed_to_double(a);
	std::cout << "Fixed " << a << std::endl;
// Equivalent of our 11.5 conversion function above
//double r = fixed16_to_double(input, 5);
//std::cout << "Fixed " << r << std::endl;
	return 0;
}