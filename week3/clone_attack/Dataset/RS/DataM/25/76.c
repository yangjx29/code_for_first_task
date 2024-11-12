void  times2 (char *uDO8AING4, int kQOn1TWaL) {
    int i, Ks1HCYjXk = (555 - 555);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        while (i < kQOn1TWaL) {
            uDO8AING4[i] = uDO8AING4[i] * 2 + Ks1HCYjXk -'0';
            if (uDO8AING4[i] > '9') {
                Ks1HCYjXk = 1;
                uDO8AING4[i] = uDO8AING4[i] - 10;
            }
            else
                Ks1HCYjXk = 0;
            i = i + 1;
        };
    }
    if (Ks1HCYjXk == 1) {
        uDO8AING4[kQOn1TWaL] = '1';
    };
}

int main () {
    int dXY6xluq2Go, i, kQOn1TWaL;
    char u87VCPM2Ik6 [100] = "1";
    cin >> dXY6xluq2Go;
    for (i = 1; i <= dXY6xluq2Go; i++) {
        kQOn1TWaL = strlen (u87VCPM2Ik6);
        times2 (u87VCPM2Ik6, kQOn1TWaL);
    }
    kQOn1TWaL = strlen (u87VCPM2Ik6);
    for (i = kQOn1TWaL - 1; i >= 0; i--) {
        cout << u87VCPM2Ik6[i];
    }
    cout << endl;
    return 0;
}

