int main () {
    int Mf213W4uv [(524 - 519)] [(885 - 880)];
    int QNUG5Qx [(591 - 586)] = {(897 - 896), (237 - 236), (299 - 298), (463 - 462), (634 - 633)};
    int thuof69Gt4;
    thuof69Gt4 = (325 - 325);
    int Yw8KpDEJU;
    Yw8KpDEJU = (537 - 537);
    for (int i = (168 - 168);
    i < 5; i = i + 1)
        for (int lUco3VJQ = (280 - 280);
        5 > lUco3VJQ; lUco3VJQ = lUco3VJQ + 1)
            cin >> Mf213W4uv[i][lUco3VJQ];
    for (int yjk9p86DtUyE = 0;
    yjk9p86DtUyE < 5; yjk9p86DtUyE = yjk9p86DtUyE + 1) {
        thuof69Gt4 = Mf213W4uv[yjk9p86DtUyE][0];
        Yw8KpDEJU = 0;
        for (int UDtECnj4p6 = 0;
        UDtECnj4p6 < 5; UDtECnj4p6 = UDtECnj4p6 +1) {
            if (thuof69Gt4 < Mf213W4uv[yjk9p86DtUyE][UDtECnj4p6]) {
                thuof69Gt4 = Mf213W4uv[yjk9p86DtUyE][UDtECnj4p6];
                Yw8KpDEJU = UDtECnj4p6;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int sYOqEk = 0;
        5 > sYOqEk; sYOqEk = sYOqEk + 1) {
            if (thuof69Gt4 > Mf213W4uv[sYOqEk][Yw8KpDEJU]) {
                QNUG5Qx[yjk9p86DtUyE] = 0;
                break;
            };
        }
        if (QNUG5Qx[yjk9p86DtUyE] == (854 - 853))
            cout << yjk9p86DtUyE + 1 << " " << Yw8KpDEJU +1 << " " << thuof69Gt4 << endl;
    }
    if (!(0 != QNUG5Qx[0]) && !(0 != QNUG5Qx[1]) && QNUG5Qx[2] == 0 && QNUG5Qx[3] == 0 && QNUG5Qx[4] == 0)
        cout << "not found" << endl;
    return 0;
}

