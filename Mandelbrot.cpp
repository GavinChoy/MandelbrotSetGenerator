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

#include <iostream>
#include <complex>
#include "Mandelbrot_Iterations.hpp"
using namespace std;

int const WIDTH = 201;
int const HEIGHT = 201;
double const X_MAX = 2.0;
double const X_MIN = -2.0;
double const Y_MAX = 2.0;
double const Y_MIN = -2.0;
int const MAX_ITERATIONS = 10;

int main(){

    // Licence info on program start
    cout << endl;
    cout << "Mandelbrot Set Generator  Copyright (C) 2021  Gavin Choy\n";
    cout << "This program comes with ABSOLUTELY NO WARRANTY.\n";
    cout << "This is free software, and you are welcome to redistribute it\n";
    cout << "under certain conditions.\n\n";

    std::complex<double> test (0.0 , 0.0);

    cout << mandelbrot_interations(test, MAX_ITERATIONS);

    return 0;
}