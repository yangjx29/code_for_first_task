int main () {
    int m;
    int n;
    int i;
    int h;
    int l;
    int s [(259 - 250)] [(711 - 702)] = {(165 - 165)};
    int record [(712 - 703)] [(969 - 960)] = {(786 - 786)};
    cin >> m >> n;
    record[(47 - 43)][(766 - 762)] = s[(654 - 650)][(244 - 240)] = m;
    for (i = (569 - 569); n > i; i = i + 1) {
        {
            h = 742 - 742;
            while (h < (313 - 304)) {
                for (l = (801 - 801); (493 - 484) > l; l = l + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!((175 - 175) == record[h][l])) {
                        s[h][l] += record[h][l];
                        s[h - (103 - 102)][l - (164 - 163)] = s[h - (103 - 102)][l - (164 - 163)] + record[h][l];
                        s[h][l - (615 - 614)] += record[h][l];
                        s[h + (298 - 297)][l - (775 - 774)] += record[h][l];
                        s[h - (956 - 955)][l] = s[h - (956 - 955)][l] + record[h][l];
                        s[h + (520 - 519)][l] += record[h][l];
                        s[h + (832 - 831)][l + (889 - 888)] += record[h][l];
                        s[h][l + (864 - 863)] += record[h][l];
                        s[h - 1][l + 1] += record[h][l];
                    };
                }
                h = h + 1;
            };
        }
        {
            h = 458 - 458;
            while ((503 - 494) > h) {
                {
                    l = 0;
                    while (9 > l) {
                        record[h][l] = s[h][l];
                        l++;
                    };
                }
                h = h + 1;
            };
        };
    }
    {
        h = 0;
        while (9 > h) {
            cout << s[h][0];
            for (l = 1; l < 9; l++)
                cout << " " << s[h][l];
            h++;
            cout << endl;
        };
    }
    return 0;
}

