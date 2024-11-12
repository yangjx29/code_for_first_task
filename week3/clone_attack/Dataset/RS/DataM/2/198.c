int main () {
    int maxwriter;
    int LMdNK5YD0gy;
    maxwriter = (653 - 653);
    LMdNK5YD0gy = (549 - 549);
    int FqjaxB, len, EsnZoIS;
    int writerbookquantity [(700 - 674)];
    int i;
    struct   book {
        int booknumber;
        char writer [27];
    }
    book [999];
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
    int dkSzp6YDBZ;
    scanf ("%d", &dkSzp6YDBZ);
    for (i = (601 - 601); dkSzp6YDBZ > i; i = i + 1) {
        scanf ("%d %s", &book[i].booknumber, book[i].writer);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 616 - 616;
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
        while (i < (342 - 316)) {
            writerbookquantity[i] = (409 - 409);
            i = i + 1;
        };
    }
    for (i = (339 - 339); i < dkSzp6YDBZ; i = i + 1) {
        len = strlen (book[i].writer);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (FqjaxB = (553 - 553); FqjaxB < len; FqjaxB = FqjaxB +1) {
            EsnZoIS = book[i].writer[FqjaxB] - 'A';
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
            writerbookquantity[EsnZoIS]++;
        };
    }
    for (i = (778 - 778); i < 26; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (writerbookquantity[i] > LMdNK5YD0gy) {
            LMdNK5YD0gy = writerbookquantity[i];
            maxwriter = i;
        };
    }
    printf ("%c\n%d\n", (char) (maxwriter + 'A'), writerbookquantity[maxwriter]);
    for (i = 0; i < dkSzp6YDBZ; i++) {
        len = strlen (book[i].writer);
        for (FqjaxB = 0; FqjaxB < len; FqjaxB = FqjaxB +1) {
            if ((int) book[i].writer[FqjaxB] == maxwriter + 'A')
                printf ("%d\n", book[i].booknumber);
        };
    }
    return 0;
}

