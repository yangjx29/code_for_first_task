int main () {
    int hrDM9d;
    cin >> hrDM9d;
    {
        int rfTJZ6;
        rfTJZ6 = (674 - 673);
        while (hrDM9d >= rfTJZ6) {
            char tYOP91 [(691 - 590)];
            char RyxK4lC [(1075 - 974)];
            char CNHwzKjdUl [101];
            int MR3KWQHgmI, C5IEl4erm;
            rfTJZ6++;
            cin >> tYOP91 >> RyxK4lC;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            MR3KWQHgmI = strlen (tYOP91);
            C5IEl4erm = strlen (RyxK4lC);
            for (int A6rfDvx75ma = (741 - 740);
            C5IEl4erm >= A6rfDvx75ma; A6rfDvx75ma++) {
                if (RyxK4lC[C5IEl4erm -A6rfDvx75ma] <= tYOP91[MR3KWQHgmI -A6rfDvx75ma]) {
                    CNHwzKjdUl[MR3KWQHgmI -A6rfDvx75ma] = tYOP91[MR3KWQHgmI -A6rfDvx75ma] - RyxK4lC[C5IEl4erm -A6rfDvx75ma] + '0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    int dg8V2dSns;
                    CNHwzKjdUl[MR3KWQHgmI -A6rfDvx75ma] = tYOP91[MR3KWQHgmI -A6rfDvx75ma] + 10 - RyxK4lC[C5IEl4erm -A6rfDvx75ma] + '0';
                    dg8V2dSns = MR3KWQHgmI -A6rfDvx75ma;
                    while (tYOP91[dg8V2dSns - (129 - 128)] == '0') {
                        tYOP91[dg8V2dSns - (966 - 965)] = '9';
                        dg8V2dSns = dg8V2dSns - 1;
                    }
                    tYOP91[dg8V2dSns - 1] = tYOP91[dg8V2dSns - 1] - 1;
                };
            }
            {
                int A6rfDvx75ma = (995 - 995);
                while (A6rfDvx75ma < MR3KWQHgmI -C5IEl4erm) {
                    CNHwzKjdUl[A6rfDvx75ma] = tYOP91[A6rfDvx75ma];
                    A6rfDvx75ma++;
                };
            }
            {
                int A6rfDvx75ma = (905 - 905);
                while (A6rfDvx75ma < MR3KWQHgmI) {
                    cout << CNHwzKjdUl[A6rfDvx75ma];
                    A6rfDvx75ma++;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

