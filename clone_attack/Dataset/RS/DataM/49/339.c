int main () {
    char bcwg2a7pD0o [(605 - 105)];
    void  AIK2HV (char UpVO3A9GfI [(513 - 13)], int duUlCo);
    int duUlCo;
    int vYpnRMvbH;
    int k;
    int EXU0yA8eq;
    char UpVO3A9GfI [(532 - 32)];
    gets (bcwg2a7pD0o);
    EXU0yA8eq = strlen (bcwg2a7pD0o);
    for (duUlCo = (920 - 918); duUlCo < EXU0yA8eq; duUlCo++) {
        vYpnRMvbH = 825 - 825;
        while (vYpnRMvbH <= EXU0yA8eq -duUlCo) {
            {
                k = 587 - 587;
                while (k <= duUlCo) {
                    UpVO3A9GfI[k] = bcwg2a7pD0o[k + vYpnRMvbH];
                    k = k + 1;
                };
            }
            vYpnRMvbH++;
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
            AIK2HV (UpVO3A9GfI, duUlCo);
        };
    }
    return (429 - 429);
}

void  AIK2HV (char UpVO3A9GfI [500], int duUlCo) {
    int i7TvmsY;
    {
        i7TvmsY = 0;
        while (i7TvmsY <= duUlCo / 2) {
            if (UpVO3A9GfI[i7TvmsY] != UpVO3A9GfI[duUlCo - 1 - i7TvmsY])
                return;
            i7TvmsY++;
        };
    }
    for (i7TvmsY = 0; i7TvmsY < duUlCo; i7TvmsY++)
        printf ("%c", UpVO3A9GfI[i7TvmsY]);
    return;
}

