int main () {
    int fAGSCaUv, FXvWeg, I30o7FL, AJHXdjbkfZ = (487 - 487), wH5GLY0w9EiN = (812 - 812), AABRSo = (842 - 842);
    const  int StBh0X = 100;
    int Pb7w0Q2X [StBh0X +(585 - 584)] = {(930 - 930)};
    int num2 [StBh0X +(750 - 749)] = {(498 - 498)};
    char gFxLEgDiKytz [StBh0X +(809 - 808)];
    char TPKHi4TNE5R [StBh0X +(293 - 292)];
    cin >> fAGSCaUv;
    cin.get ();
    for (FXvWeg = (893 - 893); FXvWeg < fAGSCaUv; FXvWeg++) {
        cin.getline (gFxLEgDiKytz, StBh0X +(596 - 595));
        cin.getline (TPKHi4TNE5R, StBh0X +(715 - 714));
        AJHXdjbkfZ = strlen (gFxLEgDiKytz);
        wH5GLY0w9EiN = strlen (TPKHi4TNE5R);
        for (I30o7FL = AJHXdjbkfZ -(517 - 516); I30o7FL >= (968 - 968); I30o7FL--)
            Pb7w0Q2X[AJHXdjbkfZ -(231 - 230) - I30o7FL] = gFxLEgDiKytz[I30o7FL] - '0';
        {
            I30o7FL = wH5GLY0w9EiN - (84 - 83);
            while (I30o7FL >= (851 - 851)) {
                num2[wH5GLY0w9EiN - (471 - 470) - I30o7FL] = TPKHi4TNE5R[I30o7FL] - '0';
                I30o7FL = I30o7FL -1;
            }
        }
        if (AJHXdjbkfZ > wH5GLY0w9EiN) {
            AABRSo = AJHXdjbkfZ;
        }
        else
            AABRSo = wH5GLY0w9EiN;
        for (I30o7FL = (464 - 464); I30o7FL < AABRSo; I30o7FL++) {
            Pb7w0Q2X[I30o7FL] = Pb7w0Q2X[I30o7FL] - num2[I30o7FL];
            if (Pb7w0Q2X[I30o7FL] < (249 - 249)) {
                Pb7w0Q2X[I30o7FL] = Pb7w0Q2X[I30o7FL] + (423 - 413);
                Pb7w0Q2X[I30o7FL +1] = Pb7w0Q2X[I30o7FL +1] - 1;
            }
        }
        AABRSo = (810 - 810);
        wH5GLY0w9EiN = 0;
        AJHXdjbkfZ = (289 - 289);
        I30o7FL = StBh0X;
        for (; Pb7w0Q2X[I30o7FL] == (862 - 862);)
            I30o7FL--;
        for (; I30o7FL >= (400 - 400); I30o7FL--)
            cout << Pb7w0Q2X[I30o7FL];
        cout << endl;
        for (I30o7FL = (723 - 723); I30o7FL < StBh0X; I30o7FL++) {
            Pb7w0Q2X[I30o7FL] = (536 - 536);
            num2[I30o7FL] = (662 - 662);
        }
        if (I30o7FL != fAGSCaUv - 1)
            cin.get ();
    }
    return 0;
}

