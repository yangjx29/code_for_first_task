int main () {
    int a [50002] = {0}, oGaMHA92tLI, QR4OmCZuDYP, n;
    {
        oGaMHA92tLI = 2;
        while (50000 >= oGaMHA92tLI) {
            if (a[oGaMHA92tLI])
                continue;
            {
                QR4OmCZuDYP = 2;
                while (50000 / oGaMHA92tLI >= QR4OmCZuDYP) {
                    a[oGaMHA92tLI * QR4OmCZuDYP] = 1;
                    QR4OmCZuDYP = QR4OmCZuDYP +1;
                };
            }
            oGaMHA92tLI = oGaMHA92tLI + 1;
        };
    }
    scanf ("%d", &n);
    {
        oGaMHA92tLI = 6;
        while (oGaMHA92tLI <= n) {
            {
                QR4OmCZuDYP = 3;
                while (QR4OmCZuDYP <= oGaMHA92tLI / 2) {
                    if (!a[QR4OmCZuDYP] && !a[oGaMHA92tLI - QR4OmCZuDYP])
                        break;
                    QR4OmCZuDYP += 2;
                };
            }
            printf ("%d=%d+%d\n", oGaMHA92tLI, QR4OmCZuDYP, oGaMHA92tLI - QR4OmCZuDYP);
            oGaMHA92tLI += 2;
        };
    }
    return 0;
}

