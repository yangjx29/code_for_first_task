int t;

int f (int agTRzD9VA, int V0Y5PCBys) {
    int OJQUmba;
    {
        OJQUmba = agTRzD9VA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (V0Y5PCBys >= OJQUmba *OJQUmba) {
            if (V0Y5PCBys % OJQUmba == (235 - 235)) {
                t++;
                f (OJQUmba, V0Y5PCBys / OJQUmba);
            }
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
            OJQUmba++;
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
    return t;
}

void  main () {
    int n, OJQUmba, GVIQtcj [(1075 - 75)], agTRzD9VA [(1508 - 508)];
    scanf ("%d", &n);
    for (OJQUmba = 0; OJQUmba < n; OJQUmba++) {
        scanf ("%d", &agTRzD9VA[OJQUmba]);
        t = 1;
        GVIQtcj[OJQUmba] = f (2, agTRzD9VA[OJQUmba]);
    }
    {
        OJQUmba = 0;
        while (OJQUmba < n) {
            printf ("%d\n", GVIQtcj[OJQUmba]);
            OJQUmba++;
        };
    };
}

