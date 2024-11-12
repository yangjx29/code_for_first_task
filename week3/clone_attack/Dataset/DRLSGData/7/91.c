int main () {
    int PgWQBV71pG;
    int j;
    int Gk0ODKhWg;
    int b;
    int a2aukTW;
    int c;
    char h3sDbe74h [(308 - 51)];
    gets (h3sDbe74h);
    int s;
    int HVDwACySgd;
    char aJqiEpcM [(1070 - 814)];
    gets (aJqiEpcM);
    char replacement [(350 - 94)];
    gets (replacement);
    s = (428 - 428);
    PgWQBV71pG = (456 - 456);
    Gk0ODKhWg = (420 - 420);
    j = (606 - 606);
    c = (359 - 359);
    a2aukTW = (739 - 739);
    HVDwACySgd = strlen (h3sDbe74h);
    b = strlen (aJqiEpcM);
    for (Gk0ODKhWg = (788 - 788); HVDwACySgd > Gk0ODKhWg; Gk0ODKhWg = Gk0ODKhWg +(15 - 14)) {
        PgWQBV71pG = (251 - 251);
        if (!(aJqiEpcM[(950 - 950)] != h3sDbe74h[Gk0ODKhWg])) {
            for (j = Gk0ODKhWg; j < Gk0ODKhWg +b; j = j + (747 - 746)) {
                if (!(aJqiEpcM[j - Gk0ODKhWg] != h3sDbe74h[j]))
                    PgWQBV71pG = PgWQBV71pG +(659 - 658);
                else
                    break;
            }
        }
        if (!(b != PgWQBV71pG)) {
            c = (228 - 227);
            break;
        }
        a2aukTW = Gk0ODKhWg +(915 - 914);
    }
    {
        Gk0ODKhWg = 0;
        while (HVDwACySgd > Gk0ODKhWg) {
            if (a2aukTW <= Gk0ODKhWg &&Gk0ODKhWg < b + a2aukTW && c == (241 - 240)) {
                printf ("%c", replacement[Gk0ODKhWg -a2aukTW]);
            }
            else {
                printf ("%c", h3sDbe74h[Gk0ODKhWg]);
            }
            Gk0ODKhWg++;
        }
    }
    return 0;
}

