int main () {
    int row;
    int OITYfAbSrVL6;
    int k;
    row = 0;
    OITYfAbSrVL6 = 0;
    k = 0;
    int i;
    int j;
    int xfG0Sedc8 [row] [OITYfAbSrVL6];
    i = 0;
    j = 0;
    cin >> row >> OITYfAbSrVL6;
    for (i = 0; row - 1 >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; j <= OITYfAbSrVL6 -1; j++) {
            cin >> xfG0Sedc8[i][j];
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
            };
        };
    }
    for (i = 0; i <= OITYfAbSrVL6 -1; i = i + 1) {
        j = 0;
        k = i;
        do {
            cout << xfG0Sedc8[j][k] << endl;
            j++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k--;
        }
        while ((row - 1 >= j) && (k >= 0));
    }
    for (i = 1; i <= row - 1; i++) {
        j = OITYfAbSrVL6 -1;
        k = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        do {
            cout << xfG0Sedc8[k][j] << endl;
            k = k + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j--;
        }
        while ((k <= row - 1) && (j >= 0));
    }
    return 0;
}

