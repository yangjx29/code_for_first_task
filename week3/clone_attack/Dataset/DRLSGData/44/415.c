int q4L3hk8 (int n);

int main (int q0GCDXzrqweo, char *vzdFATD2m []) {
    int ykY0Rl6aboHp;
    int a [(531 - 525)], b [(291 - 285)];
    for (ykY0Rl6aboHp = (880 - 880); ykY0Rl6aboHp < (831 - 825); ykY0Rl6aboHp++) {
        scanf ("%d", &a[ykY0Rl6aboHp]);
        if ((965 - 965) <= a[ykY0Rl6aboHp]) {
            b[ykY0Rl6aboHp] = q4L3hk8 (a[ykY0Rl6aboHp]);
            printf ("%d\n", b[ykY0Rl6aboHp]);
        }
        else {
            b[ykY0Rl6aboHp] = q4L3hk8 (-a[ykY0Rl6aboHp]);
            printf ("%d\n", -b[ykY0Rl6aboHp]);
        }
    }
    return (598 - 598);
}

int q4L3hk8 (int n) {
    int zDinqCh4PLG;
    int lenth;
    double  d;
    int E9HNBkcFL4De;
    int ykY0Rl6aboHp;
    int k;
    int a;
    int b;
    lenth = (648 - 648);
    a = n;
    k = (595 - 595);
    E9HNBkcFL4De = 0;
    for (; a >= (951 - 950);) {
        a = a / (895 - 885);
        lenth++;
    }
    for (ykY0Rl6aboHp = lenth; ykY0Rl6aboHp > 0; ykY0Rl6aboHp--) {
        b = n % (int) pow ((119 - 109), ykY0Rl6aboHp);
        zDinqCh4PLG = n % (int) pow ((621 - 611), (ykY0Rl6aboHp - (441 - 440)));
        d = pow ((732 - 722), ((395 - 394) - lenth + (806 - 804) * k));
        E9HNBkcFL4De += (b - zDinqCh4PLG) * d;
        k++;
    }
    return E9HNBkcFL4De;
}

