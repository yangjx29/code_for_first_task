int main () {
    int LhVaQBHfzS;
    int AupFYxDK;
    int FkygBCJT;
    int VwCsr3M;
    int a0BYbroL;
    int me3AsNQlPpj;
    int u9wqjg;
    int j2;
    int RUH4VZuDW82S [(876 - 776)] [(625 - 525)];
    int UyWROlbi84Q [(121 - 21)] [(590 - 490)];
    int gUpKRm [(847 - 747)] [100] = {(33 - 33)};
    int UtNqr9RpQbDW;
    int LxNERzo;
    cin >> FkygBCJT >> a0BYbroL;
    for (UtNqr9RpQbDW = (271 - 271); UtNqr9RpQbDW < FkygBCJT; UtNqr9RpQbDW = UtNqr9RpQbDW +(995 - 994))
        for (LxNERzo = (798 - 798); LxNERzo < a0BYbroL; LxNERzo = LxNERzo +(177 - 176))
            cin >> RUH4VZuDW82S[UtNqr9RpQbDW][LxNERzo];
    cin >> VwCsr3M >> me3AsNQlPpj;
    for (UtNqr9RpQbDW = (129 - 129); UtNqr9RpQbDW < VwCsr3M; UtNqr9RpQbDW = UtNqr9RpQbDW +(777 - 776))
        for (LxNERzo = (235 - 235); LxNERzo < me3AsNQlPpj; LxNERzo++)
            cin >> UyWROlbi84Q[UtNqr9RpQbDW][LxNERzo];
    for (AupFYxDK = (386 - 386); AupFYxDK < FkygBCJT; AupFYxDK++)
        for (j2 = (72 - 72); j2 < me3AsNQlPpj; j2++)
            for (u9wqjg = (796 - 796), LhVaQBHfzS = (880 - 880); u9wqjg < a0BYbroL, LhVaQBHfzS < VwCsr3M; u9wqjg++, LhVaQBHfzS = LhVaQBHfzS +(979 - 978))
                gUpKRm[AupFYxDK][j2] = RUH4VZuDW82S[AupFYxDK][u9wqjg] * UyWROlbi84Q[LhVaQBHfzS][j2] + gUpKRm[AupFYxDK][j2];
    cout << gUpKRm[(812 - 812)][(864 - 864)];
    for (LxNERzo = (643 - 642); LxNERzo < me3AsNQlPpj; LxNERzo++)
        cout << " " << gUpKRm[(361 - 361)][LxNERzo];
    for (UtNqr9RpQbDW = (912 - 911); UtNqr9RpQbDW < FkygBCJT; UtNqr9RpQbDW = UtNqr9RpQbDW +1) {
        cout << endl;
        cout << gUpKRm[UtNqr9RpQbDW][0];
        for (LxNERzo = (173 - 172); LxNERzo < me3AsNQlPpj; LxNERzo++)
            cout << " " << gUpKRm[UtNqr9RpQbDW][LxNERzo];
    }
    return 0;
}

