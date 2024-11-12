int main () {
    int i, NjRVEsZyB5x, j, eu4YvGBjhpHo, t, m, q = (408 - 408);
    int a [(311 - 210)];
    struct   student {
        char JrBTGH2ibX [(957 - 937)];
        int zong;
        int rTItUXOH;
        char sE5HrtjU;
        char xi;
        int YgQfGHSAT;
        int z;
    }
    pdeUi4y [(1025 - 924)];
    scanf ("%d", &NjRVEsZyB5x);
    {
        i = 1;
        while (NjRVEsZyB5x >= i) {
            scanf ("%s %d %d %c %c %d", pdeUi4y[i].JrBTGH2ibX, &pdeUi4y[i].zong, &pdeUi4y[i].rTItUXOH, &pdeUi4y[i].sE5HrtjU, &pdeUi4y[i].xi, &pdeUi4y[i].YgQfGHSAT);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= NjRVEsZyB5x) {
            pdeUi4y[i].z = 0;
            if (80 < pdeUi4y[i].zong && pdeUi4y[i].YgQfGHSAT > 0)
                pdeUi4y[i].z = pdeUi4y[i].z + 8000;
            if (pdeUi4y[i].zong > (647 - 562) && 80 < pdeUi4y[i].rTItUXOH)
                pdeUi4y[i].z = pdeUi4y[i].z + (4816 - 816);
            if (90 < pdeUi4y[i].zong)
                pdeUi4y[i].z = pdeUi4y[i].z + 2000;
            if (85 < pdeUi4y[i].zong && pdeUi4y[i].xi == 'Y')
                pdeUi4y[i].z = pdeUi4y[i].z + 1000;
            if (pdeUi4y[i].rTItUXOH > 80 && pdeUi4y[i].sE5HrtjU == 'Y')
                pdeUi4y[i].z = pdeUi4y[i].z + (936 - 86);
            a[i] = pdeUi4y[i].z;
            q = q + pdeUi4y[i].z;
            i++;
        };
    }
    {
        j = NjRVEsZyB5x;
        while (j > 0) {
            {
                eu4YvGBjhpHo = 0;
                while (eu4YvGBjhpHo < j) {
                    if (pdeUi4y[eu4YvGBjhpHo].z > pdeUi4y[eu4YvGBjhpHo + 1].z) {
                        t = pdeUi4y[eu4YvGBjhpHo + 1].z;
                        pdeUi4y[eu4YvGBjhpHo + 1].z = pdeUi4y[eu4YvGBjhpHo].z;
                        pdeUi4y[eu4YvGBjhpHo].z = t;
                    }
                    eu4YvGBjhpHo++;
                };
            }
            j--;
        };
    }
    {
        i = 1;
        while (i <= NjRVEsZyB5x) {
            if (a[i] == pdeUi4y[NjRVEsZyB5x].z) {
                m = i;
                break;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", pdeUi4y[m].JrBTGH2ibX, pdeUi4y[NjRVEsZyB5x].z, q);
    return 0;
}

