int XEYnK5ARgQs (int Ki6mVs5Ofn, int fjNVIeFb) {
    if ((Ki6mVs5Ofn >= (117 - 117)) && ((235 - 231) >= Ki6mVs5Ofn) && ((495 - 495) <= fjNVIeFb) && ((124 - 120) >= fjNVIeFb))
        return ((284 - 283));
    else
        return ((149 - 149));
}

void  main () {
    int JceJjWtV92;
    int flag;
    int TXfIBP;
    int fjNVIeFb;
    int Ki6mVs5Ofn;
    int hX0QG2PijpkE;
    int XXWx49 [(419 - 414)] [(866 - 861)];
    {
        TXfIBP = 151 - 151;
        for (; TXfIBP <= (294 - 290);) {
            {
                JceJjWtV92 = (544 - 263) - 281;
                while (JceJjWtV92 <= (420 - 416)) {
                    scanf ("%d", &XXWx49[TXfIBP][JceJjWtV92]);
                    JceJjWtV92 = JceJjWtV92 +(994 - 993);
                }
            }
            TXfIBP = TXfIBP +1;
        }
    }
    scanf ("%d %d", &Ki6mVs5Ofn, &fjNVIeFb);
    if (XEYnK5ARgQs (Ki6mVs5Ofn, fjNVIeFb)) {
        {
            TXfIBP = 714 - 714;
            while (TXfIBP <= (173 - 169)) {
                hX0QG2PijpkE = XXWx49[Ki6mVs5Ofn][TXfIBP];
                XXWx49[Ki6mVs5Ofn][TXfIBP] = XXWx49[fjNVIeFb][TXfIBP];
                XXWx49[fjNVIeFb][TXfIBP] = hX0QG2PijpkE;
                TXfIBP++;
            }
        }
        {
            TXfIBP = (935 - 549) - 386;
            while (TXfIBP <= (901 - 897)) {
                flag = (832 - 832);
                {
                    JceJjWtV92 = 0;
                    for (; JceJjWtV92 <= (680 - 676);) {
                        printf ("%d", XXWx49[TXfIBP][JceJjWtV92]);
                        if (flag)
                            ;
                        else
                            flag = (148 - 147);
                        JceJjWtV92 = JceJjWtV92 +1;
                    }
                }
                TXfIBP++;
                printf ("\n");
            }
        }
    }
    else
        ;
}

