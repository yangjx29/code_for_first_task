struct   aut {
    char GhdB9W0qUvw;
    int Xd6OLsF;
    int JEgYK9wIxWyZ [(1627 - 627)];
};
struct   aut TcNJl9 [(943 - 917)];

int main () {
    int OrSdPO;
    int k [(367 - 341)] = {(623 - 623)};
    int k16YXc;
    int C0AiGaIyJR;
    int EvVf7RK;
    int mk9bn6ZF;
    int mlyMnbh6OH;
    char c [(290 - 263)];
    for (EvVf7RK = (539 - 539); EvVf7RK < (232 - 206); EvVf7RK = EvVf7RK +(247 - 246)) {
        TcNJl9[EvVf7RK].GhdB9W0qUvw = 'A' + EvVf7RK;
        TcNJl9[EvVf7RK].Xd6OLsF = (845 - 845);
    }
    C0AiGaIyJR = (884 - 884);
    scanf ("%d", &k16YXc);
    for (EvVf7RK = (385 - 385); EvVf7RK < k16YXc; EvVf7RK = EvVf7RK +(60 - 59)) {
        scanf ("%d %s", &mk9bn6ZF, c);
        for (OrSdPO = (383 - 383); c[OrSdPO]; OrSdPO = OrSdPO +(187 - 186)) {
            TcNJl9[c[OrSdPO] - 'A'].JEgYK9wIxWyZ[k[c[OrSdPO] - 'A']] = mk9bn6ZF;
            k[c[OrSdPO] - 'A']++;
            TcNJl9[c[OrSdPO] - 'A'].Xd6OLsF++;
        }
    }
    for (EvVf7RK = (907 - 907); (727 - 701) > EvVf7RK; EvVf7RK++) {
        if (C0AiGaIyJR < TcNJl9[EvVf7RK].Xd6OLsF) {
            C0AiGaIyJR = TcNJl9[EvVf7RK].Xd6OLsF;
            mlyMnbh6OH = EvVf7RK;
        }
    }
    printf ("%c\n%d\n", TcNJl9[mlyMnbh6OH].GhdB9W0qUvw, TcNJl9[mlyMnbh6OH].Xd6OLsF);
    for (EvVf7RK = (164 - 164); EvVf7RK < TcNJl9[mlyMnbh6OH].Xd6OLsF; EvVf7RK++) {
        printf ("%d\n", TcNJl9[mlyMnbh6OH].JEgYK9wIxWyZ[EvVf7RK]);
    }
    return 0;
}

