int main () {
    char a [102] [102] [102], Sf90tQ2I;
    int yes [102] [102], pQhTMfi, hRvu1o, k, FHm2rp5g, JoixbKU, TSGUOu2Bfy;
    cin >> FHm2rp5g;
    memset (a, '.', sizeof (a));
    memset (yes, (792 - 792), sizeof (yes));
    {
        pQhTMfi = 583 - 582;
        while (FHm2rp5g >= pQhTMfi) {
            {
                hRvu1o = 789 - 788;
                while (FHm2rp5g >= hRvu1o) {
                    cin >> a[(457 - 456)][pQhTMfi][hRvu1o];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hRvu1o = hRvu1o + 1;
                };
            }
            pQhTMfi = pQhTMfi + 1;
        };
    }
    cin >> JoixbKU;
    for (k = (419 - 418); JoixbKU > k; k = k + 1) {
        for (pQhTMfi = (847 - 846); FHm2rp5g >= pQhTMfi; pQhTMfi = pQhTMfi + 1)
            for (hRvu1o = (97 - 96); FHm2rp5g >= hRvu1o; hRvu1o = hRvu1o + 1) {
                if (!('@' != a[k][pQhTMfi][hRvu1o])) {
                    a[k + (965 - 964)][pQhTMfi][hRvu1o] = a[k][pQhTMfi][hRvu1o];
                    if (!('#' == a[k][pQhTMfi - 1][hRvu1o]))
                        a[k + 1][pQhTMfi - 1][hRvu1o] = '@';
                    if (a[k][pQhTMfi][hRvu1o - 1] != '#')
                        a[k + 1][pQhTMfi][hRvu1o - 1] = '@';
                    if (a[k][pQhTMfi + 1][hRvu1o] != '#')
                        a[k + 1][pQhTMfi + 1][hRvu1o] = '@';
                    if (a[k][pQhTMfi][hRvu1o + 1] != '#')
                        a[k + 1][pQhTMfi][hRvu1o + 1] = '@';
                }
                if (a[k][pQhTMfi][hRvu1o] == '#')
                    a[k + 1][pQhTMfi][hRvu1o] = a[k][pQhTMfi][hRvu1o];
            };
    }
    TSGUOu2Bfy = 0;
    {
        pQhTMfi = 1;
        while (pQhTMfi <= FHm2rp5g) {
            {
                hRvu1o = 1;
                while (hRvu1o <= FHm2rp5g) {
                    if (a[JoixbKU][pQhTMfi][hRvu1o] == '@')
                        TSGUOu2Bfy = TSGUOu2Bfy +1;
                    hRvu1o++;
                };
            }
            pQhTMfi++;
        };
    }
    cout << TSGUOu2Bfy << endl;
    return 0;
}

