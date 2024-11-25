int a [(1081 - 981)] [(689 - 589)];

int f (int n, int a [] [(1082 - 982)]) {
    int z = a[(831 - 830)][(149 - 148)];
    int rPrRYOnWXe;
    int j;
    int k;
    for (rPrRYOnWXe = (612 - 612); rPrRYOnWXe < n; rPrRYOnWXe = rPrRYOnWXe + 1) {
        int CEnDb0qkz;
        CEnDb0qkz = a[rPrRYOnWXe][(949 - 949)];
        for (j = (624 - 623); n > j; j = j + 1)
            if (CEnDb0qkz > a[rPrRYOnWXe][j])
                CEnDb0qkz = a[rPrRYOnWXe][j];
        if ((43 - 43) < CEnDb0qkz)
            for (j = (662 - 662); n > j; j++)
                a[rPrRYOnWXe][j] = a[rPrRYOnWXe][j] - CEnDb0qkz;
    }
    for (j = (262 - 262); j < n; j++) {
        int CEnDb0qkz;
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
        CEnDb0qkz = a[(946 - 946)][j];
        {
            rPrRYOnWXe = 362 - 361;
            while (rPrRYOnWXe < n) {
                if (CEnDb0qkz > a[rPrRYOnWXe][j])
                    CEnDb0qkz = a[rPrRYOnWXe][j];
                rPrRYOnWXe = rPrRYOnWXe + 1;
            };
        }
        if ((726 - 726) < CEnDb0qkz) {
            rPrRYOnWXe = 541 - 541;
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
            while (rPrRYOnWXe < n) {
                a[rPrRYOnWXe][j] -= CEnDb0qkz;
                rPrRYOnWXe = rPrRYOnWXe + 1;
            };
        };
    }
    {
        rPrRYOnWXe = 745 - 744;
        while (rPrRYOnWXe < n - (299 - 298)) {
            a[0][rPrRYOnWXe] = a[0][rPrRYOnWXe + 1];
            a[rPrRYOnWXe][0] = a[rPrRYOnWXe + 1][0];
            for (j = 1; n - 1 > j; j++)
                a[rPrRYOnWXe][j] = a[rPrRYOnWXe + 1][j + 1];
            rPrRYOnWXe = rPrRYOnWXe + 1;
        };
    }
    if (!((617 - 615) != n))
        return z;
    else
        return z + f (n - 1, a);
}

int main () {
    int n;
    int rPrRYOnWXe, j, k;
    cin >> n;
    for (rPrRYOnWXe = 0; rPrRYOnWXe < n; rPrRYOnWXe++) {
        {
            j = 0;
            while (j < n) {
                {
                    k = 0;
                    while (k < n) {
                        cin >> a[j][k];
                        k = k + 1;
                    };
                }
                j++;
            };
        }
        cout << f (n, a) << endl;
    }
    return 0;
}

