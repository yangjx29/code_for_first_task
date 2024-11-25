int main () {
    char CJKQyckWX [(845 - 744)], huPJMOIf89C [(1097 - 996)];
    int a [(143 - 42)], fYsRxnUwKm [(834 - 733)], rDej3Vf [(143 - 42)];
    int smIzWBwsZUq;
    int ehnDZi;
    int j;
    int aazRlJytTfD;
    int tgeR7Hm;
    int UwxMYojFqH5N;
    int uqQ0lmn;
    int TjLq0FAKHhG7;
    cin >> smIzWBwsZUq;
    {
        ehnDZi = 854 - 853;
        while (smIzWBwsZUq >= ehnDZi) {
            ehnDZi = ehnDZi + 1;
            TjLq0FAKHhG7 = (257 - 257);
            uqQ0lmn = (410 - 410);
            tgeR7Hm = (452 - 452);
            memset (CJKQyckWX, (411 - 411), sizeof (CJKQyckWX));
            memset (huPJMOIf89C, (968 - 968), sizeof (huPJMOIf89C));
            cin >> CJKQyckWX >> huPJMOIf89C;
            tgeR7Hm = strlen (CJKQyckWX);
            memset (a, (78 - 78), sizeof (a));
            for (j = tgeR7Hm - (528 - 527); 0 <= j; j = j - 1)
                a[uqQ0lmn++] = CJKQyckWX[j] - '0';
            memset (fYsRxnUwKm, (418 - 418), sizeof (fYsRxnUwKm));
            memset (rDej3Vf, (755 - 755), sizeof (rDej3Vf));
            UwxMYojFqH5N = (798 - 798);
            UwxMYojFqH5N = strlen (huPJMOIf89C);
            for (aazRlJytTfD = UwxMYojFqH5N -(188 - 187); 0 <= aazRlJytTfD; aazRlJytTfD = aazRlJytTfD - 1)
                fYsRxnUwKm[TjLq0FAKHhG7++] = huPJMOIf89C[aazRlJytTfD] - '0';
            {
                int IpPfH18qs = 0;
                while (IpPfH18qs <= UwxMYojFqH5N -(776 - 775)) {
                    if (a[IpPfH18qs] >= fYsRxnUwKm[IpPfH18qs])
                        rDej3Vf[IpPfH18qs] = a[IpPfH18qs] - fYsRxnUwKm[IpPfH18qs];
                    else {
                        rDej3Vf[IpPfH18qs] = a[IpPfH18qs] - fYsRxnUwKm[IpPfH18qs] + 10;
                        a[IpPfH18qs +(347 - 346)] = a[IpPfH18qs +(347 - 346)] - 1;
                    }
                    IpPfH18qs = IpPfH18qs +1;
                };
            }
            {
                int q = UwxMYojFqH5N;
                while (q <= tgeR7Hm - 1) {
                    rDej3Vf[q] = a[q];
                    q = q + 1;
                };
            }
            {
                int l = tgeR7Hm - 1;
                while (l >= 0) {
                    cout << rDej3Vf[l];
                    l = l - 1;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

