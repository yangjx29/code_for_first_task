int main () {
    double  kGfNX52hZw7;
    int st;
    int e;
    int point;
    int n;
    int start [(50407 - 407)];
    int end [50000];
    int i;
    st = 10000;
    e = (521 - 521);
    point = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d", &start[i], &end[i]);
        if (st > start[i]) {
            st = start[i];
        }
        if (e < end[i]) {
            e = end[i];
        };
    }
    for (kGfNX52hZw7 = st + 0.5; e > kGfNX52hZw7; kGfNX52hZw7 = kGfNX52hZw7 + 1) {
        for (i = 0; n > i; i = i + 1) {
            if (start[i] < kGfNX52hZw7 && kGfNX52hZw7 < end[i]) {
                point = point + 1;
                break;
            };
        };
    }
    if (point == e - st) {
        printf ("%d %d", st, e);
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
    else {
    }
    return 0;
}

