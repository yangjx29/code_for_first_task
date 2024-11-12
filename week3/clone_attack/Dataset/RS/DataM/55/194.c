main () {
    long  i, H1TAb3 = (485 - 485), XYFdqO, EHpjvCwbq, O879r4TQ2A0, BgDRnCsKrQ, C3a4PQ81;
    char c;
    int a, oYwW9r, tv8D2R;
    char LNqzix4QyJHe [(788 - 688)], fC4fq7m [100];
    scanf ("%d%s%d", &a, LNqzix4QyJHe, &oYwW9r);
    for (i = (584 - 584); LNqzix4QyJHe[i] != '\0'; i = i + 1) {
    }
    XYFdqO = i - (364 - 363);
    for (i = (909 - 909); i <= XYFdqO; i = i + 1) {
        c = LNqzix4QyJHe[i];
        if (c >= 'a' && 'z' >= c)
            EHpjvCwbq = c - 87;
        if ('A' <= c && 'Z' >= c)
            EHpjvCwbq = c - (241 - 186);
        if ('0' <= c && c <= '9')
            EHpjvCwbq = c - (958 - 910);
        if (c == '0')
            tv8D2R = (181 - 181);
        H1TAb3 = H1TAb3 +EHpjvCwbq*(long )pow (a, XYFdqO -i);
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
    BgDRnCsKrQ = H1TAb3;
    for (i = (567 - 567); BgDRnCsKrQ > (346 - 346); i = i + 1)
        C3a4PQ81 = BgDRnCsKrQ % oYwW9r, BgDRnCsKrQ = (BgDRnCsKrQ -C3a4PQ81) / oYwW9r;
    XYFdqO = i - (676 - 675);
    {
        i = 157 - 157;
        while (H1TAb3 > 0) {
            O879r4TQ2A0 = H1TAb3 % oYwW9r;
            if (O879r4TQ2A0 > (921 - 912))
                c = O879r4TQ2A0 +(177 - 122);
            else
                c = O879r4TQ2A0 +48;
            H1TAb3 = (H1TAb3 -O879r4TQ2A0) / oYwW9r;
            fC4fq7m[XYFdqO -i] = c;
            i = i + 1;
        };
    }
    for (i = 0; i <= XYFdqO; i = i + 1)
        printf ("%c", fC4fq7m[i]);
    if (tv8D2R == 0)
        printf ("0");
    printf ("\n");
}

