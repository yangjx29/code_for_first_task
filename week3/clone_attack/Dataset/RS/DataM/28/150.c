int main () {
    int UiLUcCqtmGfT [300];
    int siZVmfD;
    int KgIN8n3t6Q1;
    int m7OJXHiZ;
    int NSE0GxgHO;
    int sgb6KHPBs;
    int tsaKYVAg;
    char LHfNykJiq85 [999];
    gets (LHfNykJiq85);
    NSE0GxgHO = 0;
    sgb6KHPBs = (817 - 816);
    KgIN8n3t6Q1 = 0;
    siZVmfD = 0;
    m7OJXHiZ = 0;
    {
        siZVmfD = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (siZVmfD < 999) {
            if (!(' ' != LHfNykJiq85[siZVmfD]) && !(1 != sgb6KHPBs)) {
                sgb6KHPBs = 0;
                UiLUcCqtmGfT[KgIN8n3t6Q1] = siZVmfD - NSE0GxgHO;
                NSE0GxgHO = siZVmfD + 1;
                KgIN8n3t6Q1 = KgIN8n3t6Q1 +1;
            }
            else {
                if (LHfNykJiq85[siZVmfD] == ' ' && sgb6KHPBs == 0)
                    NSE0GxgHO = NSE0GxgHO +1;
                else if (LHfNykJiq85[siZVmfD] != ' ' && LHfNykJiq85[siZVmfD] != '\0')
                    sgb6KHPBs = 1;
                else if (LHfNykJiq85[siZVmfD] == '\0') {
                    UiLUcCqtmGfT[KgIN8n3t6Q1] = siZVmfD - NSE0GxgHO;
                    break;
                };
            }
            siZVmfD++;
        };
    }
    {
        m7OJXHiZ = 0;
        while (m7OJXHiZ < KgIN8n3t6Q1) {
            printf ("%d,", UiLUcCqtmGfT[m7OJXHiZ]);
            m7OJXHiZ++;
        };
    }
    printf ("%d", UiLUcCqtmGfT[KgIN8n3t6Q1]);
}

