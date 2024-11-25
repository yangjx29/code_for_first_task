int main () {
    int Utxrm6pkKBRV, BcVaivtKUCI = 1, per2 = 1, Byn3xA [10000] = {0}, knowed [10000] = {0}, count = 0, s8Xxd0 = 0;
    int *PfgKTk1A = Byn3xA;
    int *AWI6LqYc = knowed;
    cin >> Utxrm6pkKBRV;
    do {
        cin >> BcVaivtKUCI >> per2;
        if (BcVaivtKUCI != 0 || per2 != 0) {
            *(PfgKTk1A +BcVaivtKUCI) = 1;
            (*(AWI6LqYc +per2))++;
        }
        else
            break;
    }
    while (1);
    {
        s8Xxd0 = 0;
        while (s8Xxd0 < Utxrm6pkKBRV) {
            if (*(PfgKTk1A +s8Xxd0) == 0 && *(AWI6LqYc +s8Xxd0) == Utxrm6pkKBRV -1) {
                if (count == 0) {
                    cout << s8Xxd0;
                    count = count + 1;
                }
                else {
                    cout << ' ' << s8Xxd0;
                    count++;
                };
            }
            s8Xxd0++;
        };
    }
    if (count == 0)
        cout << "NOT FOUND";
    return 0;
}

