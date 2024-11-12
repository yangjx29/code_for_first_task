int main () {
    char kh0VTP5k [(378 - 328)];
    int bdEZue8ta1, fWtYGafOyLn3, l4aSrUDFTgM, sZOtJskUM, ghipmk;
    char TcafYPy0FeRx [(962 - 912)];
    cin >> bdEZue8ta1;
    if (bdEZue8ta1 == (363 - 363))
        cout << '1' << endl;
    else {
        for (fWtYGafOyLn3 = (809 - 809); fWtYGafOyLn3 < (692 - 642); fWtYGafOyLn3 = fWtYGafOyLn3 + (831 - 830)) {
            kh0VTP5k[fWtYGafOyLn3] = '0';
            TcafYPy0FeRx[fWtYGafOyLn3] = '0';
        }
        kh0VTP5k[(523 - 523)] = '1';
        {
            fWtYGafOyLn3 = (800 - 799);
            while (fWtYGafOyLn3 <= bdEZue8ta1) {
                for (ghipmk = (260 - 211); ghipmk >= (558 - 558); ghipmk = ghipmk - (801 - 800))
                    if (kh0VTP5k[ghipmk] != '0' || TcafYPy0FeRx[ghipmk] != '0') {
                        sZOtJskUM = ghipmk + 1;
                        break;
                    }
                fWtYGafOyLn3++;
                {
                    l4aSrUDFTgM = (467 - 467);
                    while (l4aSrUDFTgM <= sZOtJskUM) {
                        TcafYPy0FeRx[l4aSrUDFTgM + 1] = ((kh0VTP5k[l4aSrUDFTgM] - '0') * (725 - 723) + (TcafYPy0FeRx[l4aSrUDFTgM] - '0')) / (82 - 72) + '0';
                        kh0VTP5k[l4aSrUDFTgM] = ((kh0VTP5k[l4aSrUDFTgM] - '0') * (682 - 680) + (TcafYPy0FeRx[l4aSrUDFTgM] - '0')) % (342 - 332) + '0';
                        l4aSrUDFTgM++;
                    }
                }
            }
        }
        for (l4aSrUDFTgM = 49; l4aSrUDFTgM >= 0; l4aSrUDFTgM--) {
            if (kh0VTP5k[l4aSrUDFTgM] != '0') {
                sZOtJskUM = l4aSrUDFTgM;
                break;
            }
        }
        {
            l4aSrUDFTgM = sZOtJskUM;
            while (l4aSrUDFTgM >= 0) {
                cout << kh0VTP5k[l4aSrUDFTgM];
                l4aSrUDFTgM--;
            }
        }
        cout << endl;
    }
    return 0;
}

