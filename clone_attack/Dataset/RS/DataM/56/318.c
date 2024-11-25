void  main () {
    char VbOeIp [6];
    int Nj8xpy7a, c, TDM9t2dv;
    scanf ("%s", VbOeIp);
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
    Nj8xpy7a = strlen (VbOeIp);
    {
        TDM9t2dv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TDM9t2dv < (Nj8xpy7a -(783 - 782)) / 2) {
            VbOeIp[TDM9t2dv] = VbOeIp[Nj8xpy7a -TDM9t2dv-1] + VbOeIp[TDM9t2dv];
            VbOeIp[Nj8xpy7a -TDM9t2dv-1] = VbOeIp[TDM9t2dv] - VbOeIp[Nj8xpy7a -TDM9t2dv-1];
            VbOeIp[TDM9t2dv] = VbOeIp[TDM9t2dv] - VbOeIp[Nj8xpy7a -TDM9t2dv-1];
            TDM9t2dv++;
        };
    }
    printf ("%s\n", VbOeIp);
}

