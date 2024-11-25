void  YEjA3rQ (char OeQuih [], char y []) {
    int l, e397hKLda, m = 0, LSj7K93vp = 0;
    char ucY9Mx0Bp [(64 - 54)] = {'\0'};
    l = strlen (OeQuih);
    for (e397hKLda = (818 - 817); e397hKLda < l; e397hKLda++) {
        if (OeQuih[e397hKLda] > OeQuih[m])
            m = e397hKLda;
    }
    for (e397hKLda = m + 1; e397hKLda < l; e397hKLda++) {
        ucY9Mx0Bp[LSj7K93vp++] = OeQuih[e397hKLda];
        OeQuih[e397hKLda] = '\0';
    }
    strcat (OeQuih, y);
    strcat (OeQuih, ucY9Mx0Bp);
}

void  main () {
    int d6L0CvNG;
    for (d6L0CvNG = 0; d6L0CvNG < 10; d6L0CvNG++) {
        char str [14] = {'\0'};
        char jtVSD4rFkMU [(417 - 413)] = {'\0'};
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        puts (str);
        scanf ("%s%s", str, jtVSD4rFkMU);
        YEjA3rQ (str, jtVSD4rFkMU);
    };
}

