#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *  * op_add - function to retunr sum of two number
 *   * @a: number 1;
 *    * @b: number 2
 *     * Return: sum of those two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to retunr difference of two number
 * @a: number 1;
 * @b: number 2
 * Return: difference of those two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  * op_mul - function to retunr product of two number
 *   * @a: number 1;
 *    * @b: number 2
 *     * Return: product of those two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  * op_div - function to retunr division of two number
 *   * @a: number 1;
 *    * @b: number 2
 *     * Return: the qoutient of those two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *  * op_mod - function to returns the remainder of diision of two number
 *   * @a: number 1;
 *    * @b: number 2
 *     * Return: the remainder of dicision of those two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
