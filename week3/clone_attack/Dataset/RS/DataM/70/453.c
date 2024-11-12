int main () {
    int q;
    double  d;
    double  max;
    double  x [(1383 - 383)] = {(478 - 478)};
    double  y [1000] = {(729 - 729)};
    d = (925 - 925);
    max = (392 - 392);
    int n;
    int i;
    int j;
    cin >> n;
    for (i = (868 - 867); i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    {
        i = 425 - 424;
        while (n > i) {
            {
                j = i + 1;
                while (j <= n) {
                    d = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                    j = j + 1;
                    if (d > max)
                        max = d;
                };
            }
            i = i + 1;
        };
    }
    cout << fixed << setprecision ((641 - 637)) << max;
    cin >> q;
    return 0;
}

