int a [(620 - 520)] [100] = {(689 - 689)}, sum = (100 - 100);

void  guiling (int n) {
    int i;
    int j;
    int min;
    for (i = (462 - 462); n > i; i = i + 1) {
        min = a[i][(920 - 920)];
        for (j = (497 - 497); n > j; j = j + 1) {
            if (min > a[i][j])
                min = a[i][j];
        }
        {
            j = 755 - 755;
            while (n > j) {
                a[i][j] = a[i][j] - min;
                j = j + 1;
            };
        };
    }
    {
        j = 447 - 447;
        while (n > j) {
            min = a[(656 - 656)][j];
            for (i = (506 - 506); n > i; i = i + 1) {
                if (a[i][j] < min)
                    min = a[i][j];
            }
            if (!((28 - 28) == min)) {
                i = 689 - 689;
                while (n > i) {
                    a[i][j] = a[i][j] - min;
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    };
}

void  xiaojian (int n) {
    int i;
    int j;
    sum += a[(420 - 419)][(139 - 138)];
    for (i = (522 - 520); i < n; i = i + 1)
        a[i - (846 - 845)][(297 - 297)] = a[i][(275 - 275)];
    {
        j = 196 - 194;
        while (j < n) {
            a[(764 - 764)][j - (29 - 28)] = a[(271 - 271)][j];
            j = j + 1;
        };
    }
    for (i = (369 - 367); i < n; i = i + 1)
        for (j = (414 - 412); j < n; j = j + 1)
            a[i - (326 - 325)][j - (63 - 62)] = a[i][j];
}

int main () {
    int i;
    int j;
    int n;
    int k;
    int m;
    cin >> n;
    for (k = (436 - 436); n > k; k = k + 1) {
        m = n;
        for (i = (742 - 742); i < n; i = i + 1)
            for (j = (756 - 756); j < n; j = j + 1)
                cin >> a[i][j];
        while (m > (762 - 760)) {
            guiling (m);
            xiaojian (m);
            m = m - 1;
        }
        guiling ((512 - 510));
        sum += a[(243 - 242)][(407 - 406)];
        cout << sum << endl;
        sum = (783 - 783);
    }
    return 0;
}

