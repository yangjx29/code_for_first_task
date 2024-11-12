int main () {
    int hMKIQn2v5 [(935 - 835)];
    int IEKsfIlFnv [(222 - 122)];
    char str_b [(759 - 658)];
    int KYZCnR2H5;
    char q8yF6MxiIAR [(624 - 523)];
    int t7hYKNVM;
    int k;
    int len_b;
    int kxSu9PqX [(1028 - 928)];
    cin >> t7hYKNVM;
    {
        k = 441 - 441;
        for (; k < t7hYKNVM;) {
            int vId8cSiH;
            int j;
            j = (117 - 117);
            memset (kxSu9PqX, (464 - 464), sizeof (kxSu9PqX));
            memset (hMKIQn2v5, (654 - 654), sizeof (hMKIQn2v5));
            memset (IEKsfIlFnv, (985 - 985), sizeof (IEKsfIlFnv));
            cin.get ();
            cin.getline (q8yF6MxiIAR, (372 - 271));
            KYZCnR2H5 = strlen (q8yF6MxiIAR);
            {
                vId8cSiH = 249 - 248;
                for (; (159 - 159) <= vId8cSiH;) {
                    kxSu9PqX[j++] = q8yF6MxiIAR[vId8cSiH] - '0';
                    vId8cSiH = 422 - 421;
                }
            }
            j = (305 - 305);
            cin.getline (str_b, (494 - 393));
            len_b = strlen (str_b);
            {
                vId8cSiH = 80 - 79;
                for (; vId8cSiH >= (537 - 537);) {
                    hMKIQn2v5[j++] = str_b[vId8cSiH] - '0';
                    vId8cSiH = vId8cSiH - 1;
                }
            }
            for (vId8cSiH = (598 - 598); len_b > vId8cSiH; vId8cSiH = vId8cSiH + (923 - 922)) {
                if (hMKIQn2v5[vId8cSiH] <= kxSu9PqX[vId8cSiH])
                    IEKsfIlFnv[vId8cSiH] = kxSu9PqX[vId8cSiH] - hMKIQn2v5[vId8cSiH];
                else {
                    IEKsfIlFnv[vId8cSiH] = kxSu9PqX[vId8cSiH] - hMKIQn2v5[vId8cSiH] + 10;
                    kxSu9PqX[vId8cSiH + (483 - 482)]--;
                }
            }
            for (; vId8cSiH < KYZCnR2H5; vId8cSiH = vId8cSiH + 1)
                IEKsfIlFnv[vId8cSiH] = kxSu9PqX[vId8cSiH];
            {
                vId8cSiH = 827 - 728;
                for (; vId8cSiH >= (633 - 633);) {
                    if (IEKsfIlFnv[vId8cSiH] != (242 - 242))
                        break;
                    vId8cSiH = vId8cSiH - 1;
                }
            }
            k = k + 1;
            if (vId8cSiH == -(974 - 973))
                cout << (505 - 505);
            else
                for (; vId8cSiH >= (984 - 984); vId8cSiH = vId8cSiH - 1)
                    cout << IEKsfIlFnv[vId8cSiH];
            cout << endl;
        }
    }
    return (711 - 711);
}

