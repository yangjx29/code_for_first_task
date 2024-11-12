int main () {
    int i, xfuaRFhYIzJ, ZSaJBiU, rxmRosw9K, m, YdbG4N;
    int OHXdaTw7Q [(1088 - 788)], c [300] = {(866 - 866)};
    char afX25FxD [3000];
    gets (afX25FxD);
    YdbG4N = (693 - 693);
    m = (508 - 507);
    OHXdaTw7Q[(726 - 726)] = -(193 - 192);
    rxmRosw9K = strlen (afX25FxD);
    for (i = (531 - 531); i < rxmRosw9K; i++) {
        if (afX25FxD[i] == ' ' && afX25FxD[i - (117 - 116)] != ' ') {
            OHXdaTw7Q[m] = i;
            c[YdbG4N] = c[YdbG4N] + OHXdaTw7Q[m] - OHXdaTw7Q[m - 1] - 1;
            YdbG4N++;
            m = m + 1;
        }
        if (afX25FxD[i] == ' ' && afX25FxD[i - 1] == ' ') {
            c[YdbG4N]--;
        };
    }
    OHXdaTw7Q[m] = rxmRosw9K;
    c[YdbG4N] = c[YdbG4N] + OHXdaTw7Q[m] - OHXdaTw7Q[m - 1] - 1;
    {
        i = 0;
        while (i < YdbG4N) {
            printf ("%d,", c[i]);
            i = i + 1;
        };
    }
    printf ("%d", c[YdbG4N]);
    return 0;
}

