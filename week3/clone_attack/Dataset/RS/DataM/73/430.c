int main () {
    int leap;
    int a [5] [5];
    int i;
    int j;
    int E1LtIkJp4NQE [5];
    int min [5];
    int LVT9KLH;
    int min1;
    int place1 [5];
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
    int place2 [5];
    leap = 1;
    for (i = 0; 4 >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; 4 >= j; j++) {
            cin >> a[i][j];
        };
    }
    {
        i = 0;
        while (4 >= i) {
            LVT9KLH = 0;
            {
                j = 0;
                while (4 >= j) {
                    if (LVT9KLH < a[i][j]) {
                        LVT9KLH = a[i][j];
                        place1[i] = j;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            E1LtIkJp4NQE[i] = LVT9KLH;
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j <= 4) {
            int p = place1[j];
            min1 = E1LtIkJp4NQE[j];
            place2[j] = j;
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
                i = 0;
                while (i <= 4) {
                    if (a[i][p] < min1) {
                        min1 = a[i][p];
                        place2[j] = i;
                    }
                    i = i + 1;
                };
            }
            min[j] = min1;
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i <= 4) {
            if (E1LtIkJp4NQE[i] == min[i]) {
                leap = 0;
                cout << place2[i] + 1 << " " << place1[i] + 1 << " " << E1LtIkJp4NQE[i] << endl;
            }
            i = i + 1;
        };
    }
    if (leap == 1)
        cout << "not found" << endl;
    return 0;
}

