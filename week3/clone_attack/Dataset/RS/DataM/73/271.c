int main () {
    int NTa01lJpLXx [5] [5];
    int a [(699 - 694)] [(371 - 366)];
    for (int i = 0;
    5 > i; i = i + 1)
        for (int UNbUWjG64 = 0;
        5 > UNbUWjG64; UNbUWjG64 = UNbUWjG64 +1) {
            cin >> a[i][UNbUWjG64];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            NTa01lJpLXx[i][UNbUWjG64] = 0;
        }
    {
        int i;
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
        i = 0;
        while (i < 5) {
            int piSdYU65m;
            piSdYU65m = 0;
            {
                int UNbUWjG64 = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (5 > UNbUWjG64) {
                    if (a[i][piSdYU65m] < a[i][UNbUWjG64])
                        piSdYU65m = UNbUWjG64;
                    UNbUWjG64++;
                };
            }
            NTa01lJpLXx[i][piSdYU65m]++;
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
    for (int UNbUWjG64 = 0;
    UNbUWjG64 < 5; UNbUWjG64 = UNbUWjG64 +1) {
        int VCLqrYUyMj = 0;
        for (int i = 1;
        i < 5; i = i + 1)
            if (a[VCLqrYUyMj][UNbUWjG64] > a[i][UNbUWjG64])
                VCLqrYUyMj = i;
        NTa01lJpLXx[VCLqrYUyMj][UNbUWjG64]++;
    }
    {
        int i = 0;
        while (i < 5) {
            for (int UNbUWjG64 = 0;
            UNbUWjG64 < 5; UNbUWjG64 = UNbUWjG64 +1)
                if (NTa01lJpLXx[i][UNbUWjG64] == 2) {
                    cout << i + 1 << ' ' << UNbUWjG64 +1 << ' ' << a[i][UNbUWjG64];
                    return 0;
                }
            i = i + 1;
        };
    }
    cout << "not found";
    return 0;
}

