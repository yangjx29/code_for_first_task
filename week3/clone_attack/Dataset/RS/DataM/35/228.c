void  main () {
    int UZKzFa;
    int dVEkOaGSc [(583 - 574)] [9];
    int i;
    int FAjdZxXiTC2E;
    int hgdiADIfn;
    int cK4nZbpHIfa;
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    UZKzFa = (771 - 771);
    scanf ("%d,%d", &hgdiADIfn, &cK4nZbpHIfa);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < hgdiADIfn) {
            for (FAjdZxXiTC2E = 0; cK4nZbpHIfa > FAjdZxXiTC2E; FAjdZxXiTC2E++)
                scanf ("%d", &dVEkOaGSc[i][FAjdZxXiTC2E]);
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
            i++;
        };
    }
    for (i = 0; i < hgdiADIfn; i = i + 1) {
        FAjdZxXiTC2E = 0;
        while (cK4nZbpHIfa > FAjdZxXiTC2E) {
            {
                UZKzFa = 0;
                while (cK4nZbpHIfa > UZKzFa) {
                    if (dVEkOaGSc[i][UZKzFa] > dVEkOaGSc[i][FAjdZxXiTC2E])
                        break;
                    UZKzFa++;
                };
            }
            if (UZKzFa == cK4nZbpHIfa) {
                for (UZKzFa = 0; UZKzFa < hgdiADIfn; UZKzFa++)
                    if (dVEkOaGSc[UZKzFa][FAjdZxXiTC2E] < dVEkOaGSc[i][FAjdZxXiTC2E])
                        break;
                if (UZKzFa == hgdiADIfn) {
                    t = t + 1;
                    printf ("%d+%d", i, FAjdZxXiTC2E);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            FAjdZxXiTC2E = FAjdZxXiTC2E +1;
        };
    }
    if (t == 0)
        ;
}

