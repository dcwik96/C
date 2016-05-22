#!/bin/bash
gnuplot << EOF
set terminal png truecolor enhanced
set output "rys.png"
plot 2x
EOF
