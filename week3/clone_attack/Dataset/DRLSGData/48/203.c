int main () {
    int Nzs1iy5ToeSO [11] [11];
    int mLx1ml [11] [11];
    int sz0onufP;
    int SqQNdL1A;
    int T1t4aEPFbj;
    int iXAyoj27WkpT;
    int rJ1z0ja;
    int enFcUWLoDTO;
    int mICeutr1D;
    {
        sz0onufP = 0;
        while (10 >= sz0onufP) {
            {
                SqQNdL1A = 0;
                while (10 >= SqQNdL1A) {
                    Nzs1iy5ToeSO[sz0onufP][SqQNdL1A] = 0;
                    mLx1ml[sz0onufP][SqQNdL1A] = 0;
                    SqQNdL1A++;
                }
            }
            sz0onufP++;
        }
    }
    cin >> T1t4aEPFbj >> rJ1z0ja;
    Nzs1iy5ToeSO[5][5] = T1t4aEPFbj;
    {
        iXAyoj27WkpT = 1;
        while (rJ1z0ja >= iXAyoj27WkpT) {
            {
                enFcUWLoDTO = 0;
                while (10 >= enFcUWLoDTO) {
                    mICeutr1D = 0;
                    while (10 >= mICeutr1D) {
                        mLx1ml[enFcUWLoDTO][mICeutr1D] = 0;
                        mICeutr1D++;
                    }
                    enFcUWLoDTO++;
                }
            }
            for (sz0onufP = 1; 9 >= sz0onufP; sz0onufP++) {
                SqQNdL1A = 1;
                while (SqQNdL1A <= 9) {
                    if (Nzs1iy5ToeSO[sz0onufP][SqQNdL1A] != 0) {
                        mLx1ml[sz0onufP][SqQNdL1A] = Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A] + Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A] * 2;
                    }
                    else {
                        if (Nzs1iy5ToeSO[sz0onufP][SqQNdL1A] == 0 && ((Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A] + Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A +1]) != 0))
                            mLx1ml[sz0onufP][SqQNdL1A] = Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A] + Nzs1iy5ToeSO[sz0onufP - 1][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP][SqQNdL1A +1] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A -1] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A] + Nzs1iy5ToeSO[sz0onufP + 1][SqQNdL1A +1];
                    }
                    SqQNdL1A++;
                }
            }
            {
                enFcUWLoDTO = 1;
                while (enFcUWLoDTO <= 9) {
                    mICeutr1D = 1;
                    while (mICeutr1D <= 9) {
                        Nzs1iy5ToeSO[enFcUWLoDTO][mICeutr1D] = mLx1ml[enFcUWLoDTO][mICeutr1D];
                        mICeutr1D++;
                    }
                    enFcUWLoDTO++;
                }
            }
            iXAyoj27WkpT++;
        }
    }
    {
        sz0onufP = 1;
        while (sz0onufP <= 9) {
            for (SqQNdL1A = 1; SqQNdL1A <= 8; SqQNdL1A++) {
                cout << Nzs1iy5ToeSO[sz0onufP][SqQNdL1A] << " ";
            }
            cout << Nzs1iy5ToeSO[sz0onufP][9];
            cout << endl;
            sz0onufP++;
        }
    }
    return 0;
}

