int main () {
    int ZS8lptQyi;
    int uINha8;
    int j;
    int Iicmo6vS;
    int a [25];
    int PxNrOkK8AE6 [25];
    PxNrOkK8AE6[ZS8lptQyi -1] = 1;
    scanf ("%d", &ZS8lptQyi);
    for (uINha8 = (274 - 274); uINha8 < ZS8lptQyi; uINha8++)
        scanf ("%d", &a[uINha8]);
    for (uINha8 = 1; uINha8 < ZS8lptQyi; uINha8++)
        PxNrOkK8AE6[uINha8] = 1;
    for (uINha8 = ZS8lptQyi -2; uINha8 >= 0; uINha8--)
        for (j = ZS8lptQyi -1; uINha8 + 1 <= j; j--)
            if (a[uINha8] >= a[j] && PxNrOkK8AE6[j] + 1 >= PxNrOkK8AE6[uINha8])
                PxNrOkK8AE6[uINha8] = PxNrOkK8AE6[j] + 1;
    Iicmo6vS = PxNrOkK8AE6[0];
    for (uINha8 = 1; uINha8 < ZS8lptQyi; uINha8++)
        if (PxNrOkK8AE6[uINha8] > Iicmo6vS)
            Iicmo6vS = PxNrOkK8AE6[uINha8];
    printf ("%d", Iicmo6vS);
}

