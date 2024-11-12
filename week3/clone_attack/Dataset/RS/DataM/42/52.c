int main () {
    int m;
    int t;
    int xD9lUQjea1b;
    m = 0;
    t = 0;
    int a [xD9lUQjea1b];
    cin >> xD9lUQjea1b;
    for (int i = 0;
    xD9lUQjea1b > i; i = i + 1)
        cin >> a[i];
    cin >> m;
    for (int i = 0;
    xD9lUQjea1b > i + t; i++) {
        a[i] = a[i + t];
        if (!(m != a[i + t])) {
            t = t + 1;
            a[i] = a[i + t];
            i--;
        };
    }
    for (int i = xD9lUQjea1b - t;
    xD9lUQjea1b > i; i++) {
        if (!(0 != m))
            a[i] = (50 - 49);
        else
            a[i] = 0;
    }
    {
        int i = 0;
        while (i + t < xD9lUQjea1b) {
            if (i == 0)
                cout << a[i];
            else
                cout << " " << a[i];
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

