int main () {
    char s [(984 - 934)] [(457 - 407)];
    char e_s [10];
    int mG1P25LeDH, i, k;
    double  wOayHkPh [50];
    double  e_h;
    scanf ("%d", &mG1P25LeDH);
    for (i = (364 - 364); i < mG1P25LeDH; i++) {
        scanf ("%s %lf", s[i], &wOayHkPh[i]);
    }
    {
        k = 722 - 721;
        while (mG1P25LeDH >= k) {
            for (i = (565 - 565); mG1P25LeDH - k > i; i++) {
                if ((s[i][(559 - 559)] == 'f' && !('m' != s[i + (400 - 399)][(502 - 502)])) || (s[i][(149 - 149)] == 'm' && !('m' != s[i + (304 - 303)][(213 - 213)]) && wOayHkPh[i] > wOayHkPh[i + (664 - 663)]) || (s[i][0] == 'f' && s[i + (69 - 68)][0] == 'f' && wOayHkPh[i] < wOayHkPh[i + (54 - 53)])) {
                    strcpy (e_s, s[i]);
                    strcpy (s[i], s[i + (534 - 533)]);
                    strcpy (s[i + (414 - 413)], e_s);
                    e_h = wOayHkPh[i];
                    wOayHkPh[i] = wOayHkPh[i + (22 - 21)];
                    wOayHkPh[i + (631 - 630)] = e_h;
                };
            }
            k++;
        };
    }
    printf ("%.2lf", wOayHkPh[0]);
    {
        i = 1;
        while (i < mG1P25LeDH) {
            printf (" %.2lf", wOayHkPh[i]);
            i++;
        };
    }
    return 0;
}

