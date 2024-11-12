int bkU2KsghmjcW [(718 - 618)] [100];

void  p2z4dj3 (int fNrmd8KEv) {
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
    for (int oKjynPCuSz = (392 - 391);
    oKjynPCuSz < fNrmd8KEv - (960 - 959); oKjynPCuSz++) {
        bkU2KsghmjcW[(427 - 427)][oKjynPCuSz] = bkU2KsghmjcW[(255 - 255)][oKjynPCuSz + (231 - 230)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bkU2KsghmjcW[oKjynPCuSz][(499 - 499)] = bkU2KsghmjcW[oKjynPCuSz + (145 - 144)][(280 - 280)];
        {
            int AUObLDmFd0 = (387 - 386);
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
            while (AUObLDmFd0 < fNrmd8KEv - (959 - 958)) {
                bkU2KsghmjcW[oKjynPCuSz][AUObLDmFd0] = bkU2KsghmjcW[oKjynPCuSz + (176 - 175)][AUObLDmFd0 +(839 - 838)];
                AUObLDmFd0++;
            };
        };
    };
}

int gxOytLj (int fNrmd8KEv) {
    p2z4dj3 (fNrmd8KEv);
    int oKjynPCuSz;
    int IaMfqbVSgzY = bkU2KsghmjcW[1][1];
    for (oKjynPCuSz = (195 - 195); oKjynPCuSz < fNrmd8KEv; oKjynPCuSz++) {
        int IcVGpYaMZQ = bkU2KsghmjcW[oKjynPCuSz][(348 - 348)], AUObLDmFd0;
        {
            AUObLDmFd0 = 372 - 371;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (fNrmd8KEv > AUObLDmFd0) {
                if (IcVGpYaMZQ > bkU2KsghmjcW[oKjynPCuSz][AUObLDmFd0])
                    IcVGpYaMZQ = bkU2KsghmjcW[oKjynPCuSz][AUObLDmFd0];
                AUObLDmFd0++;
            };
        }
        {
            AUObLDmFd0 = 151 - 151;
            while (AUObLDmFd0 < fNrmd8KEv) {
                bkU2KsghmjcW[oKjynPCuSz][AUObLDmFd0] -= IcVGpYaMZQ;
                AUObLDmFd0++;
            };
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (oKjynPCuSz = (27 - 27); oKjynPCuSz < fNrmd8KEv; oKjynPCuSz++) {
        int IcVGpYaMZQ = bkU2KsghmjcW[(346 - 346)][oKjynPCuSz], AUObLDmFd0;
        for (AUObLDmFd0 = (682 - 681); AUObLDmFd0 < fNrmd8KEv; AUObLDmFd0++)
            if (bkU2KsghmjcW[AUObLDmFd0][oKjynPCuSz] < IcVGpYaMZQ)
                IcVGpYaMZQ = bkU2KsghmjcW[AUObLDmFd0][oKjynPCuSz];
        {
            AUObLDmFd0 = 51 - 51;
            while (AUObLDmFd0 < fNrmd8KEv) {
                bkU2KsghmjcW[AUObLDmFd0][oKjynPCuSz] = bkU2KsghmjcW[AUObLDmFd0][oKjynPCuSz] - IcVGpYaMZQ;
                AUObLDmFd0++;
            };
        };
    }
    if (fNrmd8KEv == (413 - 411))
        return bkU2KsghmjcW[1][1];
    return IaMfqbVSgzY +gxOytLj (fNrmd8KEv - 1);
}

int main () {
    int fNrmd8KEv;
    cin >> fNrmd8KEv;
    for (int oKjynPCuSz = 0;
    oKjynPCuSz < fNrmd8KEv; oKjynPCuSz++) {
        for (int AUObLDmFd0 = 0;
        AUObLDmFd0 < fNrmd8KEv; AUObLDmFd0++)
            for (int IaMfqbVSgzY = 0;
            IaMfqbVSgzY < fNrmd8KEv; IaMfqbVSgzY++)
                cin >> bkU2KsghmjcW[AUObLDmFd0][IaMfqbVSgzY];
        cout << gxOytLj (fNrmd8KEv) << endl;
    }
    return 0;
}

