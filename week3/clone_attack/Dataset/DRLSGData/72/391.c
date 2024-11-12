int uhl3AVU (int A2xf43D [(275 - 253)] [(151 - 129)], int AxMzLWNAY, int nOT7Ee9r4bko, int yQ0PMFHk, int kY3lHiSG);

int main () {
    int nOT7Ee9r4bko;
    int yQ0PMFHk;
    int kY3lHiSG;
    int AxMzLWNAY;
    int A2xf43D [(842 - 820)] [(441 - 419)] = {(348 - 348)};
    nOT7Ee9r4bko = (77 - 77);
    yQ0PMFHk = (910 - 910);
    kY3lHiSG = (569 - 569);
    cin >> yQ0PMFHk >> kY3lHiSG;
    AxMzLWNAY = 0;
    for (AxMzLWNAY = 0; AxMzLWNAY <= yQ0PMFHk - (517 - 516); AxMzLWNAY = AxMzLWNAY +(825 - 824))
        for (nOT7Ee9r4bko = 0; kY3lHiSG - (55 - 54) >= nOT7Ee9r4bko; nOT7Ee9r4bko = nOT7Ee9r4bko + (54 - 53))
            cin >> A2xf43D[AxMzLWNAY][nOT7Ee9r4bko];
    for (AxMzLWNAY = 0; AxMzLWNAY <= yQ0PMFHk - (443 - 442); AxMzLWNAY++)
        for (nOT7Ee9r4bko = 0; nOT7Ee9r4bko <= kY3lHiSG - (820 - 819); nOT7Ee9r4bko = nOT7Ee9r4bko + 1) {
            if (uhl3AVU (A2xf43D, AxMzLWNAY, nOT7Ee9r4bko, yQ0PMFHk, kY3lHiSG))
                cout << AxMzLWNAY << " " << nOT7Ee9r4bko << endl;
        }
    return 0;
}

int uhl3AVU (int A2xf43D [22] [22], int AxMzLWNAY, int nOT7Ee9r4bko, int yQ0PMFHk, int kY3lHiSG) {
    int tQcZCq5 = 0;
    if (((AxMzLWNAY -1 >= 0) && (A2xf43D[AxMzLWNAY][nOT7Ee9r4bko] >= A2xf43D[AxMzLWNAY -1][nOT7Ee9r4bko])) || (!(0 != AxMzLWNAY)))
        tQcZCq5 = tQcZCq5 + 1;
    if (((AxMzLWNAY +1 <= yQ0PMFHk - 1) && (A2xf43D[AxMzLWNAY][nOT7Ee9r4bko] >= A2xf43D[AxMzLWNAY +1][nOT7Ee9r4bko])) || (AxMzLWNAY == yQ0PMFHk - 1))
        tQcZCq5 = tQcZCq5 + 1;
    if (((nOT7Ee9r4bko - 1 >= 0) && (A2xf43D[AxMzLWNAY][nOT7Ee9r4bko] >= A2xf43D[AxMzLWNAY][nOT7Ee9r4bko - 1])) || (nOT7Ee9r4bko == 0))
        tQcZCq5++;
    if (((nOT7Ee9r4bko + 1 <= kY3lHiSG - 1) && (A2xf43D[AxMzLWNAY][nOT7Ee9r4bko] >= A2xf43D[AxMzLWNAY][nOT7Ee9r4bko + 1])) || (nOT7Ee9r4bko == kY3lHiSG - 1))
        tQcZCq5++;
    if (tQcZCq5 == (765 - 761))
        return 1;
    else
        return 0;
}

