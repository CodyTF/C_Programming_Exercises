// K&R Exercise 1-21, entab program, for Stackoverflow.com
#include <stdio.h>
#define N 4     // Tabstop value. Todo, make this a variable, allow
                //  user to modify it using command line

int main()
{
    int col=0, base_col=0, entab=0;

    // Loop replacing spaces with tabs to the maximum extent
    int c=getchar();
    while( c != EOF )
    {

        // Normal state
        if( !entab )
        {

            // If whitespace goto entab state
            if( c==' ' || c=='\t' )
            {
                entab = 1;
                base_col = col;
            }

            // Else emit character
            else
                putchar(c);
        }

        // Entab state
        else
        {

            // Trim trailing whitespace
            if( c == '\n' )
            {
                entab = 0;
                putchar( '\n' );
            }

            // If not whitespace, exit entab state
            else if( c!=' ' && c!='\t' )
            {
                entab = 0;

                // Emit tabs to get close to current column position
                //  eg base_col=1, N=4, col=10
                //  base_col + 3 = 4 (1st time thru loop)
                //  base_col + 4 = 8 (2nd time thru loop)
                while( (base_col + (N-base_col%N)) <= col )
                {
                    base_col += (N-base_col%N);
                    putchar( '-' );
                }

                // Emit spaces to close onto current column position
                // eg base_col=1, N=4, col=10
                //  base_col -> 8, and two tabs emitted above
                //  base_col + 1 = 9 (1st time thru this loop)
                //  base_col + 1 = 10 (2nd time thru this loop)
                while( (base_col + 1) <= col )
                {
                    base_col++;
                    putchar( '.' );
                }

                // Emit buffered character after tabs and spaces
                putchar( c );
            }
        }

        // Update current column position for either state
        if( c == '\t' )
            col += (N - col%N); // eg col=1, N=4, col+=3
        else if( c == '\n' )
            col=0;
        else
            col++;

        // End loop
        c = getchar();
    }
    return 0;
}
