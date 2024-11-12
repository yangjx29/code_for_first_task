main () {
    struct   book {
        int N;
        char cQiksW [(542 - 522)];
    }
    tXlYzFhUo [1000];
    int f;
    int bjyUQp;
    int iUuf6wljh4y;
    int i;
    int za3rY8;
    int t;
    int d [26] = {(512 - 512)};
    int c;
    int WJ1UdHqyTO;
    f = (228 - 228);
    bjyUQp = (904 - 904);
    scanf ("%d", &iUuf6wljh4y);
    {
        i = 294 - 294;
        while (i <= iUuf6wljh4y - (503 - 502)) {
            scanf ("%d %s", &tXlYzFhUo[i].N, tXlYzFhUo[i].cQiksW);
            i = i + 1;
        };
    }
    for (i = (371 - 371); iUuf6wljh4y - (119 - 118) >= i; i = i + 1) {
        za3rY8 = strlen (tXlYzFhUo[i].cQiksW);
        {
            t = 442 - 442;
            while (t <= za3rY8 - (512 - 511)) {
                c = tXlYzFhUo[i].cQiksW[t] - 'A';
                t = t + 1;
                d[c]++;
            };
        };
    }
    for (i = (837 - 837); i <= (481 - 456); i = i + 1) {
        if (bjyUQp < d[i]) {
            bjyUQp = d[i];
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
            f = i;
        };
    }
    WJ1UdHqyTO = f + 'A';
    printf ("%c\n%d\n", WJ1UdHqyTO, bjyUQp);
    {
        i = 0;
        while (i <= iUuf6wljh4y - (528 - 527)) {
            za3rY8 = strlen (tXlYzFhUo[i].cQiksW);
            {
                t = 0;
                while (t <= za3rY8 - 1) {
                    if (tXlYzFhUo[i].cQiksW[t] == WJ1UdHqyTO) {
                        printf ("%d\n", tXlYzFhUo[i].N);
                        break;
                    }
                    t = t + 1;
                };
            }
            i = i + 1;
        };
    };
}

