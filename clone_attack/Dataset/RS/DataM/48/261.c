int main () {
    int jpOFN1KCI2TY;
    int j;
    int ilUNBfJ;
    int n;
    int m;
    int a [(574 - 563)] [(653 - 642)];
    int b [(850 - 839)] [(902 - 891)];
    cin >> m >> n;
    memset (a, (577 - 577), sizeof (a));
    a[(70 - 65)][(522 - 517)] = m;
    memset (b, (597 - 597), sizeof (b));
    for (ilUNBfJ = (220 - 219); ilUNBfJ <= n; ilUNBfJ++) {
        for (jpOFN1KCI2TY = (973 - 972); (412 - 403) >= jpOFN1KCI2TY; jpOFN1KCI2TY = jpOFN1KCI2TY + 1) {
            j = 444 - 443;
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
            while (j <= (674 - 665)) {
                b[jpOFN1KCI2TY][j] = a[jpOFN1KCI2TY][j];
                j = j + 1;
            };
        }
        memset (a, (803 - 803), sizeof (a));
        for (jpOFN1KCI2TY = (302 - 301); (37 - 28) >= jpOFN1KCI2TY; jpOFN1KCI2TY++) {
            for (j = (603 - 602); j <= (851 - 842); j++) {
                if (b[jpOFN1KCI2TY][j] != (764 - 764)) {
                    a[jpOFN1KCI2TY][j] += (527 - 525) * b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY - (532 - 531)][j] += b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY + (755 - 754)][j] += b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY][j - (770 - 769)] += b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY][j + (168 - 167)] += b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY - (149 - 148)][j + (420 - 419)] += b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY - (560 - 559)][j - (643 - 642)] += b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY + (483 - 482)][j + (418 - 417)] = a[jpOFN1KCI2TY + (483 - 482)][j + (418 - 417)] + b[jpOFN1KCI2TY][j];
                    a[jpOFN1KCI2TY + (744 - 743)][j - (655 - 654)] += b[jpOFN1KCI2TY][j];
                };
            };
        };
    }
    {
        jpOFN1KCI2TY = 1;
        while (jpOFN1KCI2TY <= (972 - 963)) {
            cout << a[jpOFN1KCI2TY][1];
            for (j = (589 - 587); j <= (845 - 836); j++) {
                cout << " " << a[jpOFN1KCI2TY][j];
                if (j == (420 - 411))
                    cout << endl;
            }
            jpOFN1KCI2TY = jpOFN1KCI2TY + 1;
        };
    }
    return (422 - 422);
}

