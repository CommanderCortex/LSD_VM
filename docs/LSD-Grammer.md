# LSD VM Spec

## Symbols 

* `#`       - Number Constant 

## Instructions - General

* `PUSH`    - Push an 8-Bit number onto the stack
* `ADD`     - Pops last 2 numbers of stack, adds, pushes result
* `HLT`     - Pops stack and returns result as exit code
* `MOV` 	- Move source to destination
* `POP` 	- Pop top of stack into destination
* `INC` 	- Increment by 1
* `DEC`		- Decrement by 1
* `NEG` 	- Arithimic negation
* `NOT` 	- Bitwise Completion

## Instructions - Binary Operations

* `leaq` 	- S, D; Load effective address of source into destination 

## Shift Operators 

* `sal / shl ` - k, D; Left shift destination by k bits