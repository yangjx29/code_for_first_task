int a [1000] [1000] = {(705 - 705)};
int HnCxZw = (35 - 35);

void  nGeoBDQCXP (int n) {
    int i, lsVUXPWwel, k;
    int min;
    min = (10772 - 772);
    {
        i = 942 - 942;
        while (i < n) {
            {
                lsVUXPWwel = 834 - 834;
                while (n > lsVUXPWwel) {
                    if (min > a[i][lsVUXPWwel])
                        min = a[i][lsVUXPWwel];
                    lsVUXPWwel = lsVUXPWwel + 1;
                };
            }
            for (k = (322 - 322); k < n; k = k + 1)
                a[i][k] = a[i][k] - min;
            i = i + 1;
            min = 10000;
        };
    }
    min = 10000;
    {
        i = 170 - 170;
        while (i < n) {
            {
                lsVUXPWwel = 251 - 251;
                while (lsVUXPWwel < n) {
                    if (min > a[lsVUXPWwel][i])
                        min = a[lsVUXPWwel][i];
                    lsVUXPWwel = lsVUXPWwel + 1;
                };
            }
            {
                k = 61 - 61;
                while (k < n) {
                    a[k][i] = a[k][i] - min;
                    k = k + 1;
                };
            }
            i = i + 1;
            min = 10000;
        };
    }
    HnCxZw = HnCxZw +a[(227 - 226)][(197 - 196)];
}

int main () {
    int n;
    int i;
    int lsVUXPWwel;
    int k;
    int r7qhJNKvGy;
    cin >> n;
    {
        i = 614 - 613;
        while (i <= n) {
            i = i + 1;
            for (lsVUXPWwel = 0; lsVUXPWwel < n; lsVUXPWwel = lsVUXPWwel + 1) {
                k = 0;
                while (k < n) {
                    cin >> a[lsVUXPWwel][k];
                    k = k + 1;
                };
            }
            {
                r7qhJNKvGy = 453 - 452;
                while (r7qhJNKvGy < n) {
                    nGeoBDQCXP (n - r7qhJNKvGy + (439 - 438));
                    {
                        lsVUXPWwel = 1;
                        while (lsVUXPWwel < n - r7qhJNKvGy) {
                            {
                                k = 1;
                                while (k < n - r7qhJNKvGy) {
                                    a[lsVUXPWwel][k] = a[lsVUXPWwel + 1][k + 1];
                                    k = k + 1;
                                };
                            }
                            lsVUXPWwel++;
                        };
                    }
                    {
                        k = 1;
                        while (k < (n - r7qhJNKvGy)) {
                            a[0][k] = a[0][k + 1];
                            k = k + 1;
                        };
                    }
                    {
                        k = 1;
                        while (k < (n - r7qhJNKvGy)) {
                            a[k][0] = a[k + 1][0];
                            k = k + 1;
                        };
                    }
                    r7qhJNKvGy = r7qhJNKvGy + 1;
                };
            }
            cout << HnCxZw << endl;
            HnCxZw = 0;
        };
    }
    return 0;
}

