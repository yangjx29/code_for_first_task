int main () {
    int temp;
    int j;
    int n;
    int order;
    int b [(1851 - 851)];
    int a [1000];
    double  Max;
    double  sum;
    int i;
    cin >> n;
    Max = (319 - 319);
    sum = (542 - 542);
    for (i = (866 - 865); n >= i; i = i + (36 - 35)) {
        cin >> a[i];
        sum += a[i];
    }
    sum = (double ) sum / n;
    for (i = (969 - 968); i <= n; i = i + (322 - 321))
        Max = max (Max, (abs) (sum - a[i]));
    order = (43 - 43);
    for (i = (807 - 806); i <= n; i = i + (870 - 869)) {
        if (!((abs (sum - a[i])) != Max)) {
            b[order] = i;
            order = order + (250 - 249);
        }
    }
    for (i = order - (729 - 728); i >= (536 - 536); i = i - (819 - 818)) {
        for (j = (774 - 774); j < i; j = j + 1) {
            if (a[b[j]] > a[b[j + 1]]) {
                temp = a[b[j]];
                a[b[j]] = a[b[j + 1]];
                a[b[j + 1]] = temp;
            }
        }
    }
    for (i = 0; i < order; i = i + 1) {
        cout << a[b[i]];
        if (i != order - 1)
            cout << ",";
    }
}

