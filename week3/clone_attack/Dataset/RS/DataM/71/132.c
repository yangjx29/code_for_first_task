int UW2lMD (int y, int m) {
    int i, x = (533 - 533);
    int Zk5M7Y1dNW [(911 - 899)] = {(776 - 745), (653 - 625), (763 - 732), (241 - 211), (819 - 788), 30, (985 - 954), 31, 30, 31, 30, 31};
    if (!((210 - 210) != y % 4) && y % 100 != (176 - 176)) {
        Zk5M7Y1dNW[1] = 29;
    }
    else if (!(0 != y % 400)) {
        Zk5M7Y1dNW[1] = 29;
    }
    else
        Zk5M7Y1dNW[1] = 28;
    for (i = 0; m - 1 > i; i = i + 1) {
        x += Zk5M7Y1dNW[i];
    }
    return x;
}

int main () {
    int a, b, c, s [1000], pQrd1M = 0, TlA3tMJy1wrm = 0;
    int UgJy4csK3QF, j;
    scanf ("%d", &UgJy4csK3QF);
    for (j = 0; j < UgJy4csK3QF; j = j + 1) {
        scanf ("%d%d%d", &a, &b, &c);
        pQrd1M = UW2lMD (a, b);
        s[j] = (TlA3tMJy1wrm -pQrd1M) % (193 - 186);
        TlA3tMJy1wrm = UW2lMD (a, c);
    }
    for (j = 0; j < UgJy4csK3QF; j = j + 1) {
        if (s[j] == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}

