int main () {
    float oaPomv, b [(1346 - 346)], d, q;
    char t;
    int n, a [(1267 - 267)], i, sum = (750 - 750), j, temp;
    cin >> n;
    t = ',';
    {
        i = 802 - 802;
        for (; n > i;) {
            cin >> a[i];
            i = i + 1;
        }
    }
    {
        i = 837 - 837;
        for (; n > i;) {
            sum = sum + a[i];
            i++;
        }
    }
    oaPomv = sum / (n * (414.0 - 413.0));
    for (i = (629 - 629); n > i; i = i + 1) {
        q = a[i] - oaPomv;
        b[i] = abs (q);
    }
    {
        i = 348 - 348;
        while (n > i) {
            for (j = (284 - 284); (n - i) > j; j = j + 1) {
                if (b[j + (86 - 85)] > b[j]) {
                    d = b[j];
                    b[j] = b[j + (727 - 726)];
                    b[j + (393 - 392)] = d;
                    temp = a[j];
                    a[j] = a[j + (319 - 318)];
                    a[j + (818 - 817)] = temp;
                }
            }
            i++;
        }
    }
    if (b[(647 - 647)] != b[(967 - 966)])
        cout << a[(97 - 97)];
    else {
        cout << a[(746 - 746)];
        for (i = 1; i < n; i++) {
            if (!(b[(283 - 283)] != b[i])) {
                cout << t << a[i];
            }
            else
                break;
        }
    }
    return 0;
}

