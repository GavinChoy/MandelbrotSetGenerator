/**
* Mandelbrot Set Generator
* Copyright (C) 2021  Gavin Choy
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <complex>

int mandelbrot_interations(std::complex<double> c, int max_iterations = 100){
    /**
    * Determines whether the function range is bound for a complex constant.
    * Function: f(z, c) = z^2 + c
    * If the function range is bound, the constant is in the Mandelbrot set.
    * @param c Complex double of the coordinate of the point.
    * @param max_iterations Integer of the maximum number of interations to complete.
    * @return Integer of how many iterations were completed.
    */

    // The number of iterations
    int n = 0;
    // Initial value of the function
    std::complex<double> z (0.0, 0.0);

    // The function must be bound to within a modulus of 2.
    // Repeat the function until the result is out of bound
    // or the limit of iterations is reached.
    while ((abs(z) <= 2.0) && (n < max_iterations)){
        z = z*z + c;
        n++;
    }

    return n;
}
