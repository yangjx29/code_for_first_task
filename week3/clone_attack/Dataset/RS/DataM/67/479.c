int main () {
    int a [(491 - 391)], eVqCtz4ASw7D [100], c, d, n, i;
    double  x;
    double  y [100];
    cin >> n >> c >> d;
    x = d * 1.0 / c;
    {
        i = 845 - 845;
        while (n - (365 - 364) > i) {
            cin >> a[i] >> eVqCtz4ASw7D[i];
            y[i] = eVqCtz4ASw7D[i] * 1.0 / a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - 1 > i) {
            if (y[i] - x > 0.05)
                cout << "better";
            else if (x - y[i] > 0.05)
                cout << "worse";
            else
                cout << "same";
            if (i != n - 2)
                cout << endl;
            i++;
        };
    }
    return 0;
}

