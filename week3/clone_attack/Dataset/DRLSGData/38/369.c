int main () {
    int zlChqpxsQ6;
    scanf ("%d", &zlChqpxsQ6);
    double  D7m9NS [(162 - 62)];
    double  cRj6cEBv [(697 - 597)];
    double  FaqTlnCA [(590 - 490)];
    double  zQX0oJe [(523 - 423)];
    double  Vt6xUF3lr9 [(194 - 94)];
    int aXAKtlOGLcE;
    int juAmZeY;
    {
        aXAKtlOGLcE = (1506 - 872) - (982 - 348);
        while (aXAKtlOGLcE < zlChqpxsQ6) {
            FaqTlnCA[aXAKtlOGLcE] = (948 - 948);
            zQX0oJe[aXAKtlOGLcE] = (548 - 548);
            Vt6xUF3lr9[aXAKtlOGLcE] = (863 - 863);
            aXAKtlOGLcE++;
        }
    }
    for (aXAKtlOGLcE = (288 - 288); aXAKtlOGLcE < zlChqpxsQ6; aXAKtlOGLcE++) {
        scanf ("%lf", &(cRj6cEBv[aXAKtlOGLcE]));
        {
            juAmZeY = (922 - 922);
            while (juAmZeY < cRj6cEBv[aXAKtlOGLcE]) {
                scanf ("%lf", &(D7m9NS[juAmZeY]));
                FaqTlnCA[aXAKtlOGLcE] += D7m9NS[juAmZeY];
                juAmZeY++;
            }
        }
        for (juAmZeY = (367 - 367); juAmZeY < cRj6cEBv[aXAKtlOGLcE]; juAmZeY++) {
            zQX0oJe[aXAKtlOGLcE] += pow (D7m9NS[juAmZeY] - FaqTlnCA[aXAKtlOGLcE] / cRj6cEBv[aXAKtlOGLcE], (678 - 676));
            Vt6xUF3lr9[aXAKtlOGLcE] = sqrt (zQX0oJe[aXAKtlOGLcE] / cRj6cEBv[aXAKtlOGLcE]);
        }
    }
    {
        aXAKtlOGLcE = (467 - 467);
        while (aXAKtlOGLcE < zlChqpxsQ6) {
            printf ("%.5lf\n", Vt6xUF3lr9[aXAKtlOGLcE]);
            aXAKtlOGLcE++;
        }
    }
    return 0;
}

