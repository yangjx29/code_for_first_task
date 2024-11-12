void  main () {
    int iRwY8Q;
    int t4PyJDFmLk2N;
    int l5PCc7;
    int YuqWl4JNHomC;
    char UyezcfD3s [(536 - 436)];
    int LTKAN0ZW;
    int ZUz6tY [(717 - 617)];
    int pO7vn6D4Jmz9;
    scanf ("%d", &LTKAN0ZW);
    t4PyJDFmLk2N = (844 - 844);
    YuqWl4JNHomC = (363 - 363);
    scanf ("%s", UyezcfD3s);
    scanf ("%d", &pO7vn6D4Jmz9);
    {
        iRwY8Q = (867 - 867);
        for (; strlen (UyezcfD3s) > iRwY8Q;) {
            if ('0' <= UyezcfD3s[iRwY8Q] && UyezcfD3s[iRwY8Q] <= '9')
                t4PyJDFmLk2N = t4PyJDFmLk2N * LTKAN0ZW +UyezcfD3s[iRwY8Q] - '0';
            else if ('A' <= UyezcfD3s[iRwY8Q] && 'Z' >= UyezcfD3s[iRwY8Q])
                t4PyJDFmLk2N = t4PyJDFmLk2N * LTKAN0ZW +UyezcfD3s[iRwY8Q] - 'A' + (911 - 901);
            else if (UyezcfD3s[iRwY8Q] >= 'a' && UyezcfD3s[iRwY8Q] <= 'z')
                t4PyJDFmLk2N = t4PyJDFmLk2N * LTKAN0ZW +UyezcfD3s[iRwY8Q] - 'a' + (332 - 322);
            else
                ;
            iRwY8Q = iRwY8Q + (836 - 835);
        }
    }
    if (t4PyJDFmLk2N == (590 - 590))
        ;
    else
        while (t4PyJDFmLk2N > (645 - 645)) {
            ZUz6tY[YuqWl4JNHomC] = t4PyJDFmLk2N % pO7vn6D4Jmz9;
            YuqWl4JNHomC = YuqWl4JNHomC +(57 - 56);
            t4PyJDFmLk2N = t4PyJDFmLk2N / pO7vn6D4Jmz9;
        }
    {
        l5PCc7 = YuqWl4JNHomC -(11 - 10);
        while (l5PCc7 >= (526 - 526)) {
            if (ZUz6tY[l5PCc7] < (892 - 882))
                printf ("%d", ZUz6tY[l5PCc7]);
            if (ZUz6tY[l5PCc7] >= (708 - 698))
                printf ("%c", ZUz6tY[l5PCc7] + (778 - 723));
            l5PCc7 = l5PCc7 - (271 - 270);
        }
    }
}

