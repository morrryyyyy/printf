/*function custom_printf(format_string, ...additional_arguments)
    index = 0
    while index < length of format_string
        if format_string[index] is not '%'
            output format_string[index]
        else
            specifier = format_string[index + 1]
            argument = next argument in additional_arguments
            if specifier is 'd' (integer)
                output integer argument
            else if specifier is 'f' (float)
                output float argument
            else if specifier is 's' (string)
                output string argument
            else
                output error message: "Invalid format specifier"
        index = index + 2

test_cases = [
    {format: "Hello, %s!", args: ["world"], expected_output: "Hello, world!"},
    {format: "The answer is %d.", args: [42], expected_output: "The answer is 42."},
    {format: "Pi is approximately %f.", args: [3.14159], expected_output: "Pi is approximately 3.14159."},
    {format: "%d + %d = %d", args: [2, 3, 5], expected_output: "2 + 3 = 5"}
]

for test_case in test_cases
    output = custom_printf(test_case.format, test_case.args)
    if output equals test_case.expected_output
        print "Test Passed"
    else
        print "Test Failed"
*/

#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++; // Move past '%'
            switch (*format)
            {
            case 'd':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                printf("%s", va_arg(args, const char *));
                break;
            // Add more cases for other format specifiers as needed
            default:
                putchar('%'); // Print '%' if not a recognized specifier
                putchar(*format);
                break;
            }
        }
        else
        {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main()
{
    int num = 10;
    double pi = 3.14159;
    const char *str = "Hello, world!";

    // Test the custom printf function
    my_printf("Number: %d, Pi: %f, String: %s\n", num, pi, str);

    return 0;
}
