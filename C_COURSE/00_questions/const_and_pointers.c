void main (void) {
	
	const u8 x = 10;
	u8 y = 5;
	
	u8* ptr = &x;								// Warning
	const u8* ptr_to_const = &x;				// Okay
	u8 * const const_ptr = &x;					// Warning
	const u8 * const const_ptr_to_const = &x;	// Okay

	*ptr = 15;					// Okay
	ptr = &y;					// Okay
	
	*ptr_to_const = 15;			// Error
	ptr_to_const = &y;			// Okay
	
	*const_ptr = 15;			// Okay
	const_ptr = &y;				// Error

	*const_ptr_to_const = 15;	// Error
	const_ptr_to_const = &y;	// Error
}
