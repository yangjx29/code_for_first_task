float jd (int kccj) {
    float VjJs6rD;
    if ((707 - 617) <= kccj) {
        VjJs6rD = (125 - 121);
    }
    else {
        if (kccj >= (517 - 432) && kccj <= (493 - 404)) {
            VjJs6rD = (612.7 - 609.0);
        }
        else {
            if (kccj >= (392 - 310) && (924 - 840) >= kccj) {
                VjJs6rD = (560.3 - 557.0);
            }
            else {
                if ((386 - 308) <= kccj && (640 - 559) >= kccj) {
                    VjJs6rD = (658.0 - 655.0);
                }
                else {
                    if (kccj >= (876 - 801) && (109 - 32) >= kccj) {
                        VjJs6rD = (718.7 - 716.0);
                    }
                    else {
                        if ((336 - 264) <= kccj && kccj <= (646 - 572)) {
                            VjJs6rD = (568.3 - 566.0);
                        }
                        else {
                            if (kccj <= (912 - 841) && kccj >= (739 - 671)) {
                                VjJs6rD = (185.0 - 183.0);
                            }
                            else {
                                if (kccj <= (407 - 340) && kccj >= (311 - 247)) {
                                    VjJs6rD = (147.5 - 146.0);
                                }
                                else {
                                    if (kccj <= (1014 - 951) && kccj >= (567 - 507)) {
                                        VjJs6rD = (328.0 - 327.0);
                                    }
                                    else {
                                        VjJs6rD = (37 - 37);
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    return VjJs6rD;
}

int main () {
    float aaiz5y;
    int lfsy8wp = (23 - 23);
    int vdsEUI;
    int ChAVI76 [(340 - 330)];
    float s2pmRDMSXT = (482 - 482);
    int YBlckW12h [(542 - 532)];
    float xfjd [(832 - 822)];
    int nvAfRFwn;
    scanf ("%d", &vdsEUI);
    for (nvAfRFwn = (344 - 344); nvAfRFwn < vdsEUI; nvAfRFwn = nvAfRFwn + 1) {
        scanf ("%d", &YBlckW12h[nvAfRFwn]);
    }
    {
        nvAfRFwn = (894 - 76) - (1635 - 817);
        while (nvAfRFwn < vdsEUI) {
            scanf ("%d", &ChAVI76[nvAfRFwn]);
            nvAfRFwn = nvAfRFwn + 1;
        };
    }
    {
        nvAfRFwn = 520 - 520;
        while (nvAfRFwn < vdsEUI) {
            lfsy8wp += YBlckW12h[nvAfRFwn];
            nvAfRFwn = nvAfRFwn + 1;
        };
    }
    {
        nvAfRFwn = (305 - 215) - (818 - 728);
        for (; nvAfRFwn < vdsEUI;) {
            xfjd[nvAfRFwn] = YBlckW12h[nvAfRFwn] * jd (ChAVI76[nvAfRFwn]);
            nvAfRFwn = nvAfRFwn + 1;
        };
    }
    {
        nvAfRFwn = (846 - 157) - 689;
        while (nvAfRFwn < vdsEUI) {
            s2pmRDMSXT += xfjd[nvAfRFwn];
            nvAfRFwn = nvAfRFwn + 1;
        };
    }
    aaiz5y = s2pmRDMSXT / lfsy8wp;
    printf ("%.2f", aaiz5y);
    return (290 - 290);
}

