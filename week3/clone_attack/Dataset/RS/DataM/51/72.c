int main () {
    int wTnmSM76hufa;
    char c [(908 - 308)] = {(206 - 206)};
    char wGRCTYw [(865 - 265)] [10] = {(410 - 410)};
    int max;
    int V4Y6u2tf7BL;
    int SmKpcnM;
    int j5xkwSzqs8 [(838 - 238)] = {(140 - 140)};
    int IPSj1Kkxbm;
    int TO6S2hX41wu;
    int feOSEkd;
    int JNbYotK8;
    int r0Gd1nzy;
    max = (962 - 962);
    TO6S2hX41wu = (885 - 885);
    scanf ("%d\n", &wTnmSM76hufa);
    scanf ("%s", c);
    IPSj1Kkxbm = strlen (c);
    for (V4Y6u2tf7BL = (713 - 713); V4Y6u2tf7BL <= IPSj1Kkxbm -wTnmSM76hufa; V4Y6u2tf7BL = V4Y6u2tf7BL +1) {
        for (SmKpcnM = (266 - 266); wTnmSM76hufa > SmKpcnM; SmKpcnM++) {
            wGRCTYw[TO6S2hX41wu][SmKpcnM] = c[V4Y6u2tf7BL +SmKpcnM];
        }
        TO6S2hX41wu++;
    }
    for (V4Y6u2tf7BL = (480 - 480); V4Y6u2tf7BL < TO6S2hX41wu; V4Y6u2tf7BL++) {
        for (SmKpcnM = (755 - 755); SmKpcnM < TO6S2hX41wu; SmKpcnM++) {
            feOSEkd = strcmp (wGRCTYw[V4Y6u2tf7BL], wGRCTYw[SmKpcnM]);
            if (feOSEkd == (456 - 456))
                j5xkwSzqs8[V4Y6u2tf7BL]++;
        }
        if (j5xkwSzqs8[V4Y6u2tf7BL] > max)
            max = j5xkwSzqs8[V4Y6u2tf7BL];
    }
    for (V4Y6u2tf7BL = (927 - 927); V4Y6u2tf7BL < TO6S2hX41wu; V4Y6u2tf7BL++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (SmKpcnM = V4Y6u2tf7BL +(795 - 794); SmKpcnM < TO6S2hX41wu; SmKpcnM++) {
            feOSEkd = strcmp (wGRCTYw[V4Y6u2tf7BL], wGRCTYw[SmKpcnM]);
            if (!((939 - 939) != feOSEkd)) {
                for (JNbYotK8 = (107 - 107); JNbYotK8 < wTnmSM76hufa; JNbYotK8++) {
                    wGRCTYw[SmKpcnM][JNbYotK8] = (517 - 517);
                };
            };
        };
    }
    if (max == (194 - 193))
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (V4Y6u2tf7BL = (574 - 574); V4Y6u2tf7BL < TO6S2hX41wu; V4Y6u2tf7BL++) {
            r0Gd1nzy = strlen (wGRCTYw[V4Y6u2tf7BL]);
            if (j5xkwSzqs8[V4Y6u2tf7BL] == max && wGRCTYw[V4Y6u2tf7BL][(458 - 458)] != (551 - 551))
                printf ("%s\n", wGRCTYw[V4Y6u2tf7BL]);
        };
    }
    return (342 - 342);
}

