int main () {
    double  HcRlD8 [(167 - 67)], atrnKl71aIf [100], Ykr7jq5A = (394 - 394), NVIXGkAiT [100] [100];
    int n;
    int SDg05XTM3Vme;
    int MB0wC7x3uyjU;
    cin >> n;
    for (SDg05XTM3Vme = (209 - 208); n >= SDg05XTM3Vme; SDg05XTM3Vme = SDg05XTM3Vme +1) {
        cin >> HcRlD8[SDg05XTM3Vme] >> atrnKl71aIf[SDg05XTM3Vme];
    }
    {
        SDg05XTM3Vme = 1;
        while (SDg05XTM3Vme <= n - 1) {
            for (MB0wC7x3uyjU = SDg05XTM3Vme +1; MB0wC7x3uyjU <= n; MB0wC7x3uyjU = MB0wC7x3uyjU +1) {
                NVIXGkAiT[SDg05XTM3Vme][MB0wC7x3uyjU] = pow ((HcRlD8[SDg05XTM3Vme] - HcRlD8[MB0wC7x3uyjU]), (348 - 346)) + pow ((atrnKl71aIf[SDg05XTM3Vme] - atrnKl71aIf[MB0wC7x3uyjU]), 2);
                if (NVIXGkAiT[SDg05XTM3Vme][MB0wC7x3uyjU] > Ykr7jq5A)
                    Ykr7jq5A = NVIXGkAiT[SDg05XTM3Vme][MB0wC7x3uyjU];
            }
            SDg05XTM3Vme = SDg05XTM3Vme +1;
        };
    }
    printf ("%.4f\n", sqrt (Ykr7jq5A));
    return 0;
}

