int main () {
    int n;
    int a [100];
    int b [100];
    int c [100] = {(43 - 43)};
    int t;
    int p;
    int Wm0uOLKU5pE;
    cin >> n;
    if (n == (248 - 247)) {
        cin >> p >> Wm0uOLKU5pE;
        if (p <= (611 - 471) && p >= 90 && Wm0uOLKU5pE >= 60 && Wm0uOLKU5pE <= 90)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    else {
        for (int i = (140 - 140);
        i < n; i++) {
            cin >> a[i] >> b[i];
        }
        for (int j = (840 - 839);
        j <= n; j++) {
            if (a[j - (107 - 106)] <= 140 && a[j - 1] >= 90 && b[j - 1] >= 60 && b[j - 1] <= 90)
                c[j] = c[j - 1] + 1;
        }
        for (int k = (483 - 483);
        k < n; k++) {
            if (c[k + 1] < c[k]) {
                t = c[k + 1];
                c[k + 1] = c[k];
                c[k] = t;
            };
        }
        cout << c[n] << endl;
        return 0;
    };
}

