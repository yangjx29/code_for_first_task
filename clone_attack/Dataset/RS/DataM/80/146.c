int main (void ) {
    int xRcQMq6rfpA9 [12] = {(887 - 856), 28, 31, (984 - 954), 31, (699 - 669), 31, 31, (198 - 168), 31, (462 - 432), 31};
    int XzBREeco [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sy, sm, sd, JZNpj2hE7OBr = (876 - 876);
    int ey, em, N9qIj4nmGzg, e = 0;
    int d;
    int TA4jOL3;
    scanf ("%d %d %d", &sy, &sm, &sd);
    if ((sy % 4 == 0 && !(0 == sy % 100)) || (!(0 != sy % 400))) {
        for (TA4jOL3 = 0; sm - 1 > TA4jOL3; TA4jOL3 = TA4jOL3 +1)
            JZNpj2hE7OBr += XzBREeco[TA4jOL3];
        JZNpj2hE7OBr = JZNpj2hE7OBr +sd;
    }
    else {
        {
            TA4jOL3 = 0;
            while (sm - 1 > TA4jOL3) {
                JZNpj2hE7OBr += xRcQMq6rfpA9[TA4jOL3];
                TA4jOL3++;
            };
        }
        JZNpj2hE7OBr += sd;
    }
    scanf ("%d %d %d", &ey, &em, &N9qIj4nmGzg);
    if ((ey % 4 == 0 && !(0 == ey % 100)) || (!(0 != ey % 400))) {
        {
            TA4jOL3 = 0;
            while (TA4jOL3 < em - 1) {
                e += XzBREeco[TA4jOL3];
                TA4jOL3++;
            };
        }
        e += N9qIj4nmGzg;
    }
    else {
        for (TA4jOL3 = 0; TA4jOL3 < em - 1; TA4jOL3 = TA4jOL3 +1)
            e += xRcQMq6rfpA9[TA4jOL3];
        e += N9qIj4nmGzg;
    }
    for (TA4jOL3 = sy; TA4jOL3 < ey; TA4jOL3++) {
        if ((TA4jOL3 % 4 == 0 && TA4jOL3 % 100 != 0) || (TA4jOL3 % 400 == 0))
            e = e + 366;
        else
            e = e + 365;
    }
    printf ("%d", e - JZNpj2hE7OBr);
    return 0;
}

