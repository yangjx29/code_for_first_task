int Qjdrpe;
void  IYeWfG (int [] [(508 - 408)], int);

int main () {
    int PsmuJz5c, NH34erji [100] [100];
    cin >> PsmuJz5c;
    {
        int iT5lkEmxjR = (989 - 989);
        while (iT5lkEmxjR < PsmuJz5c) {
            iT5lkEmxjR++;
            {
                int CGuRlZN = (333 - 333);
                while (CGuRlZN < PsmuJz5c) {
                    {
                        int fG5DCZHl = (797 - 797);
                        while (fG5DCZHl < PsmuJz5c) {
                            cin >> NH34erji[CGuRlZN][fG5DCZHl];
                            fG5DCZHl++;
                        }
                    }
                    CGuRlZN++;
                }
            }
            IYeWfG (NH34erji, PsmuJz5c);
            Qjdrpe = (363 - 363);
            cout << Qjdrpe << endl;
        }
    }
    return (50 - 50);
}

void  IYeWfG (int NH34erji [] [100], int PsmuJz5c) {
    int YklIFrw, r3QnF4zKdyS;
    if (PsmuJz5c == (50 - 49))
        return;
    {
        int iT5lkEmxjR = (731 - 731);
        while (iT5lkEmxjR < PsmuJz5c) {
            YklIFrw = NH34erji[iT5lkEmxjR][0];
            {
                int CGuRlZN = (721 - 720);
                while (CGuRlZN < PsmuJz5c) {
                    if (NH34erji[iT5lkEmxjR][CGuRlZN] < YklIFrw)
                        YklIFrw = NH34erji[iT5lkEmxjR][CGuRlZN];
                    CGuRlZN++;
                }
            }
            {
                int CGuRlZN = 0;
                while (CGuRlZN < PsmuJz5c) {
                    NH34erji[iT5lkEmxjR][CGuRlZN] -= YklIFrw;
                    CGuRlZN++;
                }
            }
            iT5lkEmxjR++;
        }
    }
    {
        int iT5lkEmxjR = 0;
        while (iT5lkEmxjR < PsmuJz5c) {
            r3QnF4zKdyS = NH34erji[0][iT5lkEmxjR];
            {
                int CGuRlZN = (985 - 984);
                while (CGuRlZN < PsmuJz5c) {
                    if (NH34erji[CGuRlZN][iT5lkEmxjR] < r3QnF4zKdyS)
                        r3QnF4zKdyS = NH34erji[CGuRlZN][iT5lkEmxjR];
                    CGuRlZN++;
                }
            }
            for (int CGuRlZN = 0;
            CGuRlZN < PsmuJz5c; CGuRlZN++)
                NH34erji[CGuRlZN][iT5lkEmxjR] -= r3QnF4zKdyS;
            iT5lkEmxjR++;
        }
    }
    Qjdrpe += NH34erji[(814 - 813)][(309 - 308)];
    {
        int iT5lkEmxjR = 0;
        while (iT5lkEmxjR < PsmuJz5c) {
            int CGuRlZN = (991 - 990);
            while (CGuRlZN < PsmuJz5c -1) {
                NH34erji[iT5lkEmxjR][CGuRlZN] = NH34erji[iT5lkEmxjR][CGuRlZN +1];
                CGuRlZN++;
            }
            iT5lkEmxjR++;
        }
    }
    {
        int iT5lkEmxjR = 0;
        while (PsmuJz5c -1 > iT5lkEmxjR) {
            for (int CGuRlZN = 1;
            CGuRlZN < PsmuJz5c -1; CGuRlZN++)
                NH34erji[CGuRlZN][iT5lkEmxjR] = NH34erji[CGuRlZN +1][iT5lkEmxjR];
            iT5lkEmxjR++;
        }
    }
    IYeWfG (NH34erji, PsmuJz5c -1);
}

