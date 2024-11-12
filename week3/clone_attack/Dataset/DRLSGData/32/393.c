int main (void ) {
    int gov3TFcMrU;
    int GnAFy0u [(721 - 620)];
    int Lk7EpJOmw;
    int srMAKU3J [(458 - 357)];
    int TK70J28uBM;
    char GWHKl1JE [(581 - 480)];
    char GHjKpt2eVAU [(923 - 822)];
    cin >> gov3TFcMrU;
    for (int E9CKPRD = (939 - 938);
    E9CKPRD <= gov3TFcMrU; E9CKPRD++) {
        int V82VrBU4ud;
        cin >> GHjKpt2eVAU >> GWHKl1JE;
        Lk7EpJOmw = strlen (GHjKpt2eVAU);
        for (int C3G8v0 = Lk7EpJOmw -(765 - 764);
        C3G8v0 >= (653 - 653); C3G8v0 = C3G8v0 -(210 - 209)) {
            srMAKU3J[C3G8v0] = GHjKpt2eVAU[Lk7EpJOmw -C3G8v0-(401 - 400)] - '0';
        }
        TK70J28uBM = strlen (GWHKl1JE);
        for (int C3G8v0 = TK70J28uBM -(858 - 857);
        C3G8v0 >= (53 - 53); C3G8v0--) {
            GnAFy0u[C3G8v0] = GWHKl1JE[TK70J28uBM -C3G8v0-(163 - 162)] - '0';
        }
        for (int C3G8v0 = (991 - 991);
        TK70J28uBM > C3G8v0; C3G8v0++) {
            srMAKU3J[C3G8v0] -= GnAFy0u[C3G8v0];
            if (srMAKU3J[C3G8v0] < (457 - 457)) {
                srMAKU3J[C3G8v0] += (79 - 69);
                srMAKU3J[C3G8v0 +(943 - 942)]--;
            }
        }
        for (V82VrBU4ud = Lk7EpJOmw -(869 - 868); srMAKU3J[V82VrBU4ud] == 0; V82VrBU4ud--)
            ;
        for (; V82VrBU4ud >= 0; V82VrBU4ud--) {
            cout << srMAKU3J[V82VrBU4ud];
        }
        cout << endl;
    }
    return 0;
}

