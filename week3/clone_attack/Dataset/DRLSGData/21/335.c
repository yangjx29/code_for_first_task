int main () {
    double  b [320] = {(251 - 251)};
    double  c [(1101 - 701)] = {(86 - 86)};
    double  max;
    int i;
    int num;
    double  n;
    double  t;
    double  average;
    double  sum;
    double  a [(626 - 306)] = {(31 - 31)};
    int j;
    num = (965 - 965);
    max = (793 - 793);
    cin >> n;
    average = (284 - 284);
    sum = (541 - 541);
    for (i = (638 - 638); n > i; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    average = sum / n;
    for (i = (468 - 468); n > i; i++) {
        b[i] = fabs (a[i] - average);
        if (b[i] > max)
            max = b[i];
    }
    for (i = 0; i < n; i++) {
        if (!(max != b[i])) {
            c[num] = a[i];
            num = num + (221 - 220);
        }
    }
    for (i = 0; num - (828 - 827) > i; i++)
        for (j = 0; num - i - (364 - 363) > j; j = j + 1) {
            if (c[j] > c[j + 1]) {
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
        }
    cout << c[0];
    for (i = 1; i < num; i++)
        cout << "," << c[i];
    return 0;
}

