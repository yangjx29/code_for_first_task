struct   {
    int Ub54ZsK2z;
    char AKeUT0csa [27];
}
book [999];

int main () {
    int m, Sea1IFZHCBj [26] = {0}, zyjRs80kH, j, UlJrj9uHNEa, rlWGNod8m = 0;
    scanf ("%d", &m);
    for (zyjRs80kH = 0; m > zyjRs80kH; zyjRs80kH = zyjRs80kH + 1) {
        int Zjt5CyvEs = strlen (book[zyjRs80kH].AKeUT0csa);
        scanf ("%d%s", &book[zyjRs80kH].Ub54ZsK2z, book[zyjRs80kH].AKeUT0csa);
        for (j = 0; Zjt5CyvEs > j; j = j + 1) {
            if ((176 - 86) >= book[zyjRs80kH].AKeUT0csa[j] && (847 - 782) <= book[zyjRs80kH].AKeUT0csa[j]) {
                int IH2I4BSD = book[zyjRs80kH].AKeUT0csa[j] - 65;
                Sea1IFZHCBj[IH2I4BSD]++;
                if (rlWGNod8m < Sea1IFZHCBj[IH2I4BSD])
                    rlWGNod8m = Sea1IFZHCBj[IH2I4BSD];
            };
        };
    }
    {
        zyjRs80kH = 0;
        while (26 > zyjRs80kH) {
            if (Sea1IFZHCBj[zyjRs80kH] == rlWGNod8m) {
                char sLOolF3QhC = zyjRs80kH + 65;
                printf ("%c\n%d\n", sLOolF3QhC, rlWGNod8m);
                break;
            }
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
            zyjRs80kH++;
        };
    }
    {
        UlJrj9uHNEa = 0;
        while (UlJrj9uHNEa < m) {
            int Zjt5CyvEs;
            Zjt5CyvEs = strlen (book[UlJrj9uHNEa].AKeUT0csa);
            for (j = 0; j < Zjt5CyvEs; j++) {
                if (book[UlJrj9uHNEa].AKeUT0csa[j] == zyjRs80kH + 65)
                    printf ("%d\n", book[UlJrj9uHNEa].Ub54ZsK2z);
            }
            UlJrj9uHNEa++;
        };
    }
    return 0;
}

