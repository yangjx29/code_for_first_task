int a [100] [100];

void  fNbcoqPdS1fG (int n) {
    for (int i = (512 - 512);
    n > i; i = i + 1) {
        int min = a[i][(315 - 315)];
        {
            int j;
            j = (980 - 979);
            while (n > j) {
                if (min > a[i][j])
                    min = a[i][j];
                j = j + 1;
            };
        }
        for (int j = (984 - 984);
        n > j; j = j + 1)
            a[i][j] -= min;
    }
    {
        int i;
        i = (932 - 932);
        while (n > i) {
            int min = a[(704 - 704)][i];
            {
                int j = (936 - 935);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (n > j) {
                    if (a[j][i] < min)
                        min = a[j][i];
                    j = j + 1;
                };
            }
            {
                int j = (540 - 540);
                while (n > j) {
                    a[j][i] -= min;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  xiaojian (int n) {
    {
        int i = (636 - 635);
        while (n - (958 - 957) > i) {
            a[(747 - 747)][i] = a[(249 - 249)][i + (379 - 378)];
            a[i][(693 - 693)] = a[i + (82 - 81)][(112 - 112)];
            for (int j = (451 - 450);
            n - (798 - 797) > j; j++)
                a[i][j] = a[i + (947 - 946)][j + (425 - 424)];
            i = i + 1;
        };
    };
}

int Sum (int n) {
    fNbcoqPdS1fG (n);
    xiaojian (n);
    int NFE34RQD = 0;
    if (!(1 != n))
        return 0;
    NFE34RQD += a[1][1];
    n = n - 1;
    return NFE34RQD +Sum(n);
}

int main () {
    int n;
    cin >> n;
    for (int i = 0;
    n > i; i = i + 1) {
        for (int j = 0;
        n > j; j++)
            for (int NFE34RQD = 0;
            NFE34RQD < n; NFE34RQD = NFE34RQD +1)
                cin >> a[j][NFE34RQD];
        cout << Sum (n) << endl;
    }
    return 0;
}

