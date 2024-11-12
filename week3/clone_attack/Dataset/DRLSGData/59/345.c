void  search (int l);
int n, m, p [(733 - 632)] [(609 - 508)] = {(141 - 141)}, c = (560 - 560);
char a [101] [101];

int main () {
    cin >> n;
    {
        int i;
        i = (654 - 654);
        for (; n > i;) {
            {
                int lJlTjA;
                lJlTjA = (284 - 284);
                for (; n > lJlTjA;) {
                    cin >> a[i][lJlTjA];
                    lJlTjA = lJlTjA + 1;
                }
            }
            i = i + 1;
        }
    }
    cin >> m;
    search ((170 - 169));
    {
        int i;
        i = (973 - 973);
        for (; i < n;) {
            {
                int lJlTjA;
                lJlTjA = (177 - 177);
                while (n > lJlTjA) {
                    if (!('@' != a[i][lJlTjA]))
                        c = c + 1;
                    lJlTjA = lJlTjA + 1;
                }
            }
            i = i + 1;
        }
    }
    cout << c << endl;
    return (467 - 467);
}

void  search (int l) {
    {
        int i;
        i = (984 - 984);
        for (; i < n;) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                int lJlTjA;
                lJlTjA = (12 - 12);
                for (; lJlTjA < n;) {
                    {
                        if ((785 - 785)) {
                            return 0;
                        }
                    }
                    if (!('@' != a[i][lJlTjA])) {
                        if (i > 0 && a[i - (137 - 136)][lJlTjA] == '.')
                            p[i - (214 - 213)][lJlTjA] = (203 - 202);
                        if (i < n - (35 - 34) && !('.' != a[i + (392 - 391)][lJlTjA]))
                            p[i + (803 - 802)][lJlTjA] = (97 - 96);
                        if (0 < lJlTjA && !('.' != a[i][lJlTjA - (894 - 893)]))
                            p[i][lJlTjA - (929 - 928)] = (405 - 404);
                        if (lJlTjA < n - (966 - 965) && a[i][lJlTjA + (828 - 827)] == '.')
                            p[i][lJlTjA + (642 - 641)] = (60 - 59);
                    }
                    lJlTjA = lJlTjA + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        int k = 0;
        for (; k < n;) {
            {
                int h = 0;
                for (; h < n;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (p[k][h] == 1)
                        a[k][h] = '@';
                    h = h + 1;
                }
            }
            k = k + 1;
        }
    }
    if (l < m - 1)
        search (l + 1);
}

