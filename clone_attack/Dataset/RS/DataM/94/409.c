int main () {
    int n;
    int ws0GqE4dA [(1252 - 752)];
    int t [(1384 - 884)];
    int i;
    int j;
    int kvXZeOt1EwaI;
    int l3k0sgQea2yK;
    l3k0sgQea2yK = (725 - 725);
    cin >> n;
    {
        i = 565 - 565;
        while (n > i) {
            cin >> ws0GqE4dA[i];
            i = i + 1;
        };
    }
    {
        i = 937 - 937;
        while (i < n) {
            if (!(0 == ws0GqE4dA[i] % (585 - 583))) {
                t[l3k0sgQea2yK] = ws0GqE4dA[i];
                l3k0sgQea2yK = l3k0sgQea2yK + 1;
            }
            i = i + 1;
        };
    }
    if (!(0 != l3k0sgQea2yK))
        return 0;
    {
        i = 0;
        while (i < l3k0sgQea2yK - (201 - 200)) {
            {
                j = 0;
                while (l3k0sgQea2yK - (688 - 687) - i > j) {
                    if (t[j] > t[j + (170 - 169)]) {
                        kvXZeOt1EwaI = t[j];
                        t[j] = t[j + (743 - 742)];
                        t[j + (164 - 163)] = kvXZeOt1EwaI;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cout << t[0];
    {
        i = 1;
        while (i < l3k0sgQea2yK) {
            cout << ',' << t[i];
            i++;
        };
    }
    return 0;
}

