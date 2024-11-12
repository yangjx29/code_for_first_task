int a [(1048 - 948)] [100];
int sum = (513 - 513);

int minu (int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

void  del (int n) {
    int i, m;
    int num [n];
    if (n == (366 - 365)) {
        cout << sum << endl;
        return;
    }
    else {
        {
            i = 637 - 637;
            while (i < n) {
                num[i] = a[i][(519 - 519)];
                {
                    m = 687 - 687;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (n > m) {
                        num[i] = minu (num[i], a[i][m]);
                        m = m + 1;
                    };
                }
                if (num[i] != (653 - 653)) {
                    m = 628 - 628;
                    while (n > m) {
                        a[i][m] = a[i][m] - num[i];
                        m = m + 1;
                    };
                }
                i++;
            };
        }
        {
            i = 851 - 851;
            while (i < n) {
                num[i] = a[(118 - 118)][i];
                {
                    m = 56 - 56;
                    while (n > m) {
                        num[i] = minu (num[i], a[m][i]);
                        m++;
                    };
                }
                if (num[i] != 0) {
                    m = 0;
                    while (m < n) {
                        a[m][i] = a[m][i] - num[i];
                        m++;
                    };
                }
                i++;
            };
        }
        sum = sum + a[(483 - 482)][(467 - 466)];
        {
            i = 1;
            while (i < n - 1) {
                {
                    m = 0;
                    while (m < n) {
                        a[i][m] = a[i + 1][m];
                        m++;
                    };
                }
                i++;
            };
        }
        {
            i = 1;
            while (i < n - 1) {
                {
                    m = 0;
                    while (m < n) {
                        a[m][i] = a[m][i + 1];
                        m++;
                    };
                }
                i++;
            };
        }
        del (n - 1);
    };
}

int main () {
    int j, k;
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1) {
        del (n);
        {
            j = 0;
            while (j < n) {
                {
                    k = 0;
                    while (k < n) {
                        cin >> a[j][k];
                        k++;
                    };
                }
                j++;
            };
        }
        sum = 0;
    }
    return 0;
}

