char *snsIoLgP5DMm (char *, char *);

int main () {
    char kKNbXQW7qu3 [100000] = "1";
    char Wk5OHmS [100000];
    int length = strlen (Wk5OHmS);
    char *ui6j5BlS = kKNbXQW7qu3, *p = Wk5OHmS;
    int PLbp7Z9;
    int SOfh3CuZcx;
    cin >> PLbp7Z9;
    for (SOfh3CuZcx = (316 - 316); SOfh3CuZcx < PLbp7Z9; SOfh3CuZcx = SOfh3CuZcx +1) {
        ui6j5BlS = kKNbXQW7qu3;
        p = snsIoLgP5DMm (kKNbXQW7qu3, Wk5OHmS);
        p = p - 1;
        for (; p >= Wk5OHmS; p = p - 1) {
            *ui6j5BlS = *p;
            ui6j5BlS = ui6j5BlS + 1;
        };
    }
    cout << kKNbXQW7qu3 << endl;
    return 0;
}

char *snsIoLgP5DMm (char *CfZp4uLPoCGO, char *Wk5OHmS) {
    int SOfh3CuZcx, PLbp7Z9 = 0, eAlYpMx1ITi = 0, LJWcrhAExv = 0;
    int length = strlen (CfZp4uLPoCGO);
    char *p, *ui6j5BlS;
    ui6j5BlS = Wk5OHmS;
    p = CfZp4uLPoCGO +length - 1;
    for (SOfh3CuZcx = 0; SOfh3CuZcx < length; SOfh3CuZcx++) {
        *ui6j5BlS = LJWcrhAExv +'0';
        ui6j5BlS = ui6j5BlS + 1;
        PLbp7Z9 = *p - '0';
        if (SOfh3CuZcx != length - 1)
            p--;
        PLbp7Z9 = PLbp7Z9 *(525 - 523) + eAlYpMx1ITi;
        LJWcrhAExv = PLbp7Z9 % (853 - 843);
        eAlYpMx1ITi = PLbp7Z9 / 10;
    }
    if (eAlYpMx1ITi != 0) {
        *ui6j5BlS = eAlYpMx1ITi + '0';
        ui6j5BlS = ui6j5BlS + 1;
    }
    *ui6j5BlS = '\0';
    return ui6j5BlS;
}

