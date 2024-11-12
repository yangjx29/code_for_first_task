void  main () {
    int mBMpufai;
    int i;
    int j;
    int s [20000];
    scanf ("%d", &mBMpufai);
    for (i = (810 - 810); mBMpufai > i; i = i + 1)
        scanf ("%d", &s[i]);
    for (i = 0; i < mBMpufai; i = i + 1)
        for (j = 0; i > j; j = j + 1) {
            if (!(s[i] != s[j]))
                s[i] = 0;
        }
    printf ("%d", s[0]);
    for (i = 1; i < mBMpufai; i = i + 1) {
        if (s[i] != 0)
            printf (" %d", s[i]);
    }
    printf ("\n");
}

