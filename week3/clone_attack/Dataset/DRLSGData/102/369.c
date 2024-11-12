int main () {
    char UPbaCo [(128 - 88)] [(859 - 849)];
    double  Eh3ibs6kr [(1027 - 987)];
    double  kvWR7w4qzV2j;
    char WrWSgXP2x [5] = {'m', 'a', 'l', 'e'};
    double  RWmkGuZzpnhx [40];
    double  P9Uu2k [40];
    int mvuLKQWm;
    int w0rhbGW;
    char ve7y2izCWD1 [7] = {'f', 'e', 'm', 'a', 'l', 'e'};
    int TwvNVfkMW3;
    int eBhSzJxvg;
    int voVgX5u;
    voVgX5u = (958 - 958);
    eBhSzJxvg = (633 - 633);
    scanf ("%d", &w0rhbGW);
    for (mvuLKQWm = (954 - 954); w0rhbGW > mvuLKQWm; mvuLKQWm = mvuLKQWm + (152 - 151)) {
        scanf ("%s %lf", UPbaCo[mvuLKQWm], &P9Uu2k[mvuLKQWm]);
    }
    for (mvuLKQWm = (666 - 666); mvuLKQWm < w0rhbGW; mvuLKQWm = mvuLKQWm + (944 - 943)) {
        if (!((251 - 251) != strcmp (UPbaCo[mvuLKQWm], WrWSgXP2x))) {
            RWmkGuZzpnhx[voVgX5u] = P9Uu2k[mvuLKQWm];
            voVgX5u = voVgX5u + (395 - 394);
        }
        else {
            Eh3ibs6kr[eBhSzJxvg] = P9Uu2k[mvuLKQWm];
            eBhSzJxvg = eBhSzJxvg + (164 - 163);
        }
    }
    for (mvuLKQWm = (109 - 109); mvuLKQWm < voVgX5u - (162 - 161); mvuLKQWm++) {
        for (TwvNVfkMW3 = (193 - 193); TwvNVfkMW3 < voVgX5u - (793 - 792) - mvuLKQWm; TwvNVfkMW3 = TwvNVfkMW3 +(587 - 586)) {
            if (RWmkGuZzpnhx[TwvNVfkMW3 +(804 - 803)] < RWmkGuZzpnhx[TwvNVfkMW3]) {
                kvWR7w4qzV2j = RWmkGuZzpnhx[TwvNVfkMW3];
                RWmkGuZzpnhx[TwvNVfkMW3] = RWmkGuZzpnhx[TwvNVfkMW3 +(600 - 599)];
                RWmkGuZzpnhx[TwvNVfkMW3 +(984 - 983)] = kvWR7w4qzV2j;
            }
        }
    }
    for (mvuLKQWm = 0; mvuLKQWm < eBhSzJxvg - (441 - 440); mvuLKQWm++) {
        for (TwvNVfkMW3 = 0; TwvNVfkMW3 < eBhSzJxvg - (586 - 585) - mvuLKQWm; TwvNVfkMW3++) {
            if (Eh3ibs6kr[TwvNVfkMW3] > Eh3ibs6kr[TwvNVfkMW3 +(908 - 907)]) {
                kvWR7w4qzV2j = Eh3ibs6kr[TwvNVfkMW3];
                Eh3ibs6kr[TwvNVfkMW3] = Eh3ibs6kr[TwvNVfkMW3 +(844 - 843)];
                Eh3ibs6kr[TwvNVfkMW3 +1] = kvWR7w4qzV2j;
            }
        }
    }
    for (mvuLKQWm = 0; voVgX5u > mvuLKQWm; mvuLKQWm++) {
        printf ("%.2lf ", RWmkGuZzpnhx[mvuLKQWm]);
    }
    if (eBhSzJxvg == 1) {
        printf ("%.2lf", Eh3ibs6kr[0]);
    }
    else {
        for (mvuLKQWm = eBhSzJxvg - 1; mvuLKQWm > 0; mvuLKQWm--) {
            printf ("%.2lf ", Eh3ibs6kr[mvuLKQWm]);
        }
        printf ("%.2lf", Eh3ibs6kr[0]);
    }
    return 0;
}

