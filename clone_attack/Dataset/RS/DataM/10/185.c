int a [30], oElm9tUozBs;

int T9JvuS (int p, int svnN4G) {
    if (p >= svnN4G)
        return p;
    else
        return svnN4G;
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

int shot (int SknNJ7hVTGfu, int y) {
    if (!(oElm9tUozBs != SknNJ7hVTGfu)) {
        if (a[SknNJ7hVTGfu] <= y)
            return (28 - 27);
        else
            return 0;
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
        };
    }
    else if (a[SknNJ7hVTGfu] > y)
        return (shot (SknNJ7hVTGfu +(640 - 639), y));
    else
        return (T9JvuS (shot (SknNJ7hVTGfu +1, y), shot (SknNJ7hVTGfu +1, a[SknNJ7hVTGfu]) + 1));
}

int main () {
    int uroB2eIf;
    int b4IsQx;
    uroB2eIf = 0;
    scanf ("%d", &oElm9tUozBs);
    for (b4IsQx = 1; b4IsQx <= oElm9tUozBs; b4IsQx++) {
        scanf ("%d", &a[b4IsQx]);
    }
    uroB2eIf = shot (1, 9999);
    printf ("%d", uroB2eIf);
    return 0;
}

