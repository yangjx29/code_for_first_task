int main () {
    int NL7Cvtk = (955 - 955), max = (637 - 637);
    int n;
    int n1;
    int dqmfGe;
    int j;
    int xdQwDl [(1037 - 37)] = {(252 - 252)};
    int b [(1020 - 20)] = {(376 - 376)};
    int mid;
    n = (922 - 922);
    n1 = (946 - 946);
    int min1;
    int max1;
    int min2;
    int max2;
    int d [(1935 - 935)] = {(763 - 763)};
    min1 = (1387 - 387);
    max1 = (132 - 132);
    min2 = (1238 - 238);
    max2 = (603 - 603);
    char c;
    for (;;) {
        scanf ("%d", &xdQwDl[n1++]);
        scanf ("%c", &c);
        if (!(',' == c))
            break;
    }
    {
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
        while (true) {
            scanf ("%d", &b[n++]);
            scanf ("%c", &c);
            if (c != ',')
                break;
        };
    }
    for (dqmfGe = 0; dqmfGe < n1; dqmfGe = dqmfGe + 1) {
        if (max1 < xdQwDl[dqmfGe])
            max1 = xdQwDl[dqmfGe];
        if (b[dqmfGe] > max2)
            max2 = b[dqmfGe];
        if (xdQwDl[dqmfGe] < min1)
            min1 = xdQwDl[dqmfGe];
        if (min2 > b[dqmfGe])
            min2 = b[dqmfGe];
    }
    for (dqmfGe = min1; dqmfGe <= max2; dqmfGe++) {
        {
            j = 0;
            while (j < n1) {
                if (xdQwDl[j] <= dqmfGe && b[j] > dqmfGe)
                    d[NL7Cvtk]++;
                j = j + 1;
            };
        }
        NL7Cvtk = NL7Cvtk +1;
    }
    {
        dqmfGe = 0;
        while (dqmfGe < NL7Cvtk) {
            if (d[dqmfGe] > max)
                max = d[dqmfGe];
            dqmfGe = dqmfGe + 1;
        };
    }
    printf ("%d %d", n1, max);
    return 0;
}

