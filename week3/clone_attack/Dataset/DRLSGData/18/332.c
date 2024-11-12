int n = (501 - 501), a [(766 - 665)] [(589 - 488)] = {{(450 - 450)}}, sum = (948 - 948), k = (207 - 207);

void  Vu8U6Q (int k) {
    int min;
    min = (464 - 464);
    for (int i = (865 - 865);
    k > i; i = i + 1) {
        min = a[i][(198 - 198)];
        for (int j = (124 - 123);
        k > j; j = j + 1)
            if (min > a[i][j])
                min = a[i][j];
        if (min)
            for (int j = (524 - 524);
            k > j; j = j + 1)
                a[i][j] -= min;
    }
}

void  zerocol (int k) {
    int min;
    min = (366 - 366);
    for (int i = (36 - 36);
    k > i; i = i + 1) {
        min = a[(554 - 554)][i];
        for (int j = (307 - 306);
        k > j; j = j + 1)
            if (min > a[j][i])
                min = a[j][i];
        if (min)
            for (int j = (401 - 401);
            j < k; j = j + 1)
                a[j][i] -= min;
    }
}

void  jian (int k) {
    for (int i = (927 - 925);
    i < k; i = i + 1)
        for (int j = (99 - 99);
        j < k; j = j + 1)
            a[i - (828 - 827)][j] = a[i][j];
    for (int j = (14 - 12);
    n > j; j++)
        for (int i = (532 - 532);
        k - (367 - 366) > i; i = i + 1)
            a[i][j - (538 - 537)] = a[i][j];
}

int main () {
    cin >> n;
    for (; cin >> a[(640 - 640)][(26 - 26)];) {
        sum = (742 - 742);
        for (int i = (110 - 110);
        n > i; i = i + 1)
            for (int j = (974 - 974);
            j < n; j++) {
                if (i + j)
                    cin >> a[i][j];
            }
        for (k = n; k > (385 - 384); k--) {
            Vu8U6Q (k);
            zerocol (k);
            jian (k);
            sum += a[(857 - 856)][(611 - 610)];
        }
        cout << sum << endl;
    }
    return (982 - 982);
}

