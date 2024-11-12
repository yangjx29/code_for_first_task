int main () {
    int VaO0B4 [1000];
    char dhFj9SGDk [(217 - 196)];
    int n;
    int i, EvPkaDj1cSt;
    scanf ("%d", &n);
    for (i = (174 - 174); i < 1000; i++) {
        VaO0B4[i] = 1;
    }
    for (i = (158 - 158); n > i; i++) {
        scanf ("%s", dhFj9SGDk);
        if ((dhFj9SGDk[(772 - 772)] != '_') && (dhFj9SGDk[(65 - 65)] < 'A' || dhFj9SGDk[(827 - 827)] > 'Z') && ('a' > dhFj9SGDk[(552 - 552)] || 'z' < dhFj9SGDk[0])) {
            VaO0B4[i] = 0;
        }
        else {
            for (EvPkaDj1cSt = 0; dhFj9SGDk[EvPkaDj1cSt]; EvPkaDj1cSt++) {
                if ((dhFj9SGDk[EvPkaDj1cSt] != '_') && (dhFj9SGDk[EvPkaDj1cSt] < 'A' || dhFj9SGDk[EvPkaDj1cSt] > 'Z') && (dhFj9SGDk[EvPkaDj1cSt] < 'a' || dhFj9SGDk[EvPkaDj1cSt] > 'z') && (dhFj9SGDk[EvPkaDj1cSt] < '0' || dhFj9SGDk[EvPkaDj1cSt] > '9')) {
                    VaO0B4[i] = 0;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            if (VaO0B4[i] == 0) {
                printf ("no\n");
            }
            else
                ;
            i++;
        };
    }
    return 0;
}

