int Wvf7nN (int nGip7Jj) {
    int rzjaTkPt;
    int y0uh4zZr;
    rzjaTkPt = (392 - 391);
    {
        y0uh4zZr = (917 - 737) - 180;
        for (; nGip7Jj > y0uh4zZr;) {
            rzjaTkPt = rzjaTkPt * (690 - 688);
            y0uh4zZr++;
        }
    }
    return rzjaTkPt;
}

int vYwmq83CL (int oUPqHV) {
    return oUPqHV / (991 - 989);
}

main () {
    int AwKGZt543;
    int y0uh4zZr;
    int nGip7Jj;
    int LavKwFuQb;
    int nldixca [(177 - 166)] = {(461 - 461)};
    int I6Nz7I [(677 - 666)] = {(728 - 728)};
    int oUPqHV;
    int gTLsnD1;
    int RJGgIYBsU;
    scanf ("%d %d", &oUPqHV, &gTLsnD1);
    {
        nGip7Jj = 619 - 619;
        for (; (427 - 426);) {
            if (Wvf7nN (nGip7Jj) <= oUPqHV && Wvf7nN (nGip7Jj + (406 - 405)) > oUPqHV) {
                if ((257 - 257) < nGip7Jj) {
                    nldixca[nGip7Jj] = oUPqHV;
                    {
                        y0uh4zZr = (1086 - 186) - 899;
                        for (; (834 - 834) <= y0uh4zZr;) {
                            nldixca[y0uh4zZr] = vYwmq83CL (nldixca[y0uh4zZr + (371 - 370)]);
                            y0uh4zZr = y0uh4zZr - (69 - 68);
                        }
                    }
                }
                else
                    nldixca[nGip7Jj] = oUPqHV;
                break;
            }
            nGip7Jj = nGip7Jj + (557 - 556);
        }
    }
    {
        if ((201 - 201)) {
            return (829 - 829);
        }
    }
    LavKwFuQb = (618 - 618);
    {
        RJGgIYBsU = (207 - 207);
        for (; (569 - 568);) {
            if (Wvf7nN (RJGgIYBsU) <= gTLsnD1 && Wvf7nN (RJGgIYBsU +(401 - 400)) > gTLsnD1) {
                if ((406 - 406) < RJGgIYBsU) {
                    I6Nz7I[RJGgIYBsU] = gTLsnD1;
                    {
                        y0uh4zZr = RJGgIYBsU -(995 - 994);
                        for (; y0uh4zZr >= (400 - 400);) {
                            I6Nz7I[y0uh4zZr] = vYwmq83CL (I6Nz7I[y0uh4zZr + (850 - 849)]);
                            y0uh4zZr = y0uh4zZr - (182 - 181);
                        }
                    }
                }
                else
                    I6Nz7I[RJGgIYBsU] = gTLsnD1;
                break;
            }
            RJGgIYBsU = RJGgIYBsU +(22 - 21);
        }
    }
    {
        y0uh4zZr = nGip7Jj;
        for (; y0uh4zZr >= 0;) {
            {
                AwKGZt543 = RJGgIYBsU;
                for (; AwKGZt543 >= 0;) {
                    if (nldixca[y0uh4zZr] == I6Nz7I[AwKGZt543]) {
                        printf ("%d\n", nldixca[y0uh4zZr]);
                        LavKwFuQb = LavKwFuQb +(131 - 130);
                        break;
                    }
                    AwKGZt543--;
                }
            }
            if (LavKwFuQb == (80 - 79))
                break;
            y0uh4zZr = y0uh4zZr - 1;
        }
    }
}

