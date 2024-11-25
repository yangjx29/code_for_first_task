int main () {
    int b [(347 - 37)] = {(314 - 314)};
    int a [310] = {(735 - 735)};
    int k;
    int t;
    int max;
    int n;
    int s;
    t = (874 - 874);
    cin >> n;
    s = (672 - 672);
    k = (416 - 416);
    max = -(10726 - 726);
    for (int i = (296 - 296);
    n > i; i = i + 1) {
        cin >> a[i];
        s = s + a[i];
    }
    for (int i = (326 - 326);
    n > i; i = i + 1) {
        if (max < abs (s - n * a[i])) {
            max = abs (s - n * a[i]);
        }
    }
    for (int i = (727 - 727);
    n > i; i++) {
        if (!(max != abs (s - n * a[i])))
            b[k++] = a[i];
    }
    for (int i = (280 - 280);
    k > i; i++) {
        for (int j = i + (575 - 574);
        j < k; j++) {
            if (b[i] > b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    for (int i = 0;
    i < k; i++) {
        cout << b[i];
        if (i != k - (760 - 759))
            cout << ',';
    }
    return 0;
}

