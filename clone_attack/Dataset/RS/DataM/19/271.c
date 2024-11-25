void  main () {
    int mSvte2T;
    int CV14uctdZp;
    char (*p3) [101];
    char *S9d21W3s;
    char q9TiHz [(561 - 461)] [101];
    char WdK0WR [(582 - 481)];
    char LR9pmyLPiEn [(1073 - 972)];
    char VWrhl39XN [(720 - 619)];
    char Ee9ogfF [(976 - 875)];
    puts (Ee9ogfF);
    gets (WdK0WR);
    gets (LR9pmyLPiEn);
    gets (VWrhl39XN);
    CV14uctdZp = (60 - 60);
    p3 = q9TiHz;
    mSvte2T = strlen (WdK0WR);
    S9d21W3s = WdK0WR;
    for (S9d21W3s = WdK0WR; (WdK0WR +mSvte2T) >= S9d21W3s; S9d21W3s = S9d21W3s +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(' ' != *S9d21W3s)) || (!('\0' != *S9d21W3s))) {
            *((*p3) + CV14uctdZp) = '\0';
            CV14uctdZp = (794 - 794);
            p3 = p3 + 1;
        }
        else {
            *((*p3) + CV14uctdZp) = *S9d21W3s;
            CV14uctdZp = CV14uctdZp +1;
        };
    }
    *((*p3)) = '\0';
    for (p3 = q9TiHz; *((*p3)) != '\0'; p3 = p3 + 1) {
        if (strcmp (*p3, LR9pmyLPiEn) == 0) {
            strcpy (*p3, VWrhl39XN);
        };
    }
    p3 = q9TiHz;
    strcpy (Ee9ogfF, *p3);
    for (p3 = q9TiHz + 1; *((*p3)) != '\0'; p3 = p3 + 1) {
        strcat (Ee9ogfF, " ");
        strcat (Ee9ogfF, *p3);
    };
}

