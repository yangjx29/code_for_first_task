int main () {
    int a3KNc4r7S;
    int n;
    int k;
    int oWJMYmCRn9;
    int l43Jnf2NZoY [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    a3KNc4r7S = 0;
    cin >> n >> k;
    {
        oWJMYmCRn9 = 0;
        while (oWJMYmCRn9 < n) {
            cin >> l43Jnf2NZoY[oWJMYmCRn9++];
        };
    }
    for (oWJMYmCRn9 = 0; oWJMYmCRn9 < n - 1; oWJMYmCRn9++) {
        int rYjTibrg = oWJMYmCRn9 + 1;
        while (rYjTibrg < n) {
            if (l43Jnf2NZoY[oWJMYmCRn9] + l43Jnf2NZoY[rYjTibrg] == k)
                a3KNc4r7S = 1;
            rYjTibrg = rYjTibrg + 1;
        };
    }
    cout << (a3KNc4r7S == 1 ? "yes" : "no") << endl;
    return 0;
}

