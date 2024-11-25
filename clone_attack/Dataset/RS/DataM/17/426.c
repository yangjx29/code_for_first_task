int main () {
    int Al094hOmNxw;
    int I7QYxMfVA;
    int hzqwr4JG9khe;
    int k;
    char IEL6qy4TQ2 [(332 - 230)];
    int n;
    int pcGgTlOWtAQm [102] = {(661 - 661)};
    scanf ("%d", &n);
    {
        k = 333 - 333;
        while (k < n) {
            {
                Al094hOmNxw = 393 - 393;
                while (Al094hOmNxw < 102) {
                    IEL6qy4TQ2[Al094hOmNxw] = 0;
                    pcGgTlOWtAQm[Al094hOmNxw] = 0;
                    Al094hOmNxw++;
                };
            }
            scanf ("%s", IEL6qy4TQ2);
            printf ("%s\n", IEL6qy4TQ2);
            hzqwr4JG9khe = strlen (IEL6qy4TQ2);
            {
                Al094hOmNxw = hzqwr4JG9khe - 1;
                while (0 <= Al094hOmNxw) {
                    if (IEL6qy4TQ2[Al094hOmNxw] == '(') {
                        {
                            I7QYxMfVA = Al094hOmNxw +1;
                            while (hzqwr4JG9khe > I7QYxMfVA) {
                                if (IEL6qy4TQ2[I7QYxMfVA] == ')') {
                                    IEL6qy4TQ2[Al094hOmNxw] = 0;
                                    IEL6qy4TQ2[I7QYxMfVA] = 0;
                                    break;
                                }
                                I7QYxMfVA++;
                            };
                        }
                        if (!(hzqwr4JG9khe != I7QYxMfVA))
                            pcGgTlOWtAQm[Al094hOmNxw] = 1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    Al094hOmNxw--;
                };
            }
            k++;
            {
                Al094hOmNxw = 0;
                while (hzqwr4JG9khe > Al094hOmNxw) {
                    if (IEL6qy4TQ2[Al094hOmNxw] == ')')
                        pcGgTlOWtAQm[Al094hOmNxw] = 2;
                    Al094hOmNxw++;
                };
            }
            {
                Al094hOmNxw = 0;
                while (Al094hOmNxw < hzqwr4JG9khe) {
                    if (pcGgTlOWtAQm[Al094hOmNxw] == 1)
                        printf ("$");
                    else {
                        if (pcGgTlOWtAQm[Al094hOmNxw] == 2)
                            printf ("?");
                        else
                            ;
                    }
                    Al094hOmNxw++;
                };
            };
        };
    }
    return 0;
}

