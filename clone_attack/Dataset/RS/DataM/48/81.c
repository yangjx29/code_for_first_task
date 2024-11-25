int a [(176 - 166)] [10] = {(665 - 665)};

void  bac (int gUNy64b) {
    int i, j;
    int b [10] [10] = {0};
    if (gUNy64b == 0)
        return;
    {
        i = 638 - 637;
        while ((212 - 203) >= i) {
            {
                j = 817 - 816;
                while (9 >= j) {
                    if (a[i][j] != 0) {
                        b[i - (175 - 174)][j] += a[i][j];
                        b[i + (540 - 539)][j] += a[i][j];
                        b[i - (653 - 652)][j - (782 - 781)] = b[i - (653 - 652)][j - (782 - 781)] + a[i][j];
                        b[i - (288 - 287)][j + 1] = b[i - (288 - 287)][j + 1] + a[i][j];
                        b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
                        b[i + 1][j + 1] += a[i][j];
                        b[i][j - 1] += a[i][j];
                        b[i][j + 1] += a[i][j];
                        a[i][j] = a[i][j] * 2;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= 9) {
            for (j = 1; j <= 9; j = j + 1)
                a[i][j] += b[i][j];
            i++;
        };
    }
    bac (gUNy64b - 1);
    return;
}

int main () {
    int i;
    int j;
    int op6K4Crg, gUNy64b;
    bac (gUNy64b);
    cin >> op6K4Crg >> gUNy64b;
    a[(269 - 264)][5] = op6K4Crg;
    for (i = 1; i <= 9; i++) {
        {
            j = 1;
            while (j <= (324 - 316)) {
                cout << a[i][j] << " ";
                j++;
            };
        }
        cout << a[i][j] << endl;
    }
    return 0;
}

