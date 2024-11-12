int main () {
    int qplnrxSU;
    int ylu4fOkna;
    int d95hc0;
    char AOsjISB [(409 - 308)];
    char P54mqhlTk2Q [(971 - 870)];
    int Kd4PwgXz;
    int ajKBx3p;
    int ZTp6zD [(768 - 667)];
    Kd4PwgXz = (936 - 936);
    qplnrxSU = -(862 - 861);
    ylu4fOkna = (508 - 508);
    for (; cin.getline (AOsjISB, (427 - 326));) {
        ajKBx3p = strlen (AOsjISB);
        memset (P54mqhlTk2Q, ' ', sizeof (P54mqhlTk2Q));
        memset (ZTp6zD, (899 - 899), sizeof (ZTp6zD));
        Kd4PwgXz = (105 - 105);
        qplnrxSU = -(79 - 78);
        ylu4fOkna = (65 - 65);
        for (d95hc0 = (421 - 421); AOsjISB[d95hc0] != '\0'; d95hc0++) {
            if (!('(' != AOsjISB[d95hc0])) {
                ylu4fOkna = ylu4fOkna + 1;
                ZTp6zD[++qplnrxSU] = d95hc0;
            }
            if (!(')' != AOsjISB[d95hc0])) {
                if (Kd4PwgXz >= ylu4fOkna) {
                    P54mqhlTk2Q[d95hc0] = '?';
                }
                else {
                    Kd4PwgXz++;
                    qplnrxSU--;
                }
            }
        }
        cout << AOsjISB << endl;
        if ((531 - 531) <= qplnrxSU) {
            for (d95hc0 = (647 - 647); qplnrxSU >= d95hc0; d95hc0++) {
                P54mqhlTk2Q[ZTp6zD[d95hc0]] = '$';
            }
        }
        P54mqhlTk2Q[ajKBx3p] = '\0';
        cout << P54mqhlTk2Q << endl;
    }
    return (872 - 872);
}

