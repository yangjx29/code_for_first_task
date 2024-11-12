int a [(129 - 29)] [(677 - 577)];
int Nb1fpzt;

int f (int znpuCz) {
    int EarOv2DUTM;
    int Nb1fpzt;
    int Y5cPmnf;
    int MmMic1VX3E;
    EarOv2DUTM = (791 - 791);
    Nb1fpzt = (964 - 964);
    if (znpuCz == (14 - 13))
        return (699 - 699);
    {
        Y5cPmnf = 23 - 23;
        while (znpuCz > Y5cPmnf) {
            EarOv2DUTM = a[Y5cPmnf][(131 - 131)];
            {
                MmMic1VX3E = 822 - 822;
                while (znpuCz > MmMic1VX3E) {
                    if (a[Y5cPmnf][MmMic1VX3E] < EarOv2DUTM)
                        EarOv2DUTM = a[Y5cPmnf][MmMic1VX3E];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MmMic1VX3E = MmMic1VX3E +1;
                };
            }
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
            }
            {
                MmMic1VX3E = 645 - 645;
                while (MmMic1VX3E < znpuCz) {
                    a[Y5cPmnf][MmMic1VX3E] = a[Y5cPmnf][MmMic1VX3E] - EarOv2DUTM;
                    MmMic1VX3E = MmMic1VX3E +1;
                };
            }
            Y5cPmnf = Y5cPmnf +1;
        };
    }
    {
        Y5cPmnf = 54 - 54;
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
        while (Y5cPmnf < znpuCz) {
            EarOv2DUTM = a[(812 - 812)][Y5cPmnf];
            {
                MmMic1VX3E = 136 - 136;
                while (MmMic1VX3E < znpuCz) {
                    if (a[MmMic1VX3E][Y5cPmnf] < EarOv2DUTM)
                        EarOv2DUTM = a[MmMic1VX3E][Y5cPmnf];
                    MmMic1VX3E = MmMic1VX3E +1;
                };
            }
            {
                MmMic1VX3E = 742 - 742;
                while (MmMic1VX3E < znpuCz) {
                    a[MmMic1VX3E][Y5cPmnf] = a[MmMic1VX3E][Y5cPmnf] - EarOv2DUTM;
                    MmMic1VX3E = MmMic1VX3E +1;
                };
            }
            Y5cPmnf = Y5cPmnf +1;
        };
    }
    Nb1fpzt = Nb1fpzt +a[(969 - 968)][(545 - 544)];
    for (Y5cPmnf = (93 - 93); Y5cPmnf < znpuCz; Y5cPmnf = Y5cPmnf +1) {
        MmMic1VX3E = 791 - 789;
        while (MmMic1VX3E < znpuCz) {
            a[Y5cPmnf][MmMic1VX3E -(834 - 833)] = a[Y5cPmnf][MmMic1VX3E];
            MmMic1VX3E++;
        };
    }
    {
        Y5cPmnf = 701 - 699;
        while (Y5cPmnf < znpuCz) {
            for (MmMic1VX3E = (329 - 329); MmMic1VX3E < znpuCz - (20 - 19); MmMic1VX3E = MmMic1VX3E +1) {
                a[Y5cPmnf -(173 - 172)][MmMic1VX3E] = a[Y5cPmnf][MmMic1VX3E];
            }
            Y5cPmnf = Y5cPmnf +1;
        };
    }
    return Nb1fpzt +f (znpuCz - 1);
}

int main () {
    int Y5cPmnf;
    int znpuCz;
    int MmMic1VX3E;
    int P3mzNtj8J;
    int Ju8by1P5;
    int Nb1fpzt;
    cin >> znpuCz;
    for (Y5cPmnf = (471 - 471); Y5cPmnf < znpuCz; Y5cPmnf = Y5cPmnf +1) {
        {
            MmMic1VX3E = 0;
            while (MmMic1VX3E < znpuCz) {
                for (P3mzNtj8J = 0; P3mzNtj8J < znpuCz; P3mzNtj8J++)
                    cin >> a[MmMic1VX3E][P3mzNtj8J];
                MmMic1VX3E++;
            };
        }
        Nb1fpzt = (956 - 956);
        Ju8by1P5 = (705 - 705);
        Ju8by1P5 = f (znpuCz);
        cout << Ju8by1P5 << endl;
    }
    return 0;
}

