int main () {
    int x;
    int y;
    int a [50000];
    int b [50000];
    int n;
    int pzpkwjFZXhg [(10381 - 381)];
    int i;
    int lvBa4yCY56mx;
    x = (631 - 631);
    y = (97 - 97);
    {
        i = 0;
        while (10000 > i) {
            pzpkwjFZXhg[i] = 0;
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d", &a[i], &b[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            {
                lvBa4yCY56mx = 0;
                while (lvBa4yCY56mx < 10000) {
                    if ((lvBa4yCY56mx >= a[i]) && (lvBa4yCY56mx < b[i]))
                        pzpkwjFZXhg[lvBa4yCY56mx] = 1;
                    lvBa4yCY56mx = lvBa4yCY56mx + 1;
                };
            }
            i++;
        };
    }
    lvBa4yCY56mx = 0;
    y = b[0];
    x = a[0];
    for (i = 0; i < n; i = i + 1) {
        if (a[i] <= x)
            x = a[i];
        if (y <= b[i])
            y = b[i];
    }
    {
        i = x;
        while (i < y) {
            if (pzpkwjFZXhg[i] != 1) {
                lvBa4yCY56mx++;
                break;
            }
            i++;
        };
    }
    if (lvBa4yCY56mx == 0)
        printf ("%d %d", x, y);
    return 0;
}

