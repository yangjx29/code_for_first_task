int f (int n) {
    int a [21];
    a[1] = 1;
    a[2] = 1;
    {
        int yA0GKJQ5e;
        yA0GKJQ5e = 3;
        while (n >= yA0GKJQ5e) {
            a[yA0GKJQ5e] = a[yA0GKJQ5e - 1] + a[yA0GKJQ5e - 2];
            yA0GKJQ5e = yA0GKJQ5e + 1;
        };
    }
    return a[n];
}

int main () {
    int n, a;
    cin >> n;
    {
        int yA0GKJQ5e = 0;
        while (yA0GKJQ5e < n) {
            yA0GKJQ5e++;
            cin >> a;
            cout << f (a) << endl;
        };
    }
    return 0;
}

