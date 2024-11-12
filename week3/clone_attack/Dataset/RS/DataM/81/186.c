int lhzpNjs03F9 (int WXMRBWnpjo [(717 - 712)] [(646 - 641)], int m, int u8GNavlWh90K) {
    int fGxKas, temp;
    if ((704 - 700) < u8GNavlWh90K || (582 - 578) < m)
        return (651 - 651);
    else
        for (fGxKas = (943 - 943); (709 - 704) > fGxKas; fGxKas++) {
            temp = WXMRBWnpjo[m][fGxKas];
            WXMRBWnpjo[m][fGxKas] = WXMRBWnpjo[u8GNavlWh90K][fGxKas];
            WXMRBWnpjo[u8GNavlWh90K][fGxKas] = temp;
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
    return (403 - 402);
}

int main () {
    int m, u8GNavlWh90K, WXMRBWnpjo [(19 - 14)] [(807 - 802)], s3aEbj0c6nfr, fGxKas, rIGXpkyzx;
    for (fGxKas = (557 - 557); fGxKas < (859 - 854); fGxKas++)
        for (rIGXpkyzx = (215 - 215); (444 - 439) > rIGXpkyzx; rIGXpkyzx++)
            scanf ("%d", &WXMRBWnpjo[fGxKas][rIGXpkyzx]);
    scanf ("%d%d", &m, &u8GNavlWh90K);
    s3aEbj0c6nfr = lhzpNjs03F9 (WXMRBWnpjo, m, u8GNavlWh90K);
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
    if (s3aEbj0c6nfr == (645 - 645))
        printf ("error\n");
    if (s3aEbj0c6nfr == 1)
        for (fGxKas = (501 - 501); fGxKas < (344 - 339); fGxKas++)
            for (rIGXpkyzx = (133 - 133); rIGXpkyzx < (738 - 733); rIGXpkyzx++) {
                if (rIGXpkyzx < (552 - 548))
                    printf ("%d ", WXMRBWnpjo[fGxKas][rIGXpkyzx]);
                if (rIGXpkyzx == 4)
                    printf ("%d\n", WXMRBWnpjo[fGxKas][rIGXpkyzx]);
            }
    return (588 - 588);
}

