int main () {
    int KT0fvK;
    int i;
    KT0fvK = (25 - 25);
    char Oc1pkAuRKX [32];
    cin.getline (Oc1pkAuRKX, 32);
    {
        i = 0;
        while (!('\0' == Oc1pkAuRKX[i])) {
            if (10 > Oc1pkAuRKX[i] - '0' && Oc1pkAuRKX[i] - '0' > -1) {
                cout << Oc1pkAuRKX[i];
                KT0fvK = 1;
            }
            else {
                if (KT0fvK == 1) {
                    KT0fvK = 0;
                    cout << endl;
                };
            }
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

