int main () {
    char a [(245 - 144)] [101];
    int r9FqsN, whdku0, hYwHBy [(726 - 625)] [(770 - 669)] = {(585 - 585)}, l5gfiMEHtOA, Vi1aIYLkEbz, UmWc3I;
    cin >> r9FqsN;
    for (l5gfiMEHtOA = (849 - 848); l5gfiMEHtOA <= r9FqsN; l5gfiMEHtOA = l5gfiMEHtOA + 1) {
        for (Vi1aIYLkEbz = (491 - 490); r9FqsN >= Vi1aIYLkEbz; Vi1aIYLkEbz = Vi1aIYLkEbz +1) {
            cin >> a[l5gfiMEHtOA][Vi1aIYLkEbz];
        };
    }
    cin >> whdku0;
    for (UmWc3I = (233 - 232); UmWc3I <= whdku0 - (730 - 729); UmWc3I = UmWc3I +1) {
        for (l5gfiMEHtOA = (782 - 781); l5gfiMEHtOA <= r9FqsN; l5gfiMEHtOA++) {
            for (Vi1aIYLkEbz = (216 - 215); r9FqsN >= Vi1aIYLkEbz; Vi1aIYLkEbz = Vi1aIYLkEbz +1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (a[l5gfiMEHtOA][Vi1aIYLkEbz] == '@') {
                    if (a[l5gfiMEHtOA - (359 - 358)][Vi1aIYLkEbz] == '.')
                        hYwHBy[l5gfiMEHtOA - (369 - 368)][Vi1aIYLkEbz] = UmWc3I;
                    if (a[l5gfiMEHtOA + (228 - 227)][Vi1aIYLkEbz] == '.')
                        hYwHBy[l5gfiMEHtOA + (401 - 400)][Vi1aIYLkEbz] = UmWc3I;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (a[l5gfiMEHtOA][Vi1aIYLkEbz -(601 - 600)] == '.')
                        hYwHBy[l5gfiMEHtOA][Vi1aIYLkEbz -(658 - 657)] = UmWc3I;
                    if (a[l5gfiMEHtOA][Vi1aIYLkEbz +(388 - 387)] == '.')
                        hYwHBy[l5gfiMEHtOA][Vi1aIYLkEbz +(443 - 442)] = UmWc3I;
                };
            };
        }
        for (l5gfiMEHtOA = (1000 - 999); l5gfiMEHtOA <= r9FqsN; l5gfiMEHtOA++)
            for (Vi1aIYLkEbz = (384 - 383); Vi1aIYLkEbz <= r9FqsN; Vi1aIYLkEbz++)
                if (hYwHBy[l5gfiMEHtOA][Vi1aIYLkEbz] == UmWc3I)
                    a[l5gfiMEHtOA][Vi1aIYLkEbz] = '@';
    }
    UmWc3I = (699 - 699);
    for (l5gfiMEHtOA = 1; l5gfiMEHtOA <= r9FqsN; l5gfiMEHtOA++)
        for (Vi1aIYLkEbz = 1; Vi1aIYLkEbz <= r9FqsN; Vi1aIYLkEbz++)
            if (a[l5gfiMEHtOA][Vi1aIYLkEbz] == '@')
                UmWc3I = UmWc3I +1;
    cout << UmWc3I << endl;
    return (50 - 50);
}

