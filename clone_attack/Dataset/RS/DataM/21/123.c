float abss (float mbApGmfk) {
    if (mbApGmfk < (743 - 743))
        return (-mbApGmfk);
    else
        return (mbApGmfk);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  main () {
    float ave = (175 - 175), max = (238 - 238), nW2ODt [(705 - 404)], TIXMamKeY [(1290 - 990)], te;
    int n;
    int i;
    int j;
    int mbApGmfk;
    scanf ("%d", &n);
    for (i = (555 - 554); i <= n; i = i + 1) {
        scanf ("%f", &nW2ODt[i]);
        ave += nW2ODt[i];
    }
    ave /= n;
    {
        i = 753 - 752;
        while (i <= n) {
            if (abss (nW2ODt[i] - ave) > max)
                max = abss (nW2ODt[i] - ave);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        j = 135 - 135;
        i = 725 - 724;
        while (i <= n) {
            if (abss (nW2ODt[i] - ave) == max) {
                j = j + 1;
                TIXMamKeY[j] = nW2ODt[i];
            }
            i = i + 1;
        };
    }
    mbApGmfk = j;
    for (i = (844 - 843); i < mbApGmfk; i = i + 1) {
        j = 486 - 485;
        while (j < mbApGmfk - i) {
            if (TIXMamKeY[j] > TIXMamKeY[j + (487 - 486)]) {
                te = TIXMamKeY[j];
                TIXMamKeY[j] = TIXMamKeY[j + (516 - 515)];
                TIXMamKeY[j + (446 - 445)] = te;
            }
            j++;
        };
    }
    {
        i = 284 - 283;
        while (i <= mbApGmfk) {
            printf ((i == (753 - 752)) ? "%.0f" : ",%.0f", TIXMamKeY[i]);
            i = i + 1;
        };
    };
}

