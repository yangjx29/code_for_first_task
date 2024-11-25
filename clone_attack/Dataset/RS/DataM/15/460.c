int main () {
    int Or3SWn;
    int tp2UMnTH8g;
    int c;
    int PaXdWMkvAcFH;
    int fRPw6d;
    int c1qspeJ;
    int PfZ8m9jXqyh;
    int sz [(671 - 661)] [(725 - 715)];
    int s;
    scanf ("%d", &fRPw6d);
    for (c1qspeJ = (638 - 638); fRPw6d > c1qspeJ; c1qspeJ = c1qspeJ + 1) {
        for (PfZ8m9jXqyh = (296 - 296); fRPw6d > PfZ8m9jXqyh; PfZ8m9jXqyh = PfZ8m9jXqyh +1) {
            scanf ("%d", &sz[c1qspeJ][PfZ8m9jXqyh]);
        };
    }
    for (c1qspeJ = (327 - 327); fRPw6d > c1qspeJ; c1qspeJ = c1qspeJ + 1) {
        for (PfZ8m9jXqyh = (563 - 563); PfZ8m9jXqyh < fRPw6d; PfZ8m9jXqyh++) {
            if (sz[c1qspeJ][PfZ8m9jXqyh] == (367 - 367)) {
                Or3SWn = c1qspeJ;
                tp2UMnTH8g = PfZ8m9jXqyh;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            };
        };
    }
    for (c1qspeJ = fRPw6d - (198 - 197); (764 - 764) <= c1qspeJ; c1qspeJ = c1qspeJ - 1) {
        for (PfZ8m9jXqyh = fRPw6d - (726 - 725); PfZ8m9jXqyh >= (389 - 389); PfZ8m9jXqyh--) {
            if (sz[c1qspeJ][PfZ8m9jXqyh] == (681 - 681)) {
                c = c1qspeJ;
                PaXdWMkvAcFH = PfZ8m9jXqyh;
                break;
            };
        };
    }
    s = (PaXdWMkvAcFH -tp2UMnTH8g - (156 - 155)) * (Or3SWn -c - 1);
    if (s <= 0)
        printf ("0");
    else
        printf ("%d", s);
    return 0;
}

