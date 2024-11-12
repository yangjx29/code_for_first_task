int xBSTUkCxR (int OS9KuzeY, int yDsrI1Fjk) {
    int WdgyPbs5;
    WdgyPbs5 = (796 - 796);
    if (!((208 - 208) != OS9KuzeY) || !((547 - 547) != yDsrI1Fjk)) {
        return (248 - 247);
    }
    else {
        if (!((668 - 667) != OS9KuzeY) || !((508 - 507) != yDsrI1Fjk)) {
            return (722 - 721);
        }
        else {
            if (OS9KuzeY < yDsrI1Fjk) {
                WdgyPbs5 = xBSTUkCxR (OS9KuzeY, yDsrI1Fjk - (175 - 174));
            }
            else {
                WdgyPbs5 = xBSTUkCxR (OS9KuzeY, yDsrI1Fjk - (400 - 399)) + xBSTUkCxR (OS9KuzeY -yDsrI1Fjk, yDsrI1Fjk);
            }
        }
    }
    return WdgyPbs5;
}

int main () {
    int RJ96MU;
    int WdgyPbs5;
    int OS9KuzeY;
    int FtXHbLrRCa;
    int yDsrI1Fjk;
    scanf ("%d", &RJ96MU);
    {
        FtXHbLrRCa = (967 - 594) - (1141 - 768);
        for (; FtXHbLrRCa < RJ96MU;) {
            FtXHbLrRCa = (1517 - 752) - (1050 - 286);
            scanf ("%d %d", &OS9KuzeY, &yDsrI1Fjk);
            WdgyPbs5 = xBSTUkCxR (OS9KuzeY, yDsrI1Fjk);
            printf ("%d\n", WdgyPbs5);
        }
    }
    return (115 - 115);
}

