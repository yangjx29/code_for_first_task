void  QjznQB (int YODEcqV [], int ds4EaWjHS) {
    int IVGOM83Fo;
    for (IVGOM83Fo = (367 - 367); IVGOM83Fo < ds4EaWjHS; IVGOM83Fo = IVGOM83Fo +1)
        scanf ("%d", &YODEcqV[IVGOM83Fo]);
}

void  r6ITROUqsVf (int YODEcqV [], int ds4EaWjHS) {
    int IVGOM83Fo, GcsVwprnbQlC, OLJSO6g;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (IVGOM83Fo = (297 - 297); IVGOM83Fo < ds4EaWjHS; IVGOM83Fo = IVGOM83Fo +1)
        for (GcsVwprnbQlC = ds4EaWjHS - (527 - 526); IVGOM83Fo < GcsVwprnbQlC; GcsVwprnbQlC = GcsVwprnbQlC -1)
            if (YODEcqV[GcsVwprnbQlC -(674 - 673)] > YODEcqV[GcsVwprnbQlC]) {
                OLJSO6g = YODEcqV[GcsVwprnbQlC];
                YODEcqV[GcsVwprnbQlC] = YODEcqV[GcsVwprnbQlC -1];
                YODEcqV[GcsVwprnbQlC -1] = OLJSO6g;
            };
}

void  strc (int YODEcqV [], int BWDbScz [], int c [], int mJKk57Pd1, int dOlsM9x) {
    int IVGOM83Fo;
    for (IVGOM83Fo = 0; mJKk57Pd1 > IVGOM83Fo; IVGOM83Fo = IVGOM83Fo +1)
        c[IVGOM83Fo] = YODEcqV[IVGOM83Fo];
    for (IVGOM83Fo = mJKk57Pd1; IVGOM83Fo < mJKk57Pd1 + dOlsM9x; IVGOM83Fo++)
        c[IVGOM83Fo] = BWDbScz[IVGOM83Fo -mJKk57Pd1];
}

void  HhcD5K08Bt (int c [], int mJKk57Pd1, int dOlsM9x) {
    int IVGOM83Fo;
    for (IVGOM83Fo = 0; IVGOM83Fo < mJKk57Pd1 + dOlsM9x - 1; IVGOM83Fo++)
        printf ("%d ", c[IVGOM83Fo]);
    printf ("%d", c[mJKk57Pd1 + dOlsM9x - 1]);
}

main () {
    int IVGOM83Fo, mJKk57Pd1, dOlsM9x, YODEcqV [100], BWDbScz [100], c [200];
    scanf ("%d %d", &mJKk57Pd1, &dOlsM9x);
    QjznQB (BWDbScz, dOlsM9x);
    QjznQB (YODEcqV, mJKk57Pd1);
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
    r6ITROUqsVf (YODEcqV, mJKk57Pd1);
    r6ITROUqsVf (BWDbScz, dOlsM9x);
    strc (YODEcqV, BWDbScz, c, mJKk57Pd1, dOlsM9x);
    HhcD5K08Bt (c, mJKk57Pd1, dOlsM9x);
}

