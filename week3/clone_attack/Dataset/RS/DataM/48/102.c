int main () {
    int i;
    int j;
    int k;
    int num [(33 - 23)] [(20 - 10)];
    int C2nXKUurf [(732 - 722)] [(450 - 440)];
    int m;
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
    int n;
    cin >> m;
    {
        i = 307 - 307;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (107 - 97)) {
            for (j = (452 - 452); j < (784 - 774); j = j + 1) {
                num[i][j] = (752 - 752);
                C2nXKUurf[i][j] = (899 - 899);
            }
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
            i++;
        };
    }
    num[(980 - 975)][5] = m;
    cin >> n;
    for (i = (520 - 520); i < n; i = i + 1) {
        for (j = (505 - 504); j < (267 - 258); j = j + 1) {
            k = 920 - 919;
            while (k < (91 - 82)) {
                if (num[j][k] != (913 - 913)) {
                    C2nXKUurf[j][k] += num[j][k] * (143 - 141);
                    C2nXKUurf[j - (105 - 104)][k] = C2nXKUurf[j - (105 - 104)][k] + num[j][k];
                    C2nXKUurf[j + (970 - 969)][k] += num[j][k];
                    C2nXKUurf[j][k - (96 - 95)] = C2nXKUurf[j][k - (96 - 95)] + num[j][k];
                    C2nXKUurf[j][k + (714 - 713)] = C2nXKUurf[j][k + (714 - 713)] + num[j][k];
                    C2nXKUurf[j - (760 - 759)][k - (67 - 66)] += num[j][k];
                    C2nXKUurf[j - (35 - 34)][k + 1] = C2nXKUurf[j - (35 - 34)][k + 1] + num[j][k];
                    C2nXKUurf[j + 1][k + 1] += num[j][k];
                    C2nXKUurf[j + 1][k - 1] += num[j][k];
                }
                k++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 0;
            while (j < 10) {
                {
                    k = 0;
                    while (10 > k) {
                        num[j][k] = C2nXKUurf[j][k];
                        C2nXKUurf[j][k] = 0;
                        k++;
                    };
                }
                j = j + 1;
            };
        };
    }
    for (i = 1; i < 10; i++) {
        {
            j = 1;
            while (j < 9) {
                cout << num[i][j] << " ";
                j++;
            };
        }
        cout << num[i][j] << endl;
    }
    return 0;
}

