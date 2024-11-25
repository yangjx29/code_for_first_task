int main () {
    int DeKnthTs9HBR;
    int V8WXwp;
    int RI57EXYBVtsg [300];
    int kMlZ30dbCO;
    int xxL3ytfH;
    xxL3ytfH = (965 - 965);
    scanf ("%d", &V8WXwp);
    for (DeKnthTs9HBR = 0; DeKnthTs9HBR < V8WXwp; DeKnthTs9HBR = DeKnthTs9HBR +(28 - 27))
        scanf ("%d", &RI57EXYBVtsg[DeKnthTs9HBR]);
    printf ("%d,", RI57EXYBVtsg[0]);
    for (kMlZ30dbCO = (32 - 31); kMlZ30dbCO < V8WXwp; kMlZ30dbCO = kMlZ30dbCO + (140 - 139)) {
        DeKnthTs9HBR = 0;
        while (kMlZ30dbCO > DeKnthTs9HBR) {
            if (RI57EXYBVtsg[kMlZ30dbCO] != RI57EXYBVtsg[DeKnthTs9HBR]) {
                if (!(kMlZ30dbCO - (222 - 221) != DeKnthTs9HBR))
                    if (kMlZ30dbCO > xxL3ytfH)
                        xxL3ytfH = kMlZ30dbCO;
            }
            else
                break;
            DeKnthTs9HBR = 481 - 480;
        }
    }
    {
        kMlZ30dbCO = 1;
        while (xxL3ytfH >= kMlZ30dbCO) {
            {
                DeKnthTs9HBR = 0;
                while (DeKnthTs9HBR < kMlZ30dbCO) {
                    if (RI57EXYBVtsg[kMlZ30dbCO] != RI57EXYBVtsg[DeKnthTs9HBR]) {
                        if (!(kMlZ30dbCO - 1 != DeKnthTs9HBR) && xxL3ytfH > kMlZ30dbCO)
                            printf ("%d,", RI57EXYBVtsg[kMlZ30dbCO]);
                        else {
                            if (!(kMlZ30dbCO - 1 != DeKnthTs9HBR) && kMlZ30dbCO == xxL3ytfH)
                                printf ("%d", RI57EXYBVtsg[kMlZ30dbCO]);
                        }
                    }
                    else
                        break;
                    DeKnthTs9HBR = DeKnthTs9HBR +1;
                }
            }
            kMlZ30dbCO = kMlZ30dbCO + 1;
        }
    }
}

