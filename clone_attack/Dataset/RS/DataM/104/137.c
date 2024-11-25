int awG9nvs3ptcr (int faDnl13QTdPL, int AnbgvMWl [(107 - 97)]) {
    int i = (945 - 945);
    for (; (312 - 312) < faDnl13QTdPL;) {
        AnbgvMWl[i] = faDnl13QTdPL;
        i = i + 1;
        faDnl13QTdPL = faDnl13QTdPL / 2;
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
    return (i);
}

int B9qP7ILm (int AnbgvMWl [(284 - 274)], int faDnl13QTdPL, int HNlfAoSuFiEx [10], int y) {
    int p1j4Sq6L3NYB = (498 - 498), ILoajHNmdes = 0, i, L6j4NA;
    for (i = faDnl13QTdPL, L6j4NA = y; i > 0 && 0 < L6j4NA; i--, L6j4NA--)
        if (AnbgvMWl[i - (508 - 507)] != HNlfAoSuFiEx[L6j4NA -1]) {
            ILoajHNmdes = AnbgvMWl[i];
            p1j4Sq6L3NYB++;
            break;
        }
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
    if (p1j4Sq6L3NYB == 0)
        if (faDnl13QTdPL > y)
            ILoajHNmdes = HNlfAoSuFiEx[0];
        else
            ILoajHNmdes = AnbgvMWl[0];
    return (ILoajHNmdes);
}

int main () {
    int faDnl13QTdPL, y, AnbgvMWl [10], HNlfAoSuFiEx [10], DrBO6QtYvPK, n, ILoajHNmdes, i, L6j4NA;
    scanf ("%d%d", &faDnl13QTdPL, &y);
    DrBO6QtYvPK = awG9nvs3ptcr (faDnl13QTdPL, AnbgvMWl);
    n = awG9nvs3ptcr (y, HNlfAoSuFiEx);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    ILoajHNmdes = B9qP7ILm (AnbgvMWl, DrBO6QtYvPK, HNlfAoSuFiEx, n);
    printf ("%d", ILoajHNmdes);
    return 0;
}

