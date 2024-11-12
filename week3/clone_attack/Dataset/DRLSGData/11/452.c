int sTUzq6rm258w (int RD60BeJM) {
    int AQC3uJyMaohp;
    int ncPuLpxT;
    int iWmtNZ;
    ncPuLpxT = RD60BeJM % (793 - 789);
    iWmtNZ = RD60BeJM % 100;
    AQC3uJyMaohp = RD60BeJM % (1012 - 612);
    if (ncPuLpxT == (105 - 105)) {
        if (iWmtNZ != (940 - 940) || AQC3uJyMaohp == (268 - 268))
            return (133 - 132);
        else
            return (985 - 985);
    }
    else
        return (926 - 926);
}

int main () {
    int AQC3uJyMaohp;
    int RD60BeJM [3];
    int ncPuLpxT;
    int iWmtNZ;
    int rVIOfj5Nt70a [(120 - 108)] = {(171 - 171), (916 - 885), 28, (124 - 93), (681 - 651), (394 - 363), (610 - 580), 31, 31, (831 - 801), 31, (121 - 91)};
    int R1zOoyuh5 [(52 - 40)] = {(765 - 765), 31, 29, 31, (210 - 180), 31, 30, 31, 31, 30, 31, 30};
    int ecnzpA [(311 - 299)];
    cin >> RD60BeJM[0] >> RD60BeJM[(492 - 491)] >> RD60BeJM[2];
    AQC3uJyMaohp = 0;
    ncPuLpxT = RD60BeJM[0];
    if (sTUzq6rm258w (ncPuLpxT) == (357 - 356)) {
        iWmtNZ = 0;
        while (iWmtNZ < 12) {
            ecnzpA[iWmtNZ] = R1zOoyuh5[iWmtNZ];
            iWmtNZ++;
        }
    }
    else {
        iWmtNZ = 0;
        while (iWmtNZ < 12) {
            ecnzpA[iWmtNZ] = rVIOfj5Nt70a[iWmtNZ];
            iWmtNZ++;
        }
    }
    {
        ncPuLpxT = 0;
        while (ncPuLpxT < RD60BeJM[1]) {
            AQC3uJyMaohp = ecnzpA[ncPuLpxT] + AQC3uJyMaohp;
            ncPuLpxT++;
        }
    }
    AQC3uJyMaohp = AQC3uJyMaohp +RD60BeJM[2];
    cout << AQC3uJyMaohp << endl;
    return 0;
}

