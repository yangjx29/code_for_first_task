int main () {
    int KBbRymOv3K [100] [100];
    int xm6ebdUgi [100] [100];
    int DOIze0 [100] [100];
    int aGk8mAFl;
    int VTmoz0NVl;
    int ycUz5WTE3;
    int zvNtZJ;
    int Jh3S9zBl, oodDyRk, owy1MGm;
    cin >> aGk8mAFl >> VTmoz0NVl;
    {
        Jh3S9zBl = 0;
        while (Jh3S9zBl < 100) {
            {
                oodDyRk = 0;
                for (; oodDyRk < 100;) {
                    KBbRymOv3K[Jh3S9zBl][oodDyRk] = 0;
                    oodDyRk++;
                }
            }
            Jh3S9zBl = Jh3S9zBl +1;
        }
    }
    {
        Jh3S9zBl = 0;
        while (Jh3S9zBl < aGk8mAFl) {
            {
                oodDyRk = 0;
                for (; oodDyRk < VTmoz0NVl;) {
                    cin >> DOIze0[Jh3S9zBl][oodDyRk];
                    oodDyRk++;
                }
            }
            Jh3S9zBl++;
        }
    }
    cin >> ycUz5WTE3 >> zvNtZJ;
    {
        Jh3S9zBl = 0;
        while (Jh3S9zBl < ycUz5WTE3) {
            {
                oodDyRk = 0;
                while (oodDyRk < zvNtZJ) {
                    cin >> xm6ebdUgi[Jh3S9zBl][oodDyRk];
                    oodDyRk++;
                }
            }
            Jh3S9zBl++;
        }
    }
    {
        Jh3S9zBl = 0;
        while (Jh3S9zBl < aGk8mAFl) {
            {
                oodDyRk = 0;
                while (oodDyRk < zvNtZJ) {
                    {
                        owy1MGm = 0;
                        for (; owy1MGm < VTmoz0NVl;) {
                            KBbRymOv3K[Jh3S9zBl][oodDyRk] = KBbRymOv3K[Jh3S9zBl][oodDyRk] + DOIze0[Jh3S9zBl][owy1MGm] * xm6ebdUgi[owy1MGm][oodDyRk];
                            owy1MGm++;
                        }
                    }
                    oodDyRk++;
                }
            }
            Jh3S9zBl++;
        }
    }
    {
        Jh3S9zBl = 0;
        for (; Jh3S9zBl < aGk8mAFl;) {
            for (oodDyRk = 0; oodDyRk < zvNtZJ - 1; oodDyRk++)
                cout << KBbRymOv3K[Jh3S9zBl][oodDyRk] << " ";
            cout << KBbRymOv3K[Jh3S9zBl][oodDyRk] << endl;
            Jh3S9zBl++;
        }
    }
    return 0;
}

