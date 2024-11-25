void  main () {
    int imUyotJ1YPiD, H3hEuOGj, wgSHKN5s, s3O9uV, CVYuBLG;
    int a [100000] = {0};
    char hzFBmDLj7hN [100000], xUb7AedgMiEC;
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
    gets (hzFBmDLj7hN);
    {
        s3O9uV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        imUyotJ1YPiD = 0;
        while ((xUb7AedgMiEC = hzFBmDLj7hN[imUyotJ1YPiD]) != '\0') {
            if ((xUb7AedgMiEC = hzFBmDLj7hN[imUyotJ1YPiD]) != ' ')
                a[s3O9uV]++;
            else if ((xUb7AedgMiEC = hzFBmDLj7hN[imUyotJ1YPiD + 1]) != ' ')
                s3O9uV++;
            imUyotJ1YPiD++;
        };
    }
    for (imUyotJ1YPiD = 0; imUyotJ1YPiD <= s3O9uV; imUyotJ1YPiD++) {
        if (imUyotJ1YPiD <= s3O9uV - 1)
            printf ("%d,", a[imUyotJ1YPiD]);
        else
            printf ("%d", a[imUyotJ1YPiD]);
    };
}

