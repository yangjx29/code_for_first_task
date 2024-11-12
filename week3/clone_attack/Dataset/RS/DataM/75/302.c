int main () {
    int tyw32BF5LMjO [(1626 - 626)], sTV85qUBZ [1000], BBTeGAwUizOJ [1000] = {(981 - 981)};
    int n;
    int i;
    int j;
    n = 0;
    char fKcCElV, hRaMxkHiyfq;
    int u2xQcs;
    int kGndC3Yr;
    int dFyo7v9;
    for (i = 0;; i = i + 1) {
        cin >> tyw32BF5LMjO[i];
        fKcCElV = cin.get ();
        if (!('\n' != fKcCElV))
            break;
        n++;
    }
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
    for (i = 0;; i = i + 1) {
        cin >> sTV85qUBZ[i];
        hRaMxkHiyfq = cin.get ();
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
        if (hRaMxkHiyfq == '\n')
            break;
    }
    u2xQcs = tyw32BF5LMjO[0];
    for (i = 0; i < n; i = i + 1)
        if (tyw32BF5LMjO[i] < u2xQcs)
            u2xQcs = tyw32BF5LMjO[i];
    kGndC3Yr = sTV85qUBZ[0];
    {
        i = 0;
        while (i < n) {
            if (kGndC3Yr < sTV85qUBZ[i])
                kGndC3Yr = sTV85qUBZ[i];
            i = i + 1;
        };
    }
    for (j = u2xQcs; j <= kGndC3Yr; j++)
        for (i = 0; i < n; i++)
            if (tyw32BF5LMjO[i] <= j && sTV85qUBZ[i] > j)
                BBTeGAwUizOJ[j]++;
    dFyo7v9 = BBTeGAwUizOJ[u2xQcs];
    {
        i = u2xQcs;
        while (i < kGndC3Yr) {
            if (BBTeGAwUizOJ[i] > dFyo7v9)
                dFyo7v9 = BBTeGAwUizOJ[i];
            i = i + 1;
        };
    }
    cout << n << " " << dFyo7v9 << endl;
    return 0;
}

