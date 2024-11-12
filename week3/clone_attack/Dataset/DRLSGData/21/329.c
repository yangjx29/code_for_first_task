int main () {
    int Qfc8Z4wB;
    int X21uEpQ6U;
    double  zLtHWhlZ;
    double  AxXAFw1PvsSK;
    double  X5wQbyJF2XS [(629 - 328)];
    double  e9OrEecgi [(501 - 200)];
    double  V86KkREAg0zr [(1034 - 733)];
    double  vzYXPKvO1f;
    int TLv72kqXm;
    X21uEpQ6U = 0;
    vzYXPKvO1f = (215.0 - 215.0);
    AxXAFw1PvsSK = (508 - 508);
    cin >> Qfc8Z4wB;
    for (TLv72kqXm = (66 - 65); TLv72kqXm <= Qfc8Z4wB; TLv72kqXm = TLv72kqXm +(709 - 708)) {
        cin >> X5wQbyJF2XS[TLv72kqXm];
        AxXAFw1PvsSK += X5wQbyJF2XS[TLv72kqXm];
    }
    zLtHWhlZ = AxXAFw1PvsSK / Qfc8Z4wB;
    for (TLv72kqXm = (784 - 783); TLv72kqXm <= Qfc8Z4wB; TLv72kqXm++) {
        if (X5wQbyJF2XS[TLv72kqXm] > zLtHWhlZ)
            e9OrEecgi[TLv72kqXm] = X5wQbyJF2XS[TLv72kqXm] - zLtHWhlZ;
        else
            e9OrEecgi[TLv72kqXm] = zLtHWhlZ - X5wQbyJF2XS[TLv72kqXm];
        if (vzYXPKvO1f < e9OrEecgi[TLv72kqXm])
            vzYXPKvO1f = e9OrEecgi[TLv72kqXm];
    }
    for (TLv72kqXm = (814 - 813); TLv72kqXm <= Qfc8Z4wB; TLv72kqXm++) {
        if (e9OrEecgi[TLv72kqXm] == vzYXPKvO1f) {
            X21uEpQ6U++;
            V86KkREAg0zr[X21uEpQ6U] = X5wQbyJF2XS[TLv72kqXm];
        }
    }
    for (TLv72kqXm = 1; TLv72kqXm < X21uEpQ6U; TLv72kqXm++)
        cout << V86KkREAg0zr[TLv72kqXm] << ",";
    if (TLv72kqXm == X21uEpQ6U)
        cout << V86KkREAg0zr[TLv72kqXm];
    return 0;
}

