void  T3SNDE5ItA0k (int *OTCpojFyQ, int *OUBmWd0Q);

int main (int Ii92HLs, char *xGbckyI []) {
    int CHpkNb;
    int JpCz2E1dte;
    int yaIyeud [(602 - 597)] [5];
    CHpkNb = (680 - 680);
    JpCz2E1dte = (644 - 644);
    {
        CHpkNb = 0;
        while (CHpkNb < 5) {
            {
                JpCz2E1dte = 0;
                while (5 > JpCz2E1dte) {
                    scanf ("%d", &yaIyeud[CHpkNb][JpCz2E1dte]);
                    JpCz2E1dte++;
                };
            }
            CHpkNb++;
        };
    }
    int JDKIPUg;
    int WiG8QB;
    JDKIPUg = 0;
    WiG8QB = 0;
    scanf ("%d%d", &JDKIPUg, &WiG8QB);
    if (0 <= JDKIPUg &&(232 - 228) >= JDKIPUg &&0 <= WiG8QB &&(258 - 254) >= WiG8QB) {
        {
            JpCz2E1dte = 0;
            while (5 > JpCz2E1dte) {
                T3SNDE5ItA0k (&yaIyeud[JDKIPUg][JpCz2E1dte], &yaIyeud[WiG8QB][JpCz2E1dte]);
                JpCz2E1dte++;
            };
        }
        {
            CHpkNb = 0;
            while (CHpkNb < 5) {
                {
                    JpCz2E1dte = 0;
                    while (JpCz2E1dte < 5) {
                        if (4 > JpCz2E1dte) {
                            printf ("%d ", yaIyeud[CHpkNb][JpCz2E1dte]);
                        }
                        else
                            printf ("%d", yaIyeud[CHpkNb][JpCz2E1dte]);
                        JpCz2E1dte++;
                    };
                }
                if (CHpkNb < 4) {
                }
                CHpkNb++;
            };
        };
    }
    else
        ;
    return 0;
}

void  T3SNDE5ItA0k (int *OTCpojFyQ, int *OUBmWd0Q) {
    int n2IK8Du;
    n2IK8Du = *OTCpojFyQ;
    *OTCpojFyQ = *OUBmWd0Q;
    *OUBmWd0Q = n2IK8Du;
}

