main () {
    int ZruvOlICw9nt;
    int utSPsx [25];
    int b [25];
    int mZ9jkQJFcb25;
    int HXk7hZ;
    int j;
    ZruvOlICw9nt = 0;
    scanf ("%d", &mZ9jkQJFcb25);
    {
        HXk7hZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HXk7hZ < mZ9jkQJFcb25) {
            scanf ("%d", utSPsx + HXk7hZ);
            HXk7hZ = HXk7hZ +1;
        };
    }
    {
        HXk7hZ = 0;
        while (HXk7hZ < mZ9jkQJFcb25) {
            b[HXk7hZ] = 1;
            {
                j = 0;
                while (HXk7hZ > j) {
                    if (utSPsx[j] >= utSPsx[HXk7hZ] && b[j] + 1 > b[HXk7hZ])
                        b[HXk7hZ] = b[j] + 1;
                    j++;
                };
            }
            if (b[HXk7hZ] > ZruvOlICw9nt)
                ZruvOlICw9nt = b[HXk7hZ];
            HXk7hZ++;
        };
    }
    printf ("%d", ZruvOlICw9nt);
}

