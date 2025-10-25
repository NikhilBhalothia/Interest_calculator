# Compound Interest Calculator

Small command-line program to compute simple and compound interest for a given principal, annual interest rate, and time period. The implementation is in [interest_calculator.c](interest_calculator.c) and the program's entry point is [`main`](interest_calculator.c).

## Formulae

Simple interest:
$SI = \dfrac{P \times r \times t}{100}$

Compound interest:
$$
CI = P\left(\left(1 + \dfrac{r}{100}\right)^{t} - 1\right)
$$

Where:
- $P$ = principal
- $r$ = annual interest rate (percent)
- $t$ = time in years

## Build

Requires a C compiler and the math library.

Build (Windows, MinGW/Cygwin) or Unix:
```sh
gcc interest_calculator.c -o interest_calculator -lm
```

## Run

On Unix/macOS:
```sh
./interest_calculator
```

On Windows (PowerShell/CMD):
```ps1
.\interest_calculator.exe
```