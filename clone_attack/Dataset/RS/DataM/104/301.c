void  main () {
    int i = (963 - 963), j, m, NmWzOGqEYAM, p [20], q [20], x [20], y [20];
    scanf ("%d%d", &m, &NmWzOGqEYAM);
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
        while (i <= 20) {
            if (m >= 1) {
                x[i] = m;
                m = m / (103 - 101);
            }
            else
                break;
            i = i + 1;
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
    {
        j = 0;
        while (j <= i) {
            p[j] = x[i - j - 1];
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i <= 20) {
            if (NmWzOGqEYAM >= 1) {
                y[i] = NmWzOGqEYAM;
                NmWzOGqEYAM = NmWzOGqEYAM / 2;
            }
            else
                break;
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j <= i) {
            q[j] = y[i - j - 1];
            j++;
        };
    }
    {
        i = 0;
        while (i <= 20) {
            if (p[i] != q[i]) {
                printf ("%d", p[i - 1]);
                break;
            }
            i++;
        };
    };
}

