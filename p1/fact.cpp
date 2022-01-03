/* 
 * fact is a function that should return the factorial of n
 * Some example values:
 * 0! = 1
 * 1! = 1
 * 2! = 2 * 1! = 2
 * 3! = 3 * 2! = 6
 * 4! = 4 * 3! = 24
 */
int fact(int n) {
	// TODO Code for calculating n! and returning it
	if (n == 0) {
		return 1;
	} else {
		return (n * fact(n-1));
	}
}
