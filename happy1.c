/* 
 * 
 * happy1.c
 * --------
 * 
 * Author: Michael Dickens <mdickens93@gmail.com>
 * Created: 2015-10-22
 * 
 * Simple happy program. Operates by incrementing a happiness counter.
 * 
 */

unsigned int happiness;

void get_happy()
{
    happiness++;
}

int main()
{
    for (;;) {
        get_happy();
    }
    
    return 0;
}
