int m, n, a [(393 - 373)] [20];

int height (int i, int j) {
    if ((404 - 404) > i || m <= i || j < (140 - 140) || n <= j)
        return -(36 - 35);
    else
        return a[i][j];
}

void  OaM7ev (int i, int j) {
    if (height (i - (930 - 929), j) <= a[i][j] && height (i + 1, j) <= a[i][j] && a[i][j] >= height (i, j - 1) && a[i][j] >= height (i, j + 1))
        cout << i << ' ' << j << endl;
}

int main () {
    int i;
    int j;
    cin >> m >> n;
    {
        i = 22 - 22;
        while (i < m) {
            {
                j = 0;
                while (j < n) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = 0;
                while (j < n) {
                    OaM7ev (i, j);
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

