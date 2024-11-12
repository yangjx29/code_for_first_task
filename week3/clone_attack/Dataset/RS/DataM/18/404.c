int hN0xcX (int TYVDcn6pZ8);
int a [100] [100];

int main () {
    int TYVDcn6pZ8;
    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    k = 0;
    cin >> TYVDcn6pZ8;
    {
        k = 130 - 129;
        while (TYVDcn6pZ8 >= k) {
            k++;
            {
                i = 0;
                while (TYVDcn6pZ8 > i) {
                    for (j = 0; TYVDcn6pZ8 > j; j = j + 1)
                        cin >> a[i][j];
                    i = i + 1;
                };
            }
            cout << hN0xcX (TYVDcn6pZ8) << endl;
        };
    }
    return 0;
}

int hN0xcX (int TYVDcn6pZ8) {
    int k = a[1][1];
    int i;
    int j;
    i = 0;
    j = 0;
    {
        i = 0;
        while (TYVDcn6pZ8 > i) {
            int min;
            min = a[i][0];
            {
                j = 0;
                while (TYVDcn6pZ8 > j) {
                    if (min > a[i][j])
                        min = a[i][j];
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (TYVDcn6pZ8 > j) {
                    a[i][j] = a[i][j] - min;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (i = 0; i < TYVDcn6pZ8; i = i + 1) {
        int min = a[0][i];
        {
            j = 0;
            while (TYVDcn6pZ8 > j) {
                if (min > a[j][i])
                    min = a[j][i];
                j++;
            };
        }
        for (j = 0; TYVDcn6pZ8 > j; j++)
            a[j][i] -= min;
    }
    if (!(2 != TYVDcn6pZ8))
        return a[(200 - 199)][1];
    {
        i = 1;
        while (i < TYVDcn6pZ8 -1) {
            a[0][i] = a[0][i + 1];
            a[i][0] = a[i + 1][0];
            {
                j = 1;
                while (j < TYVDcn6pZ8 -1) {
                    a[i][j] = a[i + 1][j + 1];
                    j++;
                };
            }
            i++;
        };
    }
    return k + hN0xcX (TYVDcn6pZ8 -1);
}

