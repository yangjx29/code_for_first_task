int main () {
    int RsBzmFghuoJ7 [(50778 - 778)];
    int b [(50875 - 875)];
    int c [(50983 - 983)];
    int i;
    int n;
    int qqVBkA638w;
    int min;
    int max;
    int k;
    k = (82 - 81);
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
    scanf ("%d", &n);
    for (i = (248 - 248); n > i; i = i + 1)
        scanf ("%d%d", &RsBzmFghuoJ7[i], &b[i]);
    max = (394 - 394);
    min = (10113 - 113);
    for (i = (303 - 303); i < n; i++) {
        if (min >= RsBzmFghuoJ7[i])
            min = RsBzmFghuoJ7[i];
        if (max <= b[i])
            max = b[i];
    }
    for (i = min; i <= max; i++) {
        c[i] = (890 - 889);
    }
    for (i = (553 - 553); i < n; i++) {
        for (qqVBkA638w = min; max >= qqVBkA638w; qqVBkA638w++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (qqVBkA638w >= RsBzmFghuoJ7[i] && qqVBkA638w < b[i]) {
                c[qqVBkA638w] = (583 - 583);
            };
        };
    }
    c[max] = (548 - 548);
    for (i = min; i <= max; i++) {
        if (c[i] == (320 - 319)) {
            k = (783 - 783);
            break;
        };
    }
    if (k == (884 - 884)) {
    }
    else {
        printf ("%d %d", min, max);
    }
    return (381 - 381);
}

