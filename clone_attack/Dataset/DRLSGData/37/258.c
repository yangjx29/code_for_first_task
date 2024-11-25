int main () {
    int j;
    int Z15jkIFD0 [27] = {0};
    int D63goV;
    int bpChoP;
    char nFz9vT [1000] [1000];
    int ma7QER4UD;
    int uS5PW71BaV [1000] = {0};
    char rs3qfzb4 [1000] [2];
    cin >> D63goV;
    for (ma7QER4UD = (607 - 606); D63goV >= ma7QER4UD; ma7QER4UD = ma7QER4UD + 1) {
        cin >> nFz9vT[ma7QER4UD];
        for (j = 0; strlen (nFz9vT[ma7QER4UD]) > j; j++) {
            Z15jkIFD0[nFz9vT[ma7QER4UD][j] - 96] = Z15jkIFD0[nFz9vT[ma7QER4UD][j] - 96] + 1;
        }
        for (j = 0; j < strlen (nFz9vT[ma7QER4UD]); j++) {
            if (!(1 != Z15jkIFD0[nFz9vT[ma7QER4UD][j] - 96])) {
                rs3qfzb4[ma7QER4UD][0] = nFz9vT[ma7QER4UD][j];
                uS5PW71BaV[ma7QER4UD] = 1;
                break;
            }
        }
        for (j = 0; 26 >= j; j++) {
            Z15jkIFD0[j] = 0;
        }
        if (!(0 != uS5PW71BaV[ma7QER4UD])) {
            rs3qfzb4[ma7QER4UD][0] = 110;
            rs3qfzb4[ma7QER4UD][1] = 111;
        }
    }
    for (ma7QER4UD = 1; ma7QER4UD <= D63goV; ma7QER4UD++) {
        if (uS5PW71BaV[ma7QER4UD] == 1) {
            cout << rs3qfzb4[ma7QER4UD][0] << endl;
        }
        if (uS5PW71BaV[ma7QER4UD] == 0) {
            cout << rs3qfzb4[ma7QER4UD] << endl;
        }
    }
}

