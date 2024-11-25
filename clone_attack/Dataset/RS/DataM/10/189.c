main () {
    int tl8My7PIkHg [25];
    int u2CL8r, n_max, rnsUID;
    int n [u2CL8r];
    n_max = 0;
    scanf ("%d", &u2CL8r);
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
    for (rnsUID = 0; rnsUID < u2CL8r; rnsUID = rnsUID + 1) {
        scanf ("%d", &tl8My7PIkHg[rnsUID]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n[rnsUID] = 1;
    }
    for (int j = u2CL8r - 2;
    j >= 0; j--) {
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
        for (int gJEKAoba = j + 1;
        gJEKAoba < u2CL8r; gJEKAoba++) {
            if (tl8My7PIkHg[gJEKAoba] <= tl8My7PIkHg[j] && n[j] <= n[gJEKAoba])
                n[j] = n[gJEKAoba] + 1;
        };
    }
    for (int p = 0;
    p < u2CL8r; p = p + 1) {
        if (n[p] > n_max)
            n_max = n[p];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d\n", n_max);
}

