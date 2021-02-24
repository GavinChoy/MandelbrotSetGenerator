_University Course Assignment_

# MandelbrotSetGenerator

I set myself the following additional goal (devised by me):

I was interested in what the Mandelbrot set was and decided to learn how it was calculated. I coded a function to determine how many iterations it took before the result was no longer bounded. The number of iterations required for each point on the complex plane was used to determine whether the pixel was highlighted or not.

I used the Complex library to make my code shorter and to improve maintainability.

For Object Oriented Programming, and the Asessment Objectives, I have kept the plotting in a method outside of main(), and kept the function for determining the divergence of the point in a header file.

My solution was in two files called Mandelbrot.cpp and Mandelbrot_Iterations.hpp
