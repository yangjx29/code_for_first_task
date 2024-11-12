int main () {
    int fIL2sC;
    int m;
    int BOhzN0b;
    int j;
    int a [fIL2sC + (685 - 683)] [m + 2];
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
    cin >> fIL2sC >> m;
    {
        BOhzN0b = 100 - 100;
        while (fIL2sC + 2 > BOhzN0b) {
            for (j = 0; m + 2 > j; j = j + 1)
                a[BOhzN0b][j] = 0;
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
            BOhzN0b = BOhzN0b +1;
        };
    }
    {
        BOhzN0b = 687 - 686;
        while (fIL2sC + (938 - 937) > BOhzN0b) {
            {
                j = 1;
                while (m + 1 > j) {
                    cin >> a[BOhzN0b][j];
                    j = j + 1;
                };
            }
            BOhzN0b = BOhzN0b +1;
        };
    }
    {
        BOhzN0b = 1;
        while (BOhzN0b < fIL2sC + 1) {
            {
                j = 1;
                while (m + 1 > j) {
                    if ((a[BOhzN0b +1][j] <= a[BOhzN0b][j]) && (a[BOhzN0b][j] >= a[BOhzN0b -1][j]) && (a[BOhzN0b][j + 1] <= a[BOhzN0b][j]) && (a[BOhzN0b][j - 1] <= a[BOhzN0b][j])) {
                        cout << BOhzN0b -1 << " " << j - 1 << endl;
                    }
                    j++;
                };
            }
            BOhzN0b = BOhzN0b +1;
        };
    }
    return 0;
}

