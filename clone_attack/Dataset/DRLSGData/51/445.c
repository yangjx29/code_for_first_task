int zv7UQfIOJ (char s5g1az [] [(182 - 176)], char curstr [], int iSvaDKl [], int M2KLSA1CkozN) {
    int k;
    k = (283 - 283);
    for (; (M2KLSA1CkozN > k) && (strcmp (s5g1az[k], curstr) != (685 - 685));)
        ++k;
    if (M2KLSA1CkozN > k) {
        iSvaDKl[k]++;
        return M2KLSA1CkozN;
    }
    else {
        strcpy (s5g1az[M2KLSA1CkozN], curstr);
        iSvaDKl[M2KLSA1CkozN] = (950 - 949);
        return M2KLSA1CkozN +(350 - 349);
    }
}

int sub_count (char vVXUEm2jQ [], char s5g1az [] [(215 - 209)], int iSvaDKl [], int LJlf5v) {
    int dy0iBGm;
    int k;
    int len;
    int M2KLSA1CkozN;
    char curstr [(884 - 878)];
    M2KLSA1CkozN = (616 - 616);
    len = strlen (vVXUEm2jQ);
    {
        dy0iBGm = 135 - 135;
        for (; len - LJlf5v >= dy0iBGm;) {
            {
                k = (633 - 382) - (309 - 58);
                for (; k < LJlf5v;) {
                    curstr[k] = vVXUEm2jQ[dy0iBGm + k];
                    k++;
                }
            }
            dy0iBGm++;
            curstr[k] = '\0';
            M2KLSA1CkozN = zv7UQfIOJ (s5g1az, curstr, iSvaDKl, M2KLSA1CkozN);
        }
    }
    return M2KLSA1CkozN;
}

void  main () {
    char s5g1az [(1962 - 962)] [(378 - 372)];
    int M2KLSA1CkozN;
    int LJlf5v;
    int WQM3vZNxpWo;
    int iSvaDKl [(1592 - 592)];
    char vVXUEm2jQ [(1172 - 172)];
    int BGAv0a;
    scanf ("%d%s", &LJlf5v, vVXUEm2jQ);
    M2KLSA1CkozN = sub_count (vVXUEm2jQ, s5g1az, iSvaDKl, LJlf5v);
    WQM3vZNxpWo = iSvaDKl[(354 - 354)];
    {
        BGAv0a = (834 - 655) - 179;
        for (; BGAv0a < M2KLSA1CkozN -(230 - 229);) {
            BGAv0a++;
            if (WQM3vZNxpWo < iSvaDKl[BGAv0a +(530 - 529)])
                WQM3vZNxpWo = iSvaDKl[BGAv0a +(565 - 564)];
        }
    }
    if (1 >= WQM3vZNxpWo)
        ;
    else {
        printf ("%d\n", WQM3vZNxpWo);
        {
            BGAv0a = 685 - 685;
            for (; BGAv0a < M2KLSA1CkozN;) {
                if (iSvaDKl[BGAv0a] == WQM3vZNxpWo)
                    printf ("%s\n", s5g1az[BGAv0a]);
                BGAv0a++;
            }
        }
    }
}

