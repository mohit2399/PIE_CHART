// Java implementation of the approach 
public class GFG { 

	// Function that returns true if num is palindrome 
	public static boolean isPalindrome(float num) 
	{ 

		// Convert the given floating point number 
		// into a string 
		String s = String.valueOf(num); 

		// Pointers pointing to the first and 
		// the last character of the string 
		int low = 0; 
		int high = s.length() - 1; 

		while (low < high) { 

			// Not a palindrome 
			if (s.charAt(low) != s.charAt(high)) 
				return false; 

			// Update the pointers 
			low++; 
			high--; 
		} 

		return true; 
	} 

	// Driver code 
	public static void main(String args[]) 
	{ 

		float n = 123.321f; 

		if (isPalindrome(n)) 
			System.out.print("Yes"); 

		else
			System.out.print("No"); 
	} 
} 
