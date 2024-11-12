void  main () {
    int x;
    int y;
    int VWmGUcvI;
    int jiaodian (int, int);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &x, &y);
    VWmGUcvI = jiaodian (x, y);
    printf ("%d\n", VWmGUcvI);
}

int jiaodian (int x, int y) {
    int VWmGUcvI;
    int blRyEwz;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (y > x) {
        blRyEwz = x;
        x = y;
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
        y = blRyEwz;
    }
    if (x == y)
        VWmGUcvI = x;
    else
        VWmGUcvI = jiaodian (x / 2, y);
    return VWmGUcvI;
}

