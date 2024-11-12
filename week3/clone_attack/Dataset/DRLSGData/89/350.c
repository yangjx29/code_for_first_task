int main () {
    int Hrf4toEH;
    int sVepMSKn;
    int IYhBk2orNXz1 [100000] [2];
    int tnWkEF;
    int HJvWA9;
    int jKU6AirHGC [100000] = {0};
    int qY5qfDw9 [100000] = {0};
    Hrf4toEH = 0;
    sVepMSKn = 1;
    cin >> tnWkEF;
    do {
        {
            HJvWA9 = 0;
            while (2 > HJvWA9) {
                cin >> IYhBk2orNXz1[Hrf4toEH][HJvWA9];
                HJvWA9 = HJvWA9 +1;
            }
        }
        Hrf4toEH = Hrf4toEH +1;
    }
    while (IYhBk2orNXz1[Hrf4toEH -1][0] != 0 || IYhBk2orNXz1[Hrf4toEH -1][1] != 0);
    {
        HJvWA9 = 0;
        while (Hrf4toEH -1 > HJvWA9) {
            jKU6AirHGC[IYhBk2orNXz1[HJvWA9][0]]++;
            qY5qfDw9[IYhBk2orNXz1[HJvWA9][1]]++;
            HJvWA9 = HJvWA9 +1;
        }
    }
    {
        HJvWA9 = 0;
        while (HJvWA9 < Hrf4toEH -1) {
            if (jKU6AirHGC[HJvWA9] == 0 && qY5qfDw9[HJvWA9] == tnWkEF - 1) {
                cout << HJvWA9;
                sVepMSKn = 0;
            }
            HJvWA9 = HJvWA9 +1;
        }
    }
    if (!(Hrf4toEH -1 != HJvWA9) && sVepMSKn == 1)
        cout << "NOT FOUND";
    return 0;
}

