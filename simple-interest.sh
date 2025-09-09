#!/bin/bash

# Script to calculate Simple Interest

echo "Enter Principal Amount:"
read p
echo "Enter Rate of Interest:"
read r
echo "Enter Time (in years):"
read t

# Formula: (P × R × T) / 100
si=$(( (p * r * t) / 100 ))

echo "Simple Interest = $si"
