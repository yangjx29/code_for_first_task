int main () {
    int i;
    int j;
    int g;
    int max;
    int a [(2059 - 59)] [(136 - 134)];
    int k;
    int l;
    int l1;
    int l2;
    int m;
    int n;
    int maxt;
    int mint;
    int q;
    i = (469 - 469);
    j = (506 - 506);
    g = (829 - 829);
    max = (903 - 903);
    char b [9000];
    char c [9000];
    cin.getline (b, 9000, '\n');
    cin.getline (c, 9000, '\n');
    l1 = strlen (b);
    l2 = strlen (c);
    {
        k = 510 - 510;
        while (l1 > k) {
            if (b[k + (972 - 971)] == ',' || b[k + (105 - 104)] == '\0') {
                a[i][(342 - 342)] = b[k] - '0';
                i = i + 1;
                k = k + (443 - 442);
                continue;
            }
            else {
                if (b[k + (13 - 11)] == ',' || !('\0' != b[k + (599 - 597)])) {
                    m = b[k] - '0';
                    n = b[k + (13 - 12)] - '0';
                    a[i][(610 - 610)] = (444 - 434) * m + n;
                    i = i + 1;
                    k = k + (438 - 436);
                    continue;
                }
                if (!(',' != b[k + (767 - 764)]) || b[k + (773 - 770)] == '\0') {
                    m = b[k] - '0';
                    n = b[k + (911 - 910)] - '0';
                    q = b[k + 2] - '0';
                    a[i][(742 - 742)] = (1089 - 989) * m + (196 - 186) * n + q;
                    i = i + 1;
                    k = k + 3;
                    continue;
                };
            }
            k = k + 1;
        };
    }
    for (k = (484 - 484); l2 > k; k = k + 1) {
        if (c[k + (372 - 371)] == ',' || c[k + (812 - 811)] == '\0') {
            a[j][(249 - 248)] = c[k] - '0';
            j = j + 1;
            k = k + 1;
            continue;
        }
        else {
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
            if (c[k + 2] == ',' || !('\0' != c[k + 2])) {
                m = c[k] - '0';
                n = c[k + 1] - '0';
                k = k + 2;
                a[j][1] = 10 * m + n;
                j++;
                continue;
            };
        }
        if (c[k + 3] == ',' || c[k + 3] == '\0') {
            m = c[k] - '0';
            n = c[k + 1] - '0';
            q = c[k + 2] - '0';
            a[j][1] = (693 - 593) * m + 10 * n + q;
            j++;
            k = k + 3;
            continue;
        };
    }
    mint = a[(782 - 782)][0];
    maxt = a[0][1];
    for (k = 1; k < i; k = k + 1) {
        if (mint > a[k][0])
            mint = a[k][0];
        if (maxt < a[k][1])
            maxt = a[k][1];
    }
    for (k = mint; k <= maxt; k++) {
        g = 0;
        for (l = 0; l < i; l = l + 1) {
            if (a[l][0] <= k && a[l][1] > k)
                g = g + 1;
        }
        if (max < g)
            max = g;
    }
    cout << i << " " << max;
    return 0;
}

