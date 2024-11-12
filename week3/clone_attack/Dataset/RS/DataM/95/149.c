int main (int D3mpUT, char *WybOXUBgqnh []) {
    int tKM0bpQg, kgcGEFAnhp;
    char Nhj95cKBtpx [80];
    char EIsTxmWz6 [80];
    char idoZQCAEtVG [80];
    char qyTLgBdz8Cu [80];
    gets (qyTLgBdz8Cu);
    gets (idoZQCAEtVG);
    for (tKM0bpQg = 0; !('\0' == qyTLgBdz8Cu[tKM0bpQg]); tKM0bpQg = tKM0bpQg + 1) {
        if ('A' <= qyTLgBdz8Cu[tKM0bpQg] && 'Z' >= qyTLgBdz8Cu[tKM0bpQg])
            EIsTxmWz6[tKM0bpQg] = tolower (qyTLgBdz8Cu[tKM0bpQg]);
        else
            EIsTxmWz6[tKM0bpQg] = qyTLgBdz8Cu[tKM0bpQg];
    }
    for (kgcGEFAnhp = 0; !('\0' == idoZQCAEtVG[kgcGEFAnhp]); kgcGEFAnhp = kgcGEFAnhp + 1) {
        if (idoZQCAEtVG[kgcGEFAnhp] >= 'A' && idoZQCAEtVG[kgcGEFAnhp] <= 'Z')
            Nhj95cKBtpx[kgcGEFAnhp] = tolower (idoZQCAEtVG[kgcGEFAnhp]);
        else
            Nhj95cKBtpx[kgcGEFAnhp] = idoZQCAEtVG[kgcGEFAnhp];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    EIsTxmWz6[tKM0bpQg] = '\0';
    Nhj95cKBtpx[tKM0bpQg] = '\0';
    if (strcmp (EIsTxmWz6, Nhj95cKBtpx) > 0)
        printf ("%c\n", '>');
    if (strcmp (EIsTxmWz6, Nhj95cKBtpx) == 0)
        printf ("%c\n", '=');
    if (strcmp (EIsTxmWz6, Nhj95cKBtpx) < 0)
        printf ("%c\n", '<');
    return 0;
}

