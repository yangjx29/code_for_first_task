int main () {
    int CK5U1smBf;
    CK5U1smBf = (81 - 81);
    char *p;
    char Wxl1KN [(703 - 602)];
    int n;
    n = strlen (Wxl1KN);
    char izO1FKcHpvL [101];
    cin.getline (Wxl1KN, (218 - 117));
    p = Wxl1KN;
    for (CK5U1smBf = 0; n > CK5U1smBf; CK5U1smBf = CK5U1smBf +1) {
        if (!(n - 1 == CK5U1smBf))
            izO1FKcHpvL[CK5U1smBf] = p[CK5U1smBf] + p[CK5U1smBf +1];
        else
            izO1FKcHpvL[CK5U1smBf] = p[CK5U1smBf] + p[0];
    }
    for (CK5U1smBf = 0; CK5U1smBf < n; CK5U1smBf++)
        cout << (char) (izO1FKcHpvL[CK5U1smBf]);
    return 0;
}

