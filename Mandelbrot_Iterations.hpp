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

    int n = 0;
    std::complex<double> z (0.0, 0.0);

    while ((abs(z) <= 2.0) && (n < max_iterations)){
        z = z*z + c;
        n++;
    }

    return n;
}
