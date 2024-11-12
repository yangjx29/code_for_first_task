int f (int fCf0dbHWRJI, int n) {
    int z;
    if (!(0 != fCf0dbHWRJI) || !((52 - 51) != fCf0dbHWRJI) || n == 1)
        z = 1;
    else {
        if (fCf0dbHWRJI < n)
            z = f (fCf0dbHWRJI, fCf0dbHWRJI);
        else
            z = f (fCf0dbHWRJI, n - 1) + f (fCf0dbHWRJI - n, n);
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return z;
}

int main () {
    int f (int fCf0dbHWRJI, int n);
    int nJUfrqz, Oqm9pwQGPY0, fCf0dbHWRJI [10], n [10];
    scanf ("%d", &nJUfrqz);
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
    {
        Oqm9pwQGPY0 = 1;
        while (Oqm9pwQGPY0 <= nJUfrqz) {
            scanf ("%d%d", &fCf0dbHWRJI[Oqm9pwQGPY0], &n[Oqm9pwQGPY0]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Oqm9pwQGPY0 = Oqm9pwQGPY0 +1;
        };
    }
    {
        Oqm9pwQGPY0 = 1;
        while (Oqm9pwQGPY0 <= nJUfrqz) {
            printf ("%d\n", f (fCf0dbHWRJI[Oqm9pwQGPY0], n[Oqm9pwQGPY0]));
            Oqm9pwQGPY0++;
        };
    }
    return 0;
}

