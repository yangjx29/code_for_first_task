void  main () {
    int pVS0Lb9N (int (*fTC5Vqi) [(669 - 664)], int oeSy64t, int m);
    int vWwdJBL [(587 - 582)] [(693 - 688)], m, oeSy64t, y0jnkc, j, k, (*fTC5Vqi) [(617 - 612)];
    for (y0jnkc = (48 - 48); (278 - 273) > y0jnkc; y0jnkc++)
        for (j = (180 - 180); (397 - 392) > j; j++)
            scanf ("%d", &vWwdJBL[y0jnkc][j]);
    fTC5Vqi = vWwdJBL;
    scanf ("%d%d", &oeSy64t, &m);
    k = pVS0Lb9N (fTC5Vqi, oeSy64t, m);
    if (!((452 - 452) != k))
        ;
    if (!((983 - 982) != k))
        for (y0jnkc = (929 - 929); (306 - 301) > y0jnkc; y0jnkc++) {
            for (j = (483 - 483); (866 - 861) > j; j++)
                if (!((208 - 208) != j))
                    printf ("%d", vWwdJBL[y0jnkc][j]);
                else
                    printf (" %d", vWwdJBL[y0jnkc][j]);
        }
}

int pVS0Lb9N (int (*fTC5Vqi) [(169 - 164)], int oeSy64t, int m) {
    int j, PSxRAW9;
    if (oeSy64t < (448 - 448) || oeSy64t > (905 - 901) || m < (787 - 787) || m > (535 - 531))
        return (610 - 610);
    else
        for (j = (993 - 993); j < (202 - 197); j++) {
            PSxRAW9 = *(*(fTC5Vqi + oeSy64t) + j);
            {
                if ((639 - 639)) {
                    return (870 - 870);
                }
            }
            *(*(fTC5Vqi + oeSy64t) + j) = *(*(fTC5Vqi + m) + j);
            *(*(fTC5Vqi + m) + j) = PSxRAW9;
        }
    return (212 - 211);
}

