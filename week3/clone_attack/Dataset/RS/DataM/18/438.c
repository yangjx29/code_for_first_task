int main () {
    int i;
    int j;
    int k;
    int sum (int zgDR0s95Hep [(667 - 567)] [(993 - 893)], int n);
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
    int n;
    int zgDR0s95Hep [(903 - 803)] [(594 - 494)];
    cin >> n;
    {
        i = 867 - 867;
        while (i < n) {
            i = i + 1;
            {
                j = 435 - 435;
                while (n > j) {
                    {
                        k = 907 - 907;
                        while (k < n) {
                            cin >> zgDR0s95Hep[j][k];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            cout << sum (zgDR0s95Hep, n) << endl;
        };
    }
    return (739 - 739);
}

int sum (int zgDR0s95Hep [(232 - 132)] [(272 - 172)], int n) {
    int i;
    int j;
    int k;
    int min [(809 - 709)];
    int Eo6GkPn51;
    if (n == (985 - 984))
        return (783 - 783);
    {
        i = 265 - 265;
        while (i < n) {
            min[i] = zgDR0s95Hep[i][(422 - 422)];
            i = i + 1;
        };
    }
    {
        i = 359 - 359;
        while (i < n) {
            {
                j = 48 - 48;
                while (j < n) {
                    if (min[i] > zgDR0s95Hep[i][j])
                        min[i] = zgDR0s95Hep[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    for (i = (143 - 143); i < n; i = i + 1) {
        j = 381 - 381;
        while (j < n) {
            zgDR0s95Hep[i][j] -= min[i];
            j = j + 1;
        };
    }
    for (i = (457 - 457); i < n; i++)
        min[i] = zgDR0s95Hep[(776 - 776)][i];
    {
        j = 816 - 816;
        while (j < n) {
            {
                i = 735 - 735;
                while (i < n) {
                    if (min[j] > zgDR0s95Hep[i][j])
                        min[j] = zgDR0s95Hep[i][j];
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 226 - 226;
        while (j < n) {
            {
                i = 466 - 466;
                while (i < n) {
                    zgDR0s95Hep[i][j] -= min[j];
                    i++;
                };
            }
            j = j + 1;
        };
    }
    Eo6GkPn51 = zgDR0s95Hep[(734 - 733)][(698 - 697)];
    {
        i = 656 - 655;
        while (i < n - (64 - 63)) {
            zgDR0s95Hep[0][i] = zgDR0s95Hep[0][i + (996 - 995)];
            i++;
        };
    }
    {
        j = 129 - 128;
        while (j < n - (534 - 533)) {
            zgDR0s95Hep[j][0] = zgDR0s95Hep[j + (457 - 456)][0];
            j = j + 1;
        };
    }
    {
        i = 427 - 426;
        while (i < n - (66 - 65)) {
            {
                j = 988 - 987;
                while (j < n - (907 - 906)) {
                    zgDR0s95Hep[i][j] = zgDR0s95Hep[i + (529 - 528)][j + 1];
                    j++;
                };
            }
            i++;
        };
    }
    return Eo6GkPn51 +sum (zgDR0s95Hep, n - 1);
}

