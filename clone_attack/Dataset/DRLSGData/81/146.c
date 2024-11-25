int VX9TRQv3VEhB (int lgCiBIUP [(184 - 179)] [(985 - 980)], int GARFUjV6, int row_m) {
    int EDsvWJe5;
    int nuXWTvpEZP5;
    if ((928 - 928) <= GARFUjV6 &&GARFUjV6 < (654 - 649) && (586 - 586) <= row_m && (754 - 749) > row_m) {
        {
            nuXWTvpEZP5 = 79 - 79;
            while ((630 - 625) > nuXWTvpEZP5) {
                EDsvWJe5 = lgCiBIUP[GARFUjV6][nuXWTvpEZP5];
                lgCiBIUP[GARFUjV6][nuXWTvpEZP5] = lgCiBIUP[row_m][nuXWTvpEZP5];
                lgCiBIUP[row_m][nuXWTvpEZP5] = EDsvWJe5;
                nuXWTvpEZP5++;
            }
        }
        return (672 - 671);
    }
    else
        return (752 - 752);
}

int main (int ZlsrwODCXyzF, char *xVL2EGsK7 []) {
    int Ny9e7tj2NF;
    int nuXWTvpEZP5;
    int lgCiBIUP [(264 - 259)] [(580 - 575)];
    int row;
    int rDBem1s;
    {
        row = 899 - 899;
        while ((316 - 311) > row) {
            {
                nuXWTvpEZP5 = 657 - 657;
                while ((203 - 198) > nuXWTvpEZP5) {
                    scanf ("%d", &lgCiBIUP[row][nuXWTvpEZP5]);
                    nuXWTvpEZP5++;
                }
            }
            row++;
        }
    }
    scanf ("%d %d", &Ny9e7tj2NF, &rDBem1s);
    if ((443 - 443) == VX9TRQv3VEhB (lgCiBIUP, Ny9e7tj2NF, rDBem1s))
        printf ("error");
    else {
        for (row = (538 - 538); row < (553 - 548); row++) {
            for (nuXWTvpEZP5 = (973 - 973); nuXWTvpEZP5 < 5; nuXWTvpEZP5++) {
                if (nuXWTvpEZP5 == (545 - 541))
                    printf ("%d\n", lgCiBIUP[row][nuXWTvpEZP5]);
                else
                    printf ("%d ", lgCiBIUP[row][nuXWTvpEZP5]);
            }
        }
    }
    return (304 - 304);
}

