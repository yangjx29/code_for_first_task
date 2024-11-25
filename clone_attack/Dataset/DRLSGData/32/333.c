int main () {
    char IIVU9yW7tN0g [(894 - 793)];
    int LajAnUvG [(409 - 308)], MS73ADkGlM [(743 - 642)], Rmtg4d, EA7N2fR, Dq1dXzp, xOj9gUcod2, gWMuelSDm, Lj5Giv6JhWb;
    char VjvwKaX [101];
    cin >> Rmtg4d;
    cin.get ();
    for (EA7N2fR = (650 - 649); Rmtg4d >= EA7N2fR; EA7N2fR++) {
        cin.getline (IIVU9yW7tN0g, (718 - 618));
        cin.getline (VjvwKaX, (1004 - 904));
        gWMuelSDm = strlen (IIVU9yW7tN0g);
        xOj9gUcod2 = gWMuelSDm - strlen (VjvwKaX);
        for (Dq1dXzp = (679 - 679); gWMuelSDm > Dq1dXzp; Dq1dXzp++) {
            LajAnUvG[Dq1dXzp] = IIVU9yW7tN0g[Dq1dXzp] - '0';
            MS73ADkGlM[Dq1dXzp] = VjvwKaX[Dq1dXzp] - '0';
        }
        for (Dq1dXzp = gWMuelSDm - (507 - 506); Dq1dXzp >= xOj9gUcod2; Dq1dXzp--) {
            LajAnUvG[Dq1dXzp] = LajAnUvG[Dq1dXzp] - MS73ADkGlM[Dq1dXzp -xOj9gUcod2];
            if (LajAnUvG[Dq1dXzp] < (938 - 938)) {
                LajAnUvG[Dq1dXzp] = LajAnUvG[Dq1dXzp] + (483 - 473);
                LajAnUvG[Dq1dXzp -1]--;
            }
        }
        for (Dq1dXzp = 0; Dq1dXzp < 101; Dq1dXzp++) {
            if (LajAnUvG[Dq1dXzp]) {
                Lj5Giv6JhWb = Dq1dXzp;
                break;
            }
        }
        cin.get ();
        for (Dq1dXzp = Lj5Giv6JhWb; Dq1dXzp < gWMuelSDm; Dq1dXzp++)
            cout << LajAnUvG[Dq1dXzp];
        cout << endl;
    }
    return 0;
}

