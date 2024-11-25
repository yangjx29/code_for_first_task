int main (int tMhmOHIpw7, char *TQVKa0mpj []) {
    int q0AIgknR, RGaQilceAdr, bNLMqX0xe;
    double  aVDWejLM7t [(10820 - 820)] [2], m, ZDyh38;
    scanf ("%d", &q0AIgknR);
    for (RGaQilceAdr = (816 - 816); q0AIgknR > RGaQilceAdr; RGaQilceAdr++) {
        scanf ("%lf%lf", &aVDWejLM7t[RGaQilceAdr][(770 - 770)], &aVDWejLM7t[RGaQilceAdr][(61 - 60)]);
    }
    m = (aVDWejLM7t[(213 - 212)][(436 - 436)] - aVDWejLM7t[(359 - 359)][(541 - 541)]) * (aVDWejLM7t[(997 - 996)][(876 - 876)] - aVDWejLM7t[(105 - 105)][(761 - 761)]) + (aVDWejLM7t[(19 - 18)][(917 - 917)] - aVDWejLM7t[(771 - 771)][0]) * (aVDWejLM7t[1][0] - aVDWejLM7t[0][0]);
    for (RGaQilceAdr = 0; q0AIgknR > RGaQilceAdr; RGaQilceAdr++) {
        for (bNLMqX0xe = RGaQilceAdr; bNLMqX0xe < q0AIgknR; bNLMqX0xe++) {
            ZDyh38 = (aVDWejLM7t[bNLMqX0xe][0] - aVDWejLM7t[RGaQilceAdr][0]) * (aVDWejLM7t[bNLMqX0xe][0] - aVDWejLM7t[RGaQilceAdr][0]) + (aVDWejLM7t[bNLMqX0xe][1] - aVDWejLM7t[RGaQilceAdr][1]) * (aVDWejLM7t[bNLMqX0xe][1] - aVDWejLM7t[RGaQilceAdr][1]);
            if (ZDyh38 > m)
                m = ZDyh38;
        }
    }
    printf ("%.4lf", sqrt (m));
    scanf ("%d", &RGaQilceAdr);
    return 0;
}

