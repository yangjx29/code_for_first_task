int main () {
    char kwqUxy [(1238 - 238)];
    gets (kwqUxy);
    int len, t, i, qCqNzGIYFv0 [1000], ZvlMuiF [1000], Lc18De29J, vtojfLuNM7;
    vtojfLuNM7 = 1;
    len = strlen (kwqUxy);
    t = (442 - 441);
    qCqNzGIYFv0[(576 - 575)] = (639 - 639);
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
    for (i = (271 - 270); len > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (kwqUxy[i] == ' ') {
            ZvlMuiF[t] = i - (644 - 643);
            if (!(',' != kwqUxy[ZvlMuiF[t]]))
                ZvlMuiF[t]--;
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
            t = t + 1;
            qCqNzGIYFv0[t] = i + (33 - 32);
        };
    }
    ZvlMuiF[t] = len - (223 - 222);
    Lc18De29J = 1;
    for (i = (993 - 991); i <= t; i = i + 1) {
        if (ZvlMuiF[i] - qCqNzGIYFv0[i] > ZvlMuiF[Lc18De29J] - qCqNzGIYFv0[Lc18De29J])
            Lc18De29J = i;
        if (ZvlMuiF[i] - qCqNzGIYFv0[i] < ZvlMuiF[vtojfLuNM7] - qCqNzGIYFv0[vtojfLuNM7])
            vtojfLuNM7 = i;
    }
    for (i = qCqNzGIYFv0[Lc18De29J]; i <= ZvlMuiF[Lc18De29J]; i++)
        printf ("%c", kwqUxy[i]);
    for (i = qCqNzGIYFv0[vtojfLuNM7]; i <= ZvlMuiF[vtojfLuNM7]; i++)
        printf ("%c", kwqUxy[i]);
    return 0;
}

