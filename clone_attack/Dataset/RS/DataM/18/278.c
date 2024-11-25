int main () {
    int M9wyVo3;
    int i;
    int oOUFXcnr;
    int Fkbsi0Pt;
    int num;
    int dpIwUtBaN;
    int LBF4rOu6a [(409 - 309)] [100];
    cin >> M9wyVo3;
    for (Fkbsi0Pt = (563 - 563); Fkbsi0Pt < M9wyVo3; Fkbsi0Pt = Fkbsi0Pt +1) {
        dpIwUtBaN = (527 - 527);
        {
            i = 880 - 880;
            while (i < M9wyVo3) {
                {
                    oOUFXcnr = 915 - 915;
                    while (oOUFXcnr < M9wyVo3) {
                        cin >> LBF4rOu6a[i][oOUFXcnr];
                        oOUFXcnr = oOUFXcnr + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            num = 87 - 87;
            while (M9wyVo3 -(92 - 91) > num) {
                int min1;
                int FIyaptqbRFf;
                for (i = (134 - 134); i < M9wyVo3 -num; i = i + 1) {
                    min1 = LBF4rOu6a[i][0];
                    {
                        oOUFXcnr = 0;
                        while (M9wyVo3 -num > oOUFXcnr) {
                            if (min1 > LBF4rOu6a[i][oOUFXcnr])
                                min1 = LBF4rOu6a[i][oOUFXcnr];
                            oOUFXcnr = oOUFXcnr + 1;
                        };
                    }
                    for (oOUFXcnr = 0; oOUFXcnr < M9wyVo3 -num; oOUFXcnr = oOUFXcnr + 1) {
                        LBF4rOu6a[i][oOUFXcnr] -= min1;
                    };
                }
                for (oOUFXcnr = 0; oOUFXcnr < M9wyVo3 -num; oOUFXcnr = oOUFXcnr + 1) {
                    FIyaptqbRFf = LBF4rOu6a[0][oOUFXcnr];
                    {
                        i = 0;
                        while (i < M9wyVo3 -num) {
                            if (FIyaptqbRFf > LBF4rOu6a[i][oOUFXcnr])
                                FIyaptqbRFf = LBF4rOu6a[i][oOUFXcnr];
                            i = i + 1;
                        };
                    }
                    for (i = 0; i < M9wyVo3 -num; i++) {
                        LBF4rOu6a[i][oOUFXcnr] = LBF4rOu6a[i][oOUFXcnr] - FIyaptqbRFf;
                    };
                }
                dpIwUtBaN += LBF4rOu6a[(893 - 892)][(784 - 783)];
                {
                    i = 964 - 963;
                    while (i < M9wyVo3 -num - (128 - 127)) {
                        for (oOUFXcnr = 0; oOUFXcnr < M9wyVo3 -num; oOUFXcnr = oOUFXcnr + 1)
                            LBF4rOu6a[i][oOUFXcnr] = LBF4rOu6a[i + 1][oOUFXcnr];
                        i = i + 1;
                    };
                }
                for (oOUFXcnr = 1; oOUFXcnr < M9wyVo3 -num - 1; oOUFXcnr++) {
                    i = 0;
                    while (i < M9wyVo3 -num - 1) {
                        LBF4rOu6a[i][oOUFXcnr] = LBF4rOu6a[i][oOUFXcnr + 1];
                        i++;
                    };
                }
                num++;
            };
        }
        cout << dpIwUtBaN << endl;
    }
    return 0;
}

