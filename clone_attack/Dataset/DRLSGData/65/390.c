int main () {
    int VRuHTmBoPSQ, yH0OcFrNt, T7rbuQ2F, C6JqhkL2W = 0, nB7UED4 = 0;
    int b [201];
    int K6WNFkAR [201] [201];
    scanf ("%d", &T7rbuQ2F);
    {
        VRuHTmBoPSQ = 0;
        while (VRuHTmBoPSQ < T7rbuQ2F) {
            {
                yH0OcFrNt = 0;
                while (yH0OcFrNt < 2) {
                    scanf ("%d", &K6WNFkAR[VRuHTmBoPSQ][yH0OcFrNt]);
                    yH0OcFrNt = yH0OcFrNt + 1;
                }
            }
            VRuHTmBoPSQ = VRuHTmBoPSQ +1;
        }
    }
    {
        yH0OcFrNt = 0;
        while (yH0OcFrNt < 2) {
            {
                VRuHTmBoPSQ = 0;
                while (VRuHTmBoPSQ < T7rbuQ2F) {
                    b[VRuHTmBoPSQ] = K6WNFkAR[VRuHTmBoPSQ][0];
                    VRuHTmBoPSQ = VRuHTmBoPSQ +1;
                }
            }
            {
                VRuHTmBoPSQ = 0;
                while (VRuHTmBoPSQ < T7rbuQ2F) {
                    if (K6WNFkAR[VRuHTmBoPSQ][1] == b[VRuHTmBoPSQ]) {
                        continue;
                    }
                    else if ((K6WNFkAR[VRuHTmBoPSQ][1] == 0 && b[VRuHTmBoPSQ] == 1) || (K6WNFkAR[VRuHTmBoPSQ][1] == 1 && b[VRuHTmBoPSQ] == 2) || (K6WNFkAR[VRuHTmBoPSQ][1] == 2 && b[VRuHTmBoPSQ] == 0)) {
                        C6JqhkL2W++;
                    }
                    else {
                        nB7UED4 = nB7UED4 + 1;
                    }
                    VRuHTmBoPSQ++;
                }
            }
            if (C6JqhkL2W == nB7UED4) {
            }
            else if (C6JqhkL2W > nB7UED4) {
            }
            else {
            }
            return 0;
            yH0OcFrNt++;
        }
    }
}

