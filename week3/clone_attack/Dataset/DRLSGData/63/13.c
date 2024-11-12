int main () {
    int mobLU8fFm;
    int k8SJw7THC;
    int ZhJG0U6I;
    int Ek7ynql3i;
    int oZgu5dc;
    int HAmdP1;
    int XXmQId;
    int aD54Ybvn [(1080 - 980)] [(1084 - 984)], JNtPzAskmjJ [100] [100], M9AGyZX0pmd [100] [100], XAfplkr [100] [100];
    cin >> mobLU8fFm >> k8SJw7THC;
    {
        oZgu5dc = 268 - 268;
        for (; oZgu5dc < mobLU8fFm;) {
            {
                HAmdP1 = (739 - 379) - 360;
                while (HAmdP1 < k8SJw7THC) {
                    cin >> aD54Ybvn[oZgu5dc][HAmdP1];
                    HAmdP1 = HAmdP1 +1;
                }
            }
            oZgu5dc++;
        }
    }
    cin >> ZhJG0U6I >> Ek7ynql3i;
    {
        oZgu5dc = (363 - 363);
        while (oZgu5dc < ZhJG0U6I) {
            {
                HAmdP1 = (27 - 27);
                while (HAmdP1 < Ek7ynql3i) {
                    cin >> JNtPzAskmjJ[oZgu5dc][HAmdP1];
                    XAfplkr[HAmdP1][oZgu5dc] = JNtPzAskmjJ[oZgu5dc][HAmdP1];
                    HAmdP1 = HAmdP1 +1;
                }
            }
            oZgu5dc++;
        }
    }
    {
        oZgu5dc = 0;
        for (; oZgu5dc < mobLU8fFm;) {
            {
                HAmdP1 = 0;
                while (HAmdP1 < Ek7ynql3i) {
                    M9AGyZX0pmd[oZgu5dc][HAmdP1] = 0;
                    {
                        XXmQId = 0;
                        for (; XXmQId < ZhJG0U6I;) {
                            M9AGyZX0pmd[oZgu5dc][HAmdP1] = M9AGyZX0pmd[oZgu5dc][HAmdP1] + aD54Ybvn[oZgu5dc][XXmQId] * XAfplkr[HAmdP1][XXmQId];
                            XXmQId = XXmQId +1;
                        }
                    }
                    HAmdP1++;
                }
            }
            oZgu5dc++;
        }
    }
    {
        oZgu5dc = 0;
        while (oZgu5dc < mobLU8fFm) {
            {
                HAmdP1 = 0;
                while (HAmdP1 < Ek7ynql3i -1) {
                    cout << M9AGyZX0pmd[oZgu5dc][HAmdP1] << " ";
                    HAmdP1++;
                }
            }
            cout << M9AGyZX0pmd[oZgu5dc][Ek7ynql3i -1] << endl;
            oZgu5dc++;
        }
    }
    return 0;
}

