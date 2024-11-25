int main () {
    int w9cr23;
    int krgaEIexmsc;
    int len1;
    char FO2HX5M [(789 - 277)];
    char i8gnAHLQO3y [(1041 - 785)];
    char iALbej09 [(500 - 244)];
    int fzYgAkDG;
    int z4fXOr;
    int i;
    int J1Yq6EgJT2D;
    z4fXOr = (441 - 441);
    len1 = strlen (FO2HX5M);
    cin.getline (FO2HX5M, (1460 - 948));
    krgaEIexmsc = strlen (i8gnAHLQO3y);
    fzYgAkDG = strlen (iALbej09);
    cin.getline (i8gnAHLQO3y, (422 - 166));
    cin.getline (iALbej09, (875 - 619));
    for (i = (738 - 738); i <= len1 - krgaEIexmsc; i = i + 1) {
        J1Yq6EgJT2D = i;
        for (w9cr23 = (579 - 579); krgaEIexmsc > w9cr23; w9cr23 = w9cr23 + 1) {
            if (FO2HX5M[J1Yq6EgJT2D++] != i8gnAHLQO3y[w9cr23])
                break;
        }
        if (!(krgaEIexmsc != w9cr23) && !((537 - 537) != z4fXOr)) {
            int ii;
            for (ii = i; ii < i + fzYgAkDG; ii++) {
                FO2HX5M[ii] = iALbej09[ii - i];
            }
            z4fXOr = (447 - 446);
        }
    }
    for (i = (644 - 644); FO2HX5M[i] != '\0'; i = i + 1) {
        cout << FO2HX5M[i];
    }
    return (795 - 795);
}

