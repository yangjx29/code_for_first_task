int a [(799 - 774)], aa2ngWD7U [25];
int n;

int changdu (int NW67Fl3Hjyvd) {
    int MTObV1xZl, max = (713 - 712);
    for (MTObV1xZl = NW67Fl3Hjyvd +1; n > MTObV1xZl; MTObV1xZl++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[MTObV1xZl] <= a[NW67Fl3Hjyvd]) {
            aa2ngWD7U[NW67Fl3Hjyvd] = changdu (MTObV1xZl) + 1;
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
            if (max < aa2ngWD7U[NW67Fl3Hjyvd])
                max = aa2ngWD7U[NW67Fl3Hjyvd];
        };
    }
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
    aa2ngWD7U[NW67Fl3Hjyvd] = max;
    return max;
}

main () {
    int max;
    int NW67Fl3Hjyvd;
    max = 0;
    scanf ("%d", &n);
    for (NW67Fl3Hjyvd = 0; n > NW67Fl3Hjyvd; NW67Fl3Hjyvd = NW67Fl3Hjyvd +1)
        scanf ("%d", &a[NW67Fl3Hjyvd]);
    for (NW67Fl3Hjyvd = 0; NW67Fl3Hjyvd < n; NW67Fl3Hjyvd++)
        aa2ngWD7U[NW67Fl3Hjyvd] = changdu (NW67Fl3Hjyvd);
    for (NW67Fl3Hjyvd = 0; NW67Fl3Hjyvd < n; NW67Fl3Hjyvd++) {
        if (aa2ngWD7U[NW67Fl3Hjyvd] > max)
            max = aa2ngWD7U[NW67Fl3Hjyvd];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", max);
}

