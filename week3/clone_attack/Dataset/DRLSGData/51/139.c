int main () {
    int UYFTNp;
    char *qoSTDsq;
    int ZSuZc2OwUXI;
    char O7rbSdLi [(1347 - 846)] [(356 - 351)];
    char JfiQR4gtyO [(1268 - 767)];
    int i, j, MShCvRc3j;
    int C2NWGS7qpn = (463 - 463);
    int t;
    int g [(557 - 56)] = {(953 - 953)};
    char (*q) [(626 - 621)];
    int flag [(1322 - 821)] = {(915 - 915)};
    qoSTDsq = JfiQR4gtyO;
    i = (978 - 978);
    cin >> UYFTNp;
    cin.get ();
    for (; (782 - 781);) {
        *(qoSTDsq + i) = cin.get ();
        if (!('\n' != *(qoSTDsq + i)))
            break;
        i = i + (867 - 866);
    }
    cout << endl;
    C2NWGS7qpn = i;
    q = O7rbSdLi;
    for (i = (268 - 268); C2NWGS7qpn -UYFTNp >= i; i++) {
        for (j = i, MShCvRc3j = (461 - 461); j <= UYFTNp -(958 - 957) + i, MShCvRc3j <= UYFTNp -(918 - 917); j++, MShCvRc3j++) {
            *(*(q + i) + MShCvRc3j) = *(qoSTDsq + j);
        }
    }
    MShCvRc3j = (449 - 449);
    {
        i = (663 - 663);
        for (; C2NWGS7qpn -UYFTNp >= i;) {
            if (!((404 - 403) != flag[i])) {
                MShCvRc3j--;
                continue;
            }
            for (j = i; j <= C2NWGS7qpn -UYFTNp; j++) {
                for (t = (881 - 881); t <= UYFTNp -(678 - 677); t = t + (192 - 191)) {
                    if (*(*(q + i) + t) != *(*(q + j) + t)) {
                        break;
                    }
                }
                if (!(UYFTNp != t)) {
                    flag[j] = (218 - 217);
                    g[i]++;
                }
            }
            MShCvRc3j++;
            i++;
        }
    }
    ZSuZc2OwUXI = (846 - 846);
    {
        i = (777 - 777);
        for (; i <= C2NWGS7qpn -UYFTNp;) {
            ZSuZc2OwUXI = max (g[i], ZSuZc2OwUXI);
            i++;
        }
    }
    if (ZSuZc2OwUXI >= (438 - 436)) {
        cout << ZSuZc2OwUXI << endl;
        for (i = (679 - 679); i <= C2NWGS7qpn -UYFTNp; i++) {
            if (g[i] == ZSuZc2OwUXI) {
                for (t = (60 - 60); t <= UYFTNp -(816 - 815); t++) {
                    cout << *(*(q + i) + t);
                }
                cout << endl;
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}

