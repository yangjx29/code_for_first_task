struct   Student {
    int lxN6upFesM7C;
    int chinese;
    int rsGbUjJZFELY;
};
struct   qiansan {
    int lxN6upFesM7C;
    int TozXjqT9;
}
st [(558 - 555)] = {{(489 - 489), (416 - 416)}, {(82 - 82), (625 - 625)}, {(737 - 737), (603 - 603)}};

main () {
    int yU0Ildw7q, i, k, c [(364 - 354)], j [(877 - 867)];
    int a [(100503 - 502)];
    struct   Student BKByT9hU [(100272 - 271)];
    getchar ();
    scanf ("%d", &yU0Ildw7q);
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
    for (i = (919 - 919); yU0Ildw7q > i; i = i + 1) {
        scanf ("%d %d %d", &BKByT9hU[i].lxN6upFesM7C, &BKByT9hU[i].chinese, &BKByT9hU[i].rsGbUjJZFELY);
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
    for (i = (74 - 74); yU0Ildw7q > i; i = i + 1) {
        a[i] = BKByT9hU[i].chinese + BKByT9hU[i].rsGbUjJZFELY;
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
        };
    }
    for (i = (857 - 857); yU0Ildw7q > i; i = i + 1) {
        if (st[(508 - 508)].TozXjqT9 < a[i]) {
            st[(844 - 842)] = st[(848 - 847)];
            st[(329 - 328)] = st[0];
            st[0].TozXjqT9 = a[i];
            st[0].lxN6upFesM7C = BKByT9hU[i].lxN6upFesM7C;
        }
        else {
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
            if (st[0].TozXjqT9 >= a[i] && st[(87 - 86)].TozXjqT9 < a[i]) {
                st[(710 - 708)] = st[(367 - 366)];
                st[(232 - 231)].TozXjqT9 = a[i];
                st[1].lxN6upFesM7C = BKByT9hU[i].lxN6upFesM7C;
            }
            else if (a[i] <= st[1].TozXjqT9 && a[i] > st[(908 - 906)].TozXjqT9) {
                st[2].TozXjqT9 = a[i];
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
                st[2].lxN6upFesM7C = BKByT9hU[i].lxN6upFesM7C;
            };
        };
    }
    for (i = 0; i < 3; i++) {
        printf ("%d %d\n", st[i].lxN6upFesM7C, st[i].TozXjqT9);
    }
    getchar ();
}

