int main (int tsJUbTR, char *RP8jAmZHFW0 []) {
    int ouxhlOwmUW [100], D12mwlyfoIs, aDeAVlCc9Mw = 0, C5A0Im86 = 0, MdGg6n = 0, TgXYhND1 = 0, kg5NX9ZPC, mot207;
    scanf ("%d", &D12mwlyfoIs);
    for (kg5NX9ZPC = 0; D12mwlyfoIs > kg5NX9ZPC; kg5NX9ZPC = kg5NX9ZPC + 1) {
        scanf ("%d", &ouxhlOwmUW[kg5NX9ZPC]);
    }
    for (kg5NX9ZPC = 0, aDeAVlCc9Mw = 0, C5A0Im86 = 0, MdGg6n = 0, TgXYhND1 = 0; kg5NX9ZPC < D12mwlyfoIs; kg5NX9ZPC = kg5NX9ZPC + 1) {
        if (18 >= ouxhlOwmUW[kg5NX9ZPC]) {
            aDeAVlCc9Mw += 1;
        }
        else if (35 >= ouxhlOwmUW[kg5NX9ZPC]) {
            C5A0Im86 += 1;
        }
        else if (ouxhlOwmUW[kg5NX9ZPC] <= 60) {
            MdGg6n += 1;
        }
        else if (ouxhlOwmUW[kg5NX9ZPC] > 60) {
            TgXYhND1 += 1;
        }
    }
    printf ("1-18: %.2lf%%\n", ((double ) aDeAVlCc9Mw) / D12mwlyfoIs *100);
    printf ("19-35: %.2lf%%\n", ((double ) C5A0Im86) / D12mwlyfoIs *100);
    printf ("36-60: %.2lf%%\n", ((double ) MdGg6n) / D12mwlyfoIs *100);
    printf ("60??: %.2lf%%\n", ((double ) TgXYhND1) / D12mwlyfoIs *100);
    return 0;
}

