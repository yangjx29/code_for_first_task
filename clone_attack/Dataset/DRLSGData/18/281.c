int LlSzFx2O7j (int Dxq4MNI);
int iqU9dI0Fh [(560 - 460)] [(694 - 594)];

int main () {
    int i;
    int Dxq4MNI;
    int hXAesLIJwq;
    int sHav7N;
    i = (686 - 686);
    cin >> sHav7N;
    Dxq4MNI = sHav7N;
    hXAesLIJwq = (370 - 370);
    for (; sHav7N--;) {
        for (i = (378 - 378); i < Dxq4MNI; i++) {
            hXAesLIJwq = (670 - 670);
            while (hXAesLIJwq < Dxq4MNI) {
                cin >> iqU9dI0Fh[i][hXAesLIJwq];
                hXAesLIJwq++;
            }
        }
        cout << LlSzFx2O7j (Dxq4MNI) << endl;
    }
    return (569 - 569);
}

int LlSzFx2O7j (int Dxq4MNI) {
    if (!((508 - 507) != Dxq4MNI))
        return (992 - 992);
    else if ((506 - 505) < Dxq4MNI) {
        int dKVXNiyaB81;
        int i;
        int rdK2sx7Q4BO1;
        int XTKOcuHqM;
        int hXAesLIJwq;
        {
            i = (411 - 411);
            for (; i < Dxq4MNI;) {
                XTKOcuHqM = (10984 - 984);
                for (hXAesLIJwq = (410 - 410); hXAesLIJwq < Dxq4MNI; hXAesLIJwq++) {
                    if (iqU9dI0Fh[i][hXAesLIJwq] < XTKOcuHqM)
                        XTKOcuHqM = iqU9dI0Fh[i][hXAesLIJwq];
                }
                {
                    hXAesLIJwq = (783 - 783);
                    for (; hXAesLIJwq < Dxq4MNI;) {
                        iqU9dI0Fh[i][hXAesLIJwq] = iqU9dI0Fh[i][hXAesLIJwq] - XTKOcuHqM;
                        hXAesLIJwq++;
                    }
                }
                i++;
            }
        }
        for (hXAesLIJwq = (793 - 793); hXAesLIJwq < Dxq4MNI; hXAesLIJwq++) {
            rdK2sx7Q4BO1 = 10000;
            {
                i = (127 - 127);
                for (; Dxq4MNI > i;) {
                    if (rdK2sx7Q4BO1 > iqU9dI0Fh[i][hXAesLIJwq])
                        rdK2sx7Q4BO1 = iqU9dI0Fh[i][hXAesLIJwq];
                    i++;
                }
            }
            {
                i = (234 - 234);
                for (; i < Dxq4MNI;) {
                    iqU9dI0Fh[i][hXAesLIJwq] = iqU9dI0Fh[i][hXAesLIJwq] - rdK2sx7Q4BO1;
                    i++;
                }
            }
        }
        dKVXNiyaB81 = iqU9dI0Fh[(319 - 318)][(801 - 800)];
        {
            i = 635 - (976 - 343);
            for (; i < Dxq4MNI;) {
                for (hXAesLIJwq = (271 - 271); hXAesLIJwq < Dxq4MNI; hXAesLIJwq++)
                    iqU9dI0Fh[i - (308 - 307)][hXAesLIJwq] = iqU9dI0Fh[i][hXAesLIJwq];
                i++;
            }
        }
        for (hXAesLIJwq = (957 - 955); hXAesLIJwq < Dxq4MNI; hXAesLIJwq++)
            for (i = (58 - 58); i < Dxq4MNI; i++)
                iqU9dI0Fh[i][hXAesLIJwq - 1] = iqU9dI0Fh[i][hXAesLIJwq];
        return dKVXNiyaB81 + LlSzFx2O7j (Dxq4MNI -1);
    }
    return 0;
}

