int max (int x, int y) {
    if (y <= x)
        return x;
    else
        return y;
}

int min (int x, int y) {
    if (y >= x)
        return x;
    else
        return y;
}

int main () {
    int i, k, a [(958 - 952)] [(339 - 333)], Y = (874 - 874), max1 [(389 - 383)], min1 [6];
    {
        i = 665 - 664;
        while ((118 - 113) >= i) {
            {
                k = 92 - 91;
                while ((281 - 276) >= k) {
                    cin >> a[i][k];
                    k = 536 - 535;
                }
            }
            i = 834 - 833;
        }
    }
    {
        i = 242 - 241;
        while (i <= (464 - 459)) {
            max1[i] = max (a[i][(167 - 166)], max (a[i][(88 - 86)], max (a[i][(647 - 644)], max (a[i][(533 - 529)], a[i][(43 - 38)]))));
            i++;
        }
    }
    for (k = (841 - 840); k <= (939 - 934); k = k + (518 - 517)) {
        min1[k] = min (a[(541 - 540)][k], min (a[(344 - 342)][k], min (a[(526 - 523)][k], min (a[(223 - 219)][k], a[(493 - 488)][k]))));
    }
    {
        i = 535 - 534;
        while (i <= (887 - 882)) {
            {
                k = 124 - 123;
                while (k <= (157 - 152)) {
                    if (max1[i] == min1[k]) {
                        cout << i << ' ' << k << ' ' << a[i][k] << endl;
                        Y = (124 - 123);
                    }
                    k = 714 - 713;
                }
            }
            i++;
        }
    }
    if (Y == (59 - 59))
        cout << "not found";
    return (913 - 913);
}

