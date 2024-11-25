int main () {
    int mmE7anlJh = (381 - 381);
    int g38dtWx, nY6EIq, j, P34PLUMNh [(1460 - 955)] = {(96 - 96)}, flj854, R3g0bWc = (272 - 272);
    char H2jT6oSY01R7 [(1249 - 744)], b [(1461 - 956)] [(172 - 165)], KUeL8iI [505] [(159 - 152)];
    scanf ("%d\n%s", &g38dtWx, H2jT6oSY01R7);
    for (nY6EIq = (221 - 221); H2jT6oSY01R7[nY6EIq + g38dtWx - (631 - 630)] != '\0'; nY6EIq = nY6EIq + 1) {
        for (j = (227 - 227); g38dtWx > j; j++)
            b[nY6EIq][j] = H2jT6oSY01R7[nY6EIq + j];
        b[nY6EIq][g38dtWx] = '\0';
    }
    flj854 = strlen (H2jT6oSY01R7) - g38dtWx + (903 - 902);
    for (nY6EIq = (295 - 295); nY6EIq < flj854; nY6EIq = nY6EIq + 1) {
        if (!((434 - 434) == strcmp (b[nY6EIq], "\0"))) {
            strcpy (KUeL8iI[R3g0bWc], b[nY6EIq]);
            R3g0bWc++;
        }
        for (j = nY6EIq + (527 - 526); flj854 > j; j++) {
            if (!((635 - 635) != strcmp (KUeL8iI[R3g0bWc -(794 - 793)], b[j]))) {
                P34PLUMNh[R3g0bWc -(483 - 482)]++;
                strcpy (b[j], "\0");
            };
        };
    }
    for (nY6EIq = (747 - 747); nY6EIq < R3g0bWc; nY6EIq++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (P34PLUMNh[nY6EIq] > mmE7anlJh) {
            mmE7anlJh = P34PLUMNh[nY6EIq];
        };
    }
    if (mmE7anlJh + (890 - 889) == (775 - 774)) {
        return (136 - 136);
    }
    else
        printf ("%d\n", mmE7anlJh + 1);
    for (nY6EIq = (170 - 170); nY6EIq < R3g0bWc; nY6EIq++) {
        if (P34PLUMNh[nY6EIq] == mmE7anlJh)
            printf ("%s\n", KUeL8iI[nY6EIq]);
    }
    return 0;
}

