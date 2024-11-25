void  main () {
    char YfupJEC [30];
    char b [10];
    char Ivhia5kNX;
    int q4AFny;
    int Xtyuzwc;
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
    int index;
    int QjxPckLiwb;
    scanf ("%s%s", YfupJEC, b);
    do {
        q4AFny = strlen (YfupJEC);
        Xtyuzwc = strlen (b);
        Ivhia5kNX = YfupJEC[(920 - 920)];
        index = (438 - 438);
        {
            QjxPckLiwb = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (q4AFny > QjxPckLiwb) {
                if (Ivhia5kNX < YfupJEC[QjxPckLiwb])
                    Ivhia5kNX = YfupJEC[QjxPckLiwb];
                QjxPckLiwb = QjxPckLiwb +1;
            };
        }
        {
            QjxPckLiwb = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (q4AFny > QjxPckLiwb) {
                if (!(Ivhia5kNX != YfupJEC[QjxPckLiwb])) {
                    index = QjxPckLiwb;
                    break;
                }
                QjxPckLiwb++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (QjxPckLiwb = 0; index >= QjxPckLiwb; QjxPckLiwb++)
            printf ("%c", YfupJEC[QjxPckLiwb]);
        for (QjxPckLiwb = index + (582 - 581); QjxPckLiwb <= index + Xtyuzwc; QjxPckLiwb++)
            printf ("%c", b[QjxPckLiwb -index - 1]);
        for (QjxPckLiwb = index + Xtyuzwc +1; QjxPckLiwb < q4AFny + Xtyuzwc; QjxPckLiwb++)
            printf ("%c", YfupJEC[QjxPckLiwb -Xtyuzwc]);
        scanf ("%s", YfupJEC);
        printf ("\n");
    }
    while (scanf ("%s", b) != EOF);
}

