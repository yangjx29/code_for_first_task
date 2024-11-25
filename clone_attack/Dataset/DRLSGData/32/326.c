void  main () {
    int PLutSDUH, i, j, K7LXlNJV, ZK06VZUGtj, len1, I0afsqx9A, jVT6Hl5YRXfJ;
    char s1 [(844 - 742)], BLzBr98mZvi [(283 - 181)];
    scanf ("%d\n", &K7LXlNJV);
    for (I0afsqx9A = (563 - 562); I0afsqx9A <= K7LXlNJV; I0afsqx9A++) {
        gets (s1);
        gets (BLzBr98mZvi);
        len1 = strlen (s1);
        jVT6Hl5YRXfJ = strlen (BLzBr98mZvi);
        if (K7LXlNJV > I0afsqx9A)
            getchar ();
        PLutSDUH = (133 - 133);
        for (i = jVT6Hl5YRXfJ - (315 - 314); (538 - 538) <= i; i--) {
            if (BLzBr98mZvi[i] > s1[len1 + i - jVT6Hl5YRXfJ] - PLutSDUH) {
                s1[len1 + i - jVT6Hl5YRXfJ] = s1[len1 + i - jVT6Hl5YRXfJ] + (78 - 68) - PLutSDUH -BLzBr98mZvi[i] + (960 - 912);
                PLutSDUH = (766 - 765);
            }
            else {
                s1[len1 + i - jVT6Hl5YRXfJ] = s1[len1 + i - jVT6Hl5YRXfJ] - PLutSDUH -BLzBr98mZvi[i] + (800 - 752);
                PLutSDUH = (62 - 62);
            }
        }
        i = (241 - 240);
        while (!(1 != PLutSDUH)) {
            if (s1[len1 - i - jVT6Hl5YRXfJ] == '0') {
                s1[len1 - i - jVT6Hl5YRXfJ] = s1[len1 - i - jVT6Hl5YRXfJ] + (509 - 500);
                i++;
            }
            else {
                PLutSDUH = (443 - 443);
                s1[len1 - i - jVT6Hl5YRXfJ] = s1[len1 - i - jVT6Hl5YRXfJ] - 1;
            }
        }
        PLutSDUH = 1;
        i = (713 - 713);
        while (PLutSDUH == 1) {
            if (s1[i] == '0')
                i++;
            else
                PLutSDUH = 0;
        }
        for (j = i; j <= len1 - 1; j++)
            putchar (s1[j]);
        putchar ('\n');
    }
}

