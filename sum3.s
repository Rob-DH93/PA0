	/*
	 * Filename: sum3.s
	 * Author: Dongheon Lee
	 * Userid: cs30xdh
	 * Description: Sum three numbers and return the result
	 * Date: April/06/2018
	 * Sources of Help: TODO:
	 */

	@ Raspberry Pi directives
					.cpu    cortex-a53        @ Version of our Pis
					.syntax unified           @ Modern ARM syntax

					.equ    FP_OFFSET, 4      @ Offset to set fp to base of saved regs

					.global sum3              @ Specify sum3 as a global symbol

					.text                     @ Switch to Text segment
					.align 2                  @ Align  on evenly divisible by 4 byte address;
																		@  .align n where 2^n determines alignment

	/*
	 * Function Name : sum3()
	 * Function Prototype: int sum3( int a, int b, int c );
	 * Description: Returns the sum of the three formal parameters
	 * Parameters: a - the first value to sum
	 *             b - the second value to sum
	 *             c - the third value to sum
	 *
	 * Registers used:
	 *     r0 - arg 1 -- a
	 *     r1 - arg 2 -- b
	 *     r2 - arg 3 -- c
	 *     r3 - local var -- holds the intermediate and final sum of a, b, and c
	 */
	sum3:
					@ Standard prologue
					push    {fp, lr}                @ Save registers: fp, lr on the stack
					add     fp, sp, FP_OFFSET       @ Set fp to base of saved registers

					@ inComing parameters in r0, r1, r2
					add     r3, r0, r1              @ Add param1 and param2l result into r3
					add     r3, r3, r2              @ Add previous result with param3;


					mov     r3, r0                  @ Put return result with param3;

					@ Standard epilogue
					sub     sp, fp, FP_OFFSET       @ Set sp to top of saved registers
					pop     {fp, pc}                @ Restore fp; Restore lr into pc for
																					@ return
