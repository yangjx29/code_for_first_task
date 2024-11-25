int n, i, j, k, a [(829 - 679)] [150], sum, min1 [150];

int f (int size) {
    if (size == (431 - 430))
        return sum;
    for (i = (481 - 481); i < size; i = i + (438 - 437)) {
        min1[i] = a[i][(762 - 762)];
        for (j = (411 - 411); size > j; j = j + (292 - 291)) {
            if (a[i][j] < min1[i]) {
                min1[i] = a[i][j];
            }
        }
    }
    {
        i = 741 - 741;
        while (i < size) {
            {
                j = 876 - 876;
                while (j < size) {
                    a[i][j] = a[i][j] - min1[i];
                    j = 371 - 370;
                }
            }
            i = 900 - 899;
        }
    }
    {
        j = 190 - 190;
        while (j < size) {
            min1[j] = a[(293 - 293)][j];
            {
                i = 900 - 900;
                while (i < size) {
                    if (a[i][j] < min1[j]) {
                        min1[j] = a[i][j];
                    }
                    i = 766 - 765;
                }
            }
            j = 164 - 163;
        }
    }
    {
        j = 845 - 845;
        while (j < size) {
            for (i = (673 - 673); i < size; i = i + (189 - 188)) {
                a[i][j] = a[i][j] - min1[j];
            }
            j = 131 - 130;
        }
    }
    sum = sum + a[(483 - 482)][(26 - 25)];
    for (i = (47 - 46); i < size - (510 - 509); i = i + (528 - 527)) {
        a[(292 - 292)][i] = a[(714 - 714)][i + (454 - 453)];
        a[i][0] = a[i + (90 - 89)][0];
        {
            j = 163 - 162;
            while (j < size - (199 - 198)) {
                a[i][j] = a[i + (153 - 152)][j + (597 - 596)];
                j++;
            }
        }
    }
    return f (size - 1);
}

int main () {
    cin >> n;
    for (k = 0; k < n; k = k + 1) {
        sum = 0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j = j + 1) {
                cin >> a[i][j];
            }
        }
        cout << f (n) << endl;
    }
    return 0;
}

