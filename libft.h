#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>  // For malloc, free, etc.
# include <unistd.h>  // For write, read, etc.

/* String and character tests */
int     ft_isalpha(int c);           // Checks if a character is alphabetic
int     ft_isdigit(int c);           // Checks if a character is a digit
int     ft_isalnum(int c);           // Checks if a character is alphanumeric
int     ft_isascii(int c);           // Checks if a character is ASCII
int     ft_isprint(int c);           // Checks if a character is printable

/* String manipulation */
size_t  ft_strlen(const char *s);    										// Returns the length of a string
size_t  ft_strlcpy(char *dst, const char *src, size_t size);   				// Copies a string with size limit
size_t  ft_strlcat(char *dst, const char *src, size_t size);   				// Appends a string with size limit
int     ft_toupper(int c);          										// Converts a character to uppercase
int     ft_tolower(int c);          										// Converts a character to lowercase
char    *ft_strchr(const char *s, int c);   								// Finds the first occurrence of a character in a string
char    *ft_strrchr(const char *s, int c);  								// Finds the last occurrence of a character in a string
int     ft_strncmp(const char *s1, const char *s2, size_t n);  				// Compares two strings (up to n characters)
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);  // Finds the first occurrence of a substring in a string (up to n characters)
int     ft_atoi(const char *str);    										// Converts a string to an integer
char    *ft_strdup(const char *s1);  										// Duplicates a string

/* Memory manipulation*/
void    *ft_memset(void *b, int c, size_t len);   							// Fills a block of memory with a specific value
void    ft_bzero(void *s, size_t len);   									// Sets a block of memory to zero
void    *ft_memcpy(void *dst, const void *src, size_t n);  					// Copies memory from source to destination
void    *ft_memmove(void *dst, const void *src, size_t len);  				// Moves memory from source to destination (handles overlap)
void    *ft_memchr(const void *s, int c, size_t n);   						// Finds the first occurrence of a byte in memory
int     ft_memcmp(const void *s1, const void *s2, size_t n);   				// Compares two memory blocks
void    *ft_calloc(size_t count, size_t size);   							// Allocates memory for an array and initializes it to zero

/* Additional string manipulation functions */
char    *ft_strjoin(const char *s1, const char *s2);   				// Joins two strings into one
char    *ft_strtrim(const char *s1, const char *set);   			// Trims characters from the beginning and end of a string
char    **ft_split(const char *s, char c);  						// Splits a string into an array of strings, using a delimiter
char    *ft_itoa(int n);           									// Converts an integer to a string
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));  // Applies a function to each character of a string
void    ft_striteri(char *s, void (*f)(unsigned int, char *));   	// Applies a function to each character of a string (in-place)
char    *ft_substr(const char *s, unsigned int start, size_t len);  // Extracts a substring from a string

/* Input/Output */
void    ft_putchar_fd(char c, int fd);   							// Writes a character to a file descriptor
void    ft_putstr_fd(const char *s, int fd);   						// Writes a string to a file descriptor
void    ft_putendl_fd(const char *s, int fd);   					// Writes a string followed by a newline to a file descriptor
void    ft_putnbr_fd(int n, int fd);   								// Writes an integer to a file descriptor

#endif
