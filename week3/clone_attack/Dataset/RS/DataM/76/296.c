int main () {
    int sz [20001] = {0};
    int b [50000];
    int BHGJpt = b[0];
    int a [50000];
    int ShfsmijVBL;
    ShfsmijVBL = a[0];
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
    int n;
    scanf ("%d", &n);
    for (int uWj31SEgwD = 0;
    uWj31SEgwD < n; uWj31SEgwD++) {
        scanf ("%d %d", &(a[uWj31SEgwD]), &(b[uWj31SEgwD]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        int deH0Mrbn = 0;
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
        while (n > deH0Mrbn) {
            if (ShfsmijVBL > a[deH0Mrbn]) {
                ShfsmijVBL = a[deH0Mrbn];
            }
            if (BHGJpt < b[deH0Mrbn]) {
                BHGJpt = b[deH0Mrbn];
            }
            deH0Mrbn++;
        };
    }
    {
        int m = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n > m) {
            {
                int Qy6oKXCE = a[m];
                while (Qy6oKXCE < b[m]) {
                    sz[Qy6oKXCE] = 1;
                    Qy6oKXCE = Qy6oKXCE +1;
                };
            }
            m++;
        };
    }
    {
        int rCmd5T3vfpuE = ShfsmijVBL;
        while (BHGJpt > rCmd5T3vfpuE) {
            if (sz[rCmd5T3vfpuE] == 0) {
                printf ("no");
                return 0;
            }
            rCmd5T3vfpuE = rCmd5T3vfpuE + 1;
        };
    }
    printf ("%d %d", ShfsmijVBL, BHGJpt);
    return 0;
}

