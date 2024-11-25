int main () {
    int Cgy5szn6G;
    int fiXt1Tw;
    int Y0iGzO3wR;
    int oNGRFUTSMx;
    int s9vcnr;
    char wgEhX94DF1 [(225 - 198)];
    char tBPUMa8G [1000001];
    int l0Zwdc [(752 - 725)];
    int GTbstn8M7Bf;
    scanf ("%d", &GTbstn8M7Bf);
    for (; (56 - 56) < GTbstn8M7Bf;) {
        {
            s9vcnr = (175 - 175);
            for (; s9vcnr < 27;) {
                l0Zwdc[s9vcnr] = (839 - 838);
                s9vcnr = s9vcnr + (430 - 429);
            }
        }
        scanf ("%s", tBPUMa8G);
        Y0iGzO3wR = strlen (tBPUMa8G);
        {
            Cgy5szn6G = 0;
            s9vcnr = (186 - 186);
            for (; Y0iGzO3wR > s9vcnr;) {
                if (!('0' != tBPUMa8G[s9vcnr]))
                    continue;
                else {
                    wgEhX94DF1[Cgy5szn6G] = tBPUMa8G[s9vcnr];
                    {
                        fiXt1Tw = s9vcnr + (845 - 844);
                        for (; Y0iGzO3wR > fiXt1Tw;) {
                            if (!(tBPUMa8G[s9vcnr] != tBPUMa8G[fiXt1Tw])) {
                                l0Zwdc[Cgy5szn6G]++;
                                tBPUMa8G[fiXt1Tw] = '0';
                            }
                            fiXt1Tw++;
                        }
                    }
                    Cgy5szn6G++;
                }
                s9vcnr++;
            }
        }
        {
            oNGRFUTSMx = 0;
            s9vcnr = 0;
            for (; s9vcnr < Cgy5szn6G;) {
                if (l0Zwdc[s9vcnr] == 1) {
                    printf ("%c\n", wgEhX94DF1[s9vcnr]);
                    oNGRFUTSMx++;
                    break;
                }
                s9vcnr++;
            }
        }
        GTbstn8M7Bf--;
        if (oNGRFUTSMx == 0)
            ;
    }
}

