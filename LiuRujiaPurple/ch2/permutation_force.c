//The worst codes I have wrote,hahaha.
#include <stdio.h>
void permutation()
{
    int a, b, c, d, e;
    int f, g, h, i;
    for(a = 1; a < 10; a++)
    {
        for(b = 1; b < 10; b++)
        {
            if(b == a){continue;}
            for(c = 1; c < 10; c++)
            {
                if(c == a){continue;}
                if(c == b){continue;}
                for(d = 1; d < 10; d++)
                {
                    if(d == a){continue;}
                    if(d == b){continue;}
                    if(d == c){continue;}
                    for(e = 1; e < 10; e++)
                    {
                        if(e == a){continue;}
                        if(e == b){continue;}
                        if(e == c){continue;}
                        if(e == d){continue;}
                        for(f = 1; f < 10; f++)
                        {
                            if(f == a){continue;}
                            if(f == b){continue;}
                            if(f == c){continue;}
                            if(f == d){continue;}
                            if(f == e){continue;}
                            for(g = 1; g < 10; g++)
                            {
                                if(g == a){continue;}
                                if(g == b){continue;}
                                if(g == c){continue;}
                                if(g == d){continue;}
                                if(g == e){continue;}
                                if(g == f){continue;}
                                for(h = 1; h < 10; h++)
                                {
                                    if(h == a){continue;}
                                    if(h == b){continue;}
                                    if(h == c){continue;}
                                    if(h == d){continue;}
                                    if(h == e){continue;}
                                    if(h == f){continue;}
                                    if(h == g){continue;}
                                    for(i = 1; i < 10; i++)
                                    {
                                        if(i == a){continue;}
                                        if(i == b){continue;}
                                        if(i == c){continue;}
                                        if(i == d){continue;}
                                        if(i == e){continue;}
                                        if(i == f){continue;}
                                        if(i == g){continue;}
                                        if(i == h){continue;}
                                        int abc = 100*a + 10*b + c;
                                        int def = 100*d + 10*e + f;
                                        int ghi = 100*g + 10*h + i;
                                        if(def == 2*abc && ghi == 3*abc)
                                        {
                                            printf("%d %d %d\n", abc, def, ghi);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    permutation();
    return 0;
}
