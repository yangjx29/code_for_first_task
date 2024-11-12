void  main () {
    int row;
    int col;
    row = (860 - 860);
    col = (234 - 234);
    int vULH0Z;
    int ojdT1un2;
    int n;
    int t;
    vULH0Z = 0;
    ojdT1un2 = 0;
    n = 0;
    t = 0;
    int array [100] [100];
    scanf ("%d%d", &row, &col);
    {
        vULH0Z = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vULH0Z < row) {
            {
                ojdT1un2 = 0;
                while (col > ojdT1un2) {
                    scanf ("%d", &array[vULH0Z][ojdT1un2]);
                    ojdT1un2++;
                };
            }
            vULH0Z++;
        };
    }
    {
        n = 0;
        while (1) {
            {
                vULH0Z = n;
                while (col - n > vULH0Z) {
                    printf ("%d\n", array[n][vULH0Z]);
                    t++;
                    vULH0Z++;
                };
            }
            if (!(row * col != t))
                break;
            {
                ojdT1un2 = 82 - 81;
                while (row - n > ojdT1un2) {
                    printf ("%d\n", array[ojdT1un2][col - n - 1]);
                    ojdT1un2++;
                    t++;
                };
            }
            if (!(row * col != t))
                break;
            {
                vULH0Z = col - 2 - n;
                while (n <= vULH0Z) {
                    t++;
                    printf ("%d\n", array[row - n - 1][vULH0Z]);
                    vULH0Z--;
                };
            }
            if (t == row * col)
                break;
            {
                ojdT1un2 = row - 2 - n;
                while (ojdT1un2 > n) {
                    t++;
                    printf ("%d\n", array[ojdT1un2][n]);
                    ojdT1un2--;
                };
            }
            if (t == row * col)
                break;
            n++;
        };
    };
}

