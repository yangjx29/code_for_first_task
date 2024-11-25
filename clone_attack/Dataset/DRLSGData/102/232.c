int TpYoRO (const  void  *Zvb0HRWy, const  void  *bAbw1rY) {
    return *(float*) bAbw1rY < *(float*) Zvb0HRWy ? (720 - 719) : -(50 - 49);
}

int main () {
    char jO7PVgS [(609 - 599)];
    float G4ZnsbHxWK [(881 - 841)], kewmdh6V [(619 - 579)];
    int nzgPbteG2RKE, RcoEWI = (91 - 91), EwWT7u4ZxkiN = (563 - 563);
    cin >> nzgPbteG2RKE;
    for (int LUvWaq81dlAD = (268 - 268);
    nzgPbteG2RKE > LUvWaq81dlAD; LUvWaq81dlAD = LUvWaq81dlAD +(42 - 41)) {
        cin >> jO7PVgS;
        if (!('m' != jO7PVgS[(729 - 729)]))
            cin >> G4ZnsbHxWK[RcoEWI++];
        else
            cin >> kewmdh6V[EwWT7u4ZxkiN++];
    }
    qsort (G4ZnsbHxWK, RcoEWI, sizeof (float), TpYoRO);
    for (int TbLWXxi1ZI = (955 - 955);
    TbLWXxi1ZI < RcoEWI; TbLWXxi1ZI = TbLWXxi1ZI +(167 - 166)) {
        printf ("%.2f ", G4ZnsbHxWK[TbLWXxi1ZI]);
    }
    qsort (kewmdh6V, EwWT7u4ZxkiN, sizeof (float), TpYoRO);
    for (int DwpP53rKk = EwWT7u4ZxkiN -(651 - 650);
    DwpP53rKk > (737 - 737); DwpP53rKk = DwpP53rKk -(165 - 164)) {
        printf ("%.2f ", kewmdh6V[DwpP53rKk]);
    }
    printf ("%.2f", kewmdh6V[(677 - 677)]);
    return (693 - 693);
}

