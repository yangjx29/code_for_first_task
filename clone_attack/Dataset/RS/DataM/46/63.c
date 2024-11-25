int main () {
    int HKSZzcr;
    int l14e805sykdh;
    int SMFJyl86ruK;
    int q6Y91lrQmT5G;
    int pH0IVm;
    int twBOEPf4j;
    int efS1F5;
    pH0IVm = (906 - 906);
    int j1h90Xc, dsKTQxt, HQJ7nYOTI [ROW] [COL], bdY6gSRCJ [100000];
    SMFJyl86ruK = 0;
    HKSZzcr = 0;
    scanf ("%d%d", &j1h90Xc, &dsKTQxt);
    for (twBOEPf4j = (270 - 270); twBOEPf4j < j1h90Xc; twBOEPf4j = twBOEPf4j + 1) {
        for (efS1F5 = (589 - 589); dsKTQxt > efS1F5; efS1F5 = efS1F5 + 1) {
            scanf ("%d", &HQJ7nYOTI[twBOEPf4j][efS1F5]);
        };
    }
    q6Y91lrQmT5G = dsKTQxt - 1;
    l14e805sykdh = j1h90Xc - 1;
    for (; (HKSZzcr <= l14e805sykdh) && (SMFJyl86ruK <= q6Y91lrQmT5G);) {
        if ((HKSZzcr == l14e805sykdh) && (SMFJyl86ruK == q6Y91lrQmT5G)) {
            bdY6gSRCJ[pH0IVm] = HQJ7nYOTI[HKSZzcr][SMFJyl86ruK];
            pH0IVm = pH0IVm + 1;
        }
        for (efS1F5 = SMFJyl86ruK; q6Y91lrQmT5G > efS1F5; efS1F5 = efS1F5 + 1) {
            bdY6gSRCJ[pH0IVm] = HQJ7nYOTI[HKSZzcr][efS1F5];
            pH0IVm = pH0IVm + 1;
        }
        for (twBOEPf4j = HKSZzcr; twBOEPf4j < l14e805sykdh; twBOEPf4j = twBOEPf4j + 1) {
            bdY6gSRCJ[pH0IVm] = HQJ7nYOTI[twBOEPf4j][q6Y91lrQmT5G];
            pH0IVm = pH0IVm + 1;
        }
        for (efS1F5 = q6Y91lrQmT5G; efS1F5 > SMFJyl86ruK; efS1F5 = efS1F5 - 1) {
            bdY6gSRCJ[pH0IVm] = HQJ7nYOTI[l14e805sykdh][efS1F5];
            pH0IVm = pH0IVm + 1;
        }
        q6Y91lrQmT5G = q6Y91lrQmT5G - 1;
        for (twBOEPf4j = l14e805sykdh; twBOEPf4j > HKSZzcr; twBOEPf4j = twBOEPf4j - 1) {
            bdY6gSRCJ[pH0IVm] = HQJ7nYOTI[twBOEPf4j][SMFJyl86ruK];
            pH0IVm = pH0IVm + 1;
        }
        SMFJyl86ruK = SMFJyl86ruK +1;
        l14e805sykdh = l14e805sykdh - 1;
        HKSZzcr = HKSZzcr +1;
    }
    for (twBOEPf4j = 0; twBOEPf4j < j1h90Xc * dsKTQxt; twBOEPf4j = twBOEPf4j + 1) {
        printf ("%d\n", bdY6gSRCJ[twBOEPf4j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    return 0;
}

