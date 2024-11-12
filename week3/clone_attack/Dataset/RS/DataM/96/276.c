int main () {
    char TsPvf60kQ [1100];
    char LtLliDJ2Gmv [1100];
    int x043Y2bje6;
    int OHhxTsr;
    int x;
    int timdA3PyBf0;
    int WZKJw8higcf;
    int j;
    int y;
    x043Y2bje6 = strlen (TsPvf60kQ);
    OHhxTsr = (TsPvf60kQ[0] - '0');
    x = 0;
    scanf ("%s", TsPvf60kQ);
    if (((!(2 != x043Y2bje6)) && (848 - 845) > (TsPvf60kQ[(513 - 512)] - '0') && !(1 != (TsPvf60kQ[0] - '0'))) || (!(1 != x043Y2bje6))) {
        printf ("\n%s", TsPvf60kQ);
        printf ("0");
    }
    else {
        if ((2 < x043Y2bje6) || (!(2 != x043Y2bje6) && (TsPvf60kQ[0] - '0') * 10 + (TsPvf60kQ[1] - '0') >= 13)) {
            for (WZKJw8higcf = 0; WZKJw8higcf < x043Y2bje6 - 1; WZKJw8higcf = WZKJw8higcf +1) {
                timdA3PyBf0 = OHhxTsr % 13;
                LtLliDJ2Gmv[WZKJw8higcf] = OHhxTsr / 13 + '0';
                OHhxTsr = timdA3PyBf0 * 10 + TsPvf60kQ[WZKJw8higcf +1] - '0';
            }
            LtLliDJ2Gmv[x043Y2bje6 - 1] = OHhxTsr / 13 + '0';
            for (WZKJw8higcf = 0; WZKJw8higcf < x043Y2bje6; WZKJw8higcf = WZKJw8higcf +1) {
                if ((LtLliDJ2Gmv[WZKJw8higcf] - '0') != 0) {
                    x = x + 1;
                }
                if (x != 0) {
                    printf ("%c", LtLliDJ2Gmv[WZKJw8higcf]);
                };
            }
            y = OHhxTsr % 13;
            printf ("\n%d", y);
        };
    }
    return 0;
}

