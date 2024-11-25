int main () {
    int kfIhGDbMlw4V;
    int W5bPSu;
    int txQswdq;
    int LartfmeiCFSM;
    int aiayfJnb;
    int VGOyxC;
    int lOaKisg80kl;
    int TBGW7hSeX [102] [102];
    int otWJCzOXs [102] [102];
    int Xzi6P4tFpq [102] [102] = {0};
    scanf ("%d%d", &kfIhGDbMlw4V, &W5bPSu);
    {
        aiayfJnb = 0;
        while (aiayfJnb < kfIhGDbMlw4V) {
            {
                VGOyxC = 0;
                while (VGOyxC < W5bPSu) {
                    scanf ("%d", &TBGW7hSeX[aiayfJnb][VGOyxC]);
                    VGOyxC++;
                }
            }
            aiayfJnb++;
        }
    }
    scanf ("%d%d", &txQswdq, &LartfmeiCFSM);
    {
        aiayfJnb = 0;
        while (aiayfJnb < txQswdq) {
            {
                VGOyxC = 0;
                while (LartfmeiCFSM > VGOyxC) {
                    scanf ("%d", &otWJCzOXs[aiayfJnb][VGOyxC]);
                    VGOyxC++;
                }
            }
            aiayfJnb++;
        }
    }
    {
        aiayfJnb = 0;
        while (aiayfJnb < kfIhGDbMlw4V) {
            {
                lOaKisg80kl = 0;
                while (lOaKisg80kl < LartfmeiCFSM -1) {
                    {
                        VGOyxC = 0;
                        while (VGOyxC < W5bPSu) {
                            Xzi6P4tFpq[aiayfJnb][lOaKisg80kl] = Xzi6P4tFpq[aiayfJnb][lOaKisg80kl] + TBGW7hSeX[aiayfJnb][VGOyxC] * otWJCzOXs[VGOyxC][lOaKisg80kl];
                            VGOyxC++;
                        }
                    }
                    printf ("%d ", Xzi6P4tFpq[aiayfJnb][lOaKisg80kl]);
                    lOaKisg80kl++;
                }
            }
            {
                VGOyxC = 0;
                while (VGOyxC < W5bPSu) {
                    Xzi6P4tFpq[aiayfJnb][LartfmeiCFSM -1] = Xzi6P4tFpq[aiayfJnb][LartfmeiCFSM -1] + TBGW7hSeX[aiayfJnb][VGOyxC] * otWJCzOXs[VGOyxC][LartfmeiCFSM -1];
                    VGOyxC++;
                }
            }
            printf ("%d\n", Xzi6P4tFpq[aiayfJnb][LartfmeiCFSM -1]);
            aiayfJnb++;
        }
    }
}

