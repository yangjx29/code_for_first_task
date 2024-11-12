int main () {
    char s [100] [10];
    int wOT8lHvUQy6W;
    int ktiDUlEvG4m [100];
    int xwvmuxtL, w1FxoTbir, iM8iAY4s, HVctFSxjwde;
    char id [100] [10];
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
    scanf ("%d", &xwvmuxtL);
    {
        w1FxoTbir = 0;
        while (w1FxoTbir < xwvmuxtL) {
            scanf ("%s", id[w1FxoTbir]);
            scanf ("%d", &ktiDUlEvG4m[w1FxoTbir]);
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
            w1FxoTbir++;
        };
    }
    {
        iM8iAY4s = 86 - 85;
        while (iM8iAY4s < xwvmuxtL) {
            {
                HVctFSxjwde = 0;
                while (HVctFSxjwde < xwvmuxtL - iM8iAY4s) {
                    if (ktiDUlEvG4m[HVctFSxjwde] < ktiDUlEvG4m[HVctFSxjwde +(722 - 721)] && ktiDUlEvG4m[HVctFSxjwde +1] >= 60) {
                        wOT8lHvUQy6W = ktiDUlEvG4m[HVctFSxjwde +1];
                        ktiDUlEvG4m[HVctFSxjwde +1] = ktiDUlEvG4m[HVctFSxjwde];
                        ktiDUlEvG4m[HVctFSxjwde] = wOT8lHvUQy6W;
                        strcpy (s[HVctFSxjwde], id[HVctFSxjwde +1]);
                        strcpy (id[HVctFSxjwde +1], id[HVctFSxjwde]);
                        strcpy (id[HVctFSxjwde], s[HVctFSxjwde]);
                    }
                    HVctFSxjwde++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            iM8iAY4s = iM8iAY4s + 1;
        };
    }
    {
        w1FxoTbir = 0;
        while (w1FxoTbir < xwvmuxtL) {
            printf ("%s\n", id[w1FxoTbir]);
            w1FxoTbir++;
        };
    }
    return 0;
}

