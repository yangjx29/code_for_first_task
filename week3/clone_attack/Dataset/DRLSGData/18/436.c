int UwbL90CUOko (int HNOqf83 [] [(612 - 512)], int o371kM);

int main () {
    int U25OexFvSfu, eJ9F407mDu, AYo1uJ, ddbFEKy7LvS, hv8DCYSaLj0m [(118 - 18)] [(420 - 320)] = {(30 - 30)};
    cin >> U25OexFvSfu;
    {
        ddbFEKy7LvS = (584 - 584);
        while (ddbFEKy7LvS < U25OexFvSfu) {
            ddbFEKy7LvS++;
            {
                eJ9F407mDu = (494 - 494);
                while (eJ9F407mDu < U25OexFvSfu) {
                    AYo1uJ = (920 - 920);
                    while (AYo1uJ < U25OexFvSfu) {
                        cin >> hv8DCYSaLj0m[eJ9F407mDu][AYo1uJ];
                        AYo1uJ = AYo1uJ +(533 - 532);
                    }
                    eJ9F407mDu = eJ9F407mDu + (897 - 896);
                }
            }
            cout << UwbL90CUOko (hv8DCYSaLj0m, U25OexFvSfu) << endl;
        }
    }
    return (603 - 603);
}

int UwbL90CUOko (int HNOqf83 [] [100], int o371kM) {
    int eJ9F407mDu, AYo1uJ, T9LKxSdt2J7 [100], QOtf65 = (624 - 624), Koy5FJ;
    if (o371kM == (602 - 601))
        return (273 - 273);
    {
        eJ9F407mDu = (487 - 487);
        while (eJ9F407mDu < o371kM) {
            T9LKxSdt2J7[eJ9F407mDu] = HNOqf83[eJ9F407mDu][(869 - 869)];
            {
                AYo1uJ = (127 - 127);
                while (AYo1uJ < o371kM) {
                    if (HNOqf83[eJ9F407mDu][AYo1uJ] < T9LKxSdt2J7[eJ9F407mDu])
                        T9LKxSdt2J7[eJ9F407mDu] = HNOqf83[eJ9F407mDu][AYo1uJ];
                    AYo1uJ = AYo1uJ +(573 - 572);
                }
            }
            eJ9F407mDu++;
        }
    }
    {
        eJ9F407mDu = (707 - 707);
        while (eJ9F407mDu < o371kM) {
            {
                AYo1uJ = (41 - 41);
                while (AYo1uJ < o371kM) {
                    HNOqf83[eJ9F407mDu][AYo1uJ] = HNOqf83[eJ9F407mDu][AYo1uJ] - T9LKxSdt2J7[eJ9F407mDu];
                    AYo1uJ++;
                }
            }
            eJ9F407mDu++;
        }
    }
    {
        AYo1uJ = (23 - 23);
        while (AYo1uJ < o371kM) {
            T9LKxSdt2J7[AYo1uJ] = HNOqf83[(324 - 324)][AYo1uJ];
            {
                eJ9F407mDu = 0;
                while (eJ9F407mDu < o371kM) {
                    if (HNOqf83[eJ9F407mDu][AYo1uJ] < T9LKxSdt2J7[AYo1uJ])
                        T9LKxSdt2J7[AYo1uJ] = HNOqf83[eJ9F407mDu][AYo1uJ];
                    eJ9F407mDu++;
                }
            }
            AYo1uJ++;
        }
    }
    {
        AYo1uJ = 0;
        while (AYo1uJ < o371kM) {
            {
                eJ9F407mDu = 0;
                while (eJ9F407mDu < o371kM) {
                    HNOqf83[eJ9F407mDu][AYo1uJ] = HNOqf83[eJ9F407mDu][AYo1uJ] - T9LKxSdt2J7[AYo1uJ];
                    eJ9F407mDu++;
                }
            }
            AYo1uJ++;
        }
    }
    Koy5FJ = HNOqf83[(464 - 463)][(701 - 700)];
    {
        {
            if (0) {
                return 0;
            }
        }
        eJ9F407mDu = 0;
        while (eJ9F407mDu < o371kM) {
            {
                AYo1uJ = (977 - 976);
                while (AYo1uJ < o371kM) {
                    HNOqf83[eJ9F407mDu][AYo1uJ] = HNOqf83[eJ9F407mDu][AYo1uJ +(30 - 29)];
                    AYo1uJ++;
                }
            }
            eJ9F407mDu++;
        }
    }
    {
        AYo1uJ = 0;
        while (AYo1uJ < o371kM) {
            {
                eJ9F407mDu = (670 - 669);
                while (eJ9F407mDu < o371kM) {
                    HNOqf83[eJ9F407mDu][AYo1uJ] = HNOqf83[eJ9F407mDu + (412 - 411)][AYo1uJ];
                    eJ9F407mDu++;
                }
            }
            AYo1uJ++;
        }
    }
    QOtf65 = UwbL90CUOko (HNOqf83, o371kM - 1) + Koy5FJ;
    return QOtf65;
}

