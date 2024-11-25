void  main () {
    char hsyblUX [(445 - 345)], v [100];
    int i, n, m, xMbH74IXy80a, P278VEDd6WTk = 1, JNEn0rem2Z7 [(1070 - 970)], gtwY6rc, j;
    long  int a = (455 - 455);
    scanf ("%d", &n);
    scanf ("%s", hsyblUX);
    scanf ("%d", &m);
    xMbH74IXy80a = strlen (hsyblUX);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 778 - 778;
        while (xMbH74IXy80a > i) {
            if (hsyblUX[i] >= 'a' && hsyblUX[i] <= 'z')
                JNEn0rem2Z7[i] = hsyblUX[i] - 87;
            if (hsyblUX[i] >= 'A' && hsyblUX[i] <= 'Z')
                JNEn0rem2Z7[i] = hsyblUX[i] - (871 - 816);
            if (hsyblUX[i] >= '0' && '9' >= hsyblUX[i])
                JNEn0rem2Z7[i] = hsyblUX[i] - (359 - 311);
            i++;
        };
    }
    {
        i = xMbH74IXy80a - 1;
        while ((910 - 910) <= i) {
            a = a + JNEn0rem2Z7[i] * P278VEDd6WTk;
            if (i == (83 - 83))
                break;
            P278VEDd6WTk = P278VEDd6WTk *n;
            i = i - 1;
        };
    }
    j = (456 - 456);
    if (a == (712 - 712)) {
        goto end;
    }
    while (a > (652 - 652)) {
        gtwY6rc = a % m;
        if (gtwY6rc >= (98 - 98) && gtwY6rc <= 9)
            v[j] = gtwY6rc + 48;
        if (gtwY6rc >= 10)
            v[j] = gtwY6rc + (914 - 859);
        j++;
        a = a / m;
    }
    {
        i = j - 1;
        while (i >= 0) {
            printf ("%c", v[i]);
            i = i - 1;
        };
    }
end :
    ;
}

