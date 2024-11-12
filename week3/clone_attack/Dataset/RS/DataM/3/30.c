int main (int argc, char *argv []) {
    int niDlW4u, G8BTpwW1k, eFtfMEiGpB = 0, shu [1000], i, zXy9Kaz8FpnU, c = 0, d = 0;
    scanf ("%d %d", &niDlW4u, &G8BTpwW1k);
    {
        i = 0;
        while (niDlW4u > i) {
            scanf ("%d", &shu[i]);
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
            i = i + 1;
        };
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
    {
        i = 0;
        while (niDlW4u > i) {
            for (zXy9Kaz8FpnU = i + 1; niDlW4u > zXy9Kaz8FpnU; zXy9Kaz8FpnU++) {
                eFtfMEiGpB = shu[i] + shu[zXy9Kaz8FpnU];
                if (!(G8BTpwW1k != eFtfMEiGpB))
                    d++;
                c++;
            }
            i++;
        };
    }
    if (d == 0)
        printf ("no");
    else
        printf ("yes");
    return 0;
}

