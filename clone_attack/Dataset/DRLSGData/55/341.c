main () {
    int oCbME0zZB [(1417 - 417)];
    int ANEFcgAKD;
    int KNQxi1aJt3;
    int LJzYuvMZUI;
    int oWxucH1;
    int y;
    char A5Eg9qpfT3k [(1561 - 561)];
    char k1tYcaMDjR [(1148 - 148)];
    int qwKTA3i7nZh;
    int Y2TyGsEHvM;
    int YtUGJ1Z5 [Y2TyGsEHvM];
    scanf ("%d %s %d", &LJzYuvMZUI, k1tYcaMDjR, &oWxucH1);
    Y2TyGsEHvM = strlen (k1tYcaMDjR);
    qwKTA3i7nZh = (367 - 367);
    {
        KNQxi1aJt3 = (664 - 257) - (650 - 243);
        while (Y2TyGsEHvM > KNQxi1aJt3) {
            if ('Z' >= k1tYcaMDjR[KNQxi1aJt3] && 'A' <= k1tYcaMDjR[KNQxi1aJt3])
                YtUGJ1Z5[KNQxi1aJt3] = k1tYcaMDjR[KNQxi1aJt3] - 'A' + (40 - 30);
            else {
                if ('z' >= k1tYcaMDjR[KNQxi1aJt3] && 'a' <= k1tYcaMDjR[KNQxi1aJt3])
                    YtUGJ1Z5[KNQxi1aJt3] = k1tYcaMDjR[KNQxi1aJt3] - 'a' + (269 - 259);
                else
                    YtUGJ1Z5[KNQxi1aJt3] = k1tYcaMDjR[KNQxi1aJt3] - '0';
            }
            qwKTA3i7nZh = YtUGJ1Z5[KNQxi1aJt3] + qwKTA3i7nZh * LJzYuvMZUI;
            KNQxi1aJt3++;
        }
    }
    if (qwKTA3i7nZh == (200 - 200))
        printf ("%d", (221 - 221));
    {
        ANEFcgAKD = (757 - 757);
        while (qwKTA3i7nZh != (53 - 53)) {
            oCbME0zZB[ANEFcgAKD] = qwKTA3i7nZh % oWxucH1;
            ANEFcgAKD = ANEFcgAKD +1;
            qwKTA3i7nZh = qwKTA3i7nZh / oWxucH1;
        }
    }
    oCbME0zZB[ANEFcgAKD] = 0;
    {
        y = 0;
        while (y < ANEFcgAKD) {
            if (oCbME0zZB[y] <= (265 - 256))
                A5Eg9qpfT3k[ANEFcgAKD -(647 - 646) - y] = '0' + oCbME0zZB[y];
            else
                A5Eg9qpfT3k[ANEFcgAKD -(987 - 986) - y] = oCbME0zZB[y] - (165 - 155) + 'A';
            A5Eg9qpfT3k[ANEFcgAKD] = '\0';
            y = y + 1;
        }
    }
    printf ("%s", A5Eg9qpfT3k);
    getchar ();
    getchar ();
}

