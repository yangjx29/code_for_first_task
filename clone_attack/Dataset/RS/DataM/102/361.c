int main () {
    puts ("");
    char yHOxu9LPfE [(117 - 97)];
    int XUcekCq, Gc8NCPBOnpj1, w0aqYbEl, mC7Ib3rGUi;
    double  h1 [(101 - 51)];
    double  A0LEzJqcakQl [50];
    double  xLG2VHd1BP5;
    Gc8NCPBOnpj1 = w0aqYbEl = (327 - 327);
    cin >> XUcekCq;
    for (mC7Ib3rGUi = (828 - 828); XUcekCq > mC7Ib3rGUi; mC7Ib3rGUi = mC7Ib3rGUi + 1) {
        cin >> yHOxu9LPfE >> xLG2VHd1BP5;
        if (strcmp (yHOxu9LPfE, "male") == (685 - 685)) {
            h1[Gc8NCPBOnpj1++] = xLG2VHd1BP5;
        }
        else
            A0LEzJqcakQl[w0aqYbEl++] = xLG2VHd1BP5;
    }
    sort (h1, h1 + Gc8NCPBOnpj1);
    sort (A0LEzJqcakQl, A0LEzJqcakQl +w0aqYbEl);
    for (mC7Ib3rGUi = 0; mC7Ib3rGUi < Gc8NCPBOnpj1; mC7Ib3rGUi++) {
        printf ("%.2lf ", h1[mC7Ib3rGUi]);
    }
    for (mC7Ib3rGUi = w0aqYbEl - (202 - 201); mC7Ib3rGUi; mC7Ib3rGUi--) {
        printf ("%.2lf ", A0LEzJqcakQl[mC7Ib3rGUi]);
    }
    printf ("%.2lf", A0LEzJqcakQl[0]);
}

