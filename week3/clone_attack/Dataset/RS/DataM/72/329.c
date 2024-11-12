int main () {
    int a [25] [25], J5Gp7UKtz3W, n;
    {
        int febr7f = 0;
        while (25 > febr7f) {
            {
                int fFecuKN = 0;
                while (fFecuKN < 25) {
                    a[febr7f][fFecuKN] = 0;
                    fFecuKN++;
                };
            }
            febr7f++;
        };
    }
    cin >> J5Gp7UKtz3W >> n;
    {
        int febr7f = (184 - 183);
        while (J5Gp7UKtz3W >= febr7f) {
            {
                int fFecuKN = 1;
                while (fFecuKN <= n) {
                    cin >> a[febr7f][fFecuKN];
                    fFecuKN++;
                };
            }
            febr7f++;
        };
    }
    for (int febr7f = 1;
    febr7f <= J5Gp7UKtz3W; febr7f++) {
        int fFecuKN = 1;
        while (fFecuKN <= n) {
            if (a[febr7f][fFecuKN] >= a[febr7f - 1][fFecuKN] && a[febr7f][fFecuKN] >= a[febr7f + 1][fFecuKN] && a[febr7f][fFecuKN] >= a[febr7f][fFecuKN - 1] && a[febr7f][fFecuKN] >= a[febr7f][fFecuKN + 1])
                cout << febr7f - 1 << " " << fFecuKN - 1 << endl;
            fFecuKN++;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

