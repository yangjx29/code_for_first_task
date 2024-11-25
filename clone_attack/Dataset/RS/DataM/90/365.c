int DQd2VqgeF (int m, int SQ8ZLMD6FSc) {
    int f;
    if (SQ8ZLMD6FSc > m)
        SQ8ZLMD6FSc = m;
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
    if (m == 0 || SQ8ZLMD6FSc == (613 - 612))
        f = 1;
    else
        f = DQd2VqgeF (m, SQ8ZLMD6FSc -1) + DQd2VqgeF (m - SQ8ZLMD6FSc, SQ8ZLMD6FSc);
    return (f);
}

void  main () {
    int m, SQ8ZLMD6FSc, t, oANxv9p;
    scanf ("%d", &t);
    {
        oANxv9p = 0;
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
        while (oANxv9p < t) {
            oANxv9p++;
            scanf ("%d %d", &m, &SQ8ZLMD6FSc);
            printf ("%d\n", DQd2VqgeF (m, SQ8ZLMD6FSc));
        };
    };
}

