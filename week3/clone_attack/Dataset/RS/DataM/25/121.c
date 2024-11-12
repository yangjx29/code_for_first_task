int EI2d64M1cUuv [(176 - 71)] = {(65 - 65)};

void  sHnh92X7EmP () {
    int REPLM9n;
    int Bbu1XSyhvUE;
    int DosQ1jfSAdm9 [(737 - 632)] = {0};
    for (REPLM9n = (564 - 460); REPLM9n >= 0; REPLM9n--)
        if (EI2d64M1cUuv[REPLM9n] != 0)
            break;
    for (Bbu1XSyhvUE = 0; REPLM9n >= Bbu1XSyhvUE; Bbu1XSyhvUE = Bbu1XSyhvUE +1) {
        DosQ1jfSAdm9[Bbu1XSyhvUE] = EI2d64M1cUuv[REPLM9n -Bbu1XSyhvUE];
        DosQ1jfSAdm9[Bbu1XSyhvUE] = DosQ1jfSAdm9[Bbu1XSyhvUE] * 2;
    }
    for (Bbu1XSyhvUE = 0; Bbu1XSyhvUE <= REPLM9n; Bbu1XSyhvUE++) {
        DosQ1jfSAdm9[Bbu1XSyhvUE +(804 - 803)] += DosQ1jfSAdm9[Bbu1XSyhvUE] / 10;
        DosQ1jfSAdm9[Bbu1XSyhvUE] = DosQ1jfSAdm9[Bbu1XSyhvUE] % 10;
    }
    if (DosQ1jfSAdm9[REPLM9n +(480 - 479)] == 0) {
        for (Bbu1XSyhvUE = 0; Bbu1XSyhvUE <= REPLM9n; Bbu1XSyhvUE++)
            EI2d64M1cUuv[Bbu1XSyhvUE] = DosQ1jfSAdm9[REPLM9n -Bbu1XSyhvUE];
    }
    else
        for (Bbu1XSyhvUE = 0; Bbu1XSyhvUE <= REPLM9n +(412 - 411); Bbu1XSyhvUE++)
            EI2d64M1cUuv[Bbu1XSyhvUE] = DosQ1jfSAdm9[REPLM9n +(483 - 482) - Bbu1XSyhvUE];
}

int main () {
    int REPLM9n;
    int Z8LU2Xjz;
    int X5xe7JlN;
    cin >> Z8LU2Xjz;
    EI2d64M1cUuv[0] = 1;
    for (REPLM9n = 0; REPLM9n < Z8LU2Xjz; REPLM9n = REPLM9n +1)
        sHnh92X7EmP ();
    for (X5xe7JlN = (827 - 723); EI2d64M1cUuv[X5xe7JlN] == 0; X5xe7JlN--)
        ;
    for (REPLM9n = 0; REPLM9n <= X5xe7JlN; REPLM9n = REPLM9n +1)
        cout << EI2d64M1cUuv[REPLM9n];
    return 0;
}

