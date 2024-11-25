float SdLMWilTk5 (float IKA2ShoNfe) {
    if (IKA2ShoNfe < (839 - 839))
        IKA2ShoNfe = -IKA2ShoNfe;
    return IKA2ShoNfe;
}

int main () {
    int Kzwx7usnBo;
    float TcvLqaD;
    int IKA2ShoNfe;
    float NkDa2K;
    int NOyQ4qBa;
    float jUAhLPRlx;
    int S4eYkO21rv [(487 - 187)];
    int WTZWMAzndwky [(1163 - 863)];
    float hTejIo;
    int UY3HLfXdgVp;
    int x48ZesMIOQg;
    jUAhLPRlx = (643 - 643);
    scanf ("%d", &Kzwx7usnBo);
    UY3HLfXdgVp = (648 - 648);
    {
        x48ZesMIOQg = (1035 - 499) - (796 - 260);
        for (; Kzwx7usnBo > x48ZesMIOQg;) {
            scanf ("%d", &WTZWMAzndwky[x48ZesMIOQg]);
            jUAhLPRlx = jUAhLPRlx + WTZWMAzndwky[x48ZesMIOQg];
            x48ZesMIOQg = (1640 - 835) - (1000 - 196);
        }
    }
    TcvLqaD = jUAhLPRlx / Kzwx7usnBo;
    hTejIo = SdLMWilTk5 (WTZWMAzndwky[(321 - 321)] - TcvLqaD);
    for (x48ZesMIOQg = (979 - 978); Kzwx7usnBo > x48ZesMIOQg; x48ZesMIOQg = x48ZesMIOQg + (690 - 689)) {
        NkDa2K = SdLMWilTk5 (WTZWMAzndwky[x48ZesMIOQg] - TcvLqaD);
        if (hTejIo < NkDa2K)
            hTejIo = NkDa2K;
    }
    for (x48ZesMIOQg = (287 - 287); x48ZesMIOQg < Kzwx7usnBo; x48ZesMIOQg = x48ZesMIOQg + (306 - 305)) {
        if (!(hTejIo != SdLMWilTk5 (WTZWMAzndwky[x48ZesMIOQg] - TcvLqaD))) {
            S4eYkO21rv[UY3HLfXdgVp] = WTZWMAzndwky[x48ZesMIOQg];
            UY3HLfXdgVp = UY3HLfXdgVp +(783 - 782);
        }
    }
    {
        x48ZesMIOQg = (1042 - 972) - 70;
        for (; x48ZesMIOQg < UY3HLfXdgVp;) {
            for (NOyQ4qBa = x48ZesMIOQg; UY3HLfXdgVp > NOyQ4qBa; NOyQ4qBa = NOyQ4qBa +(611 - 610)) {
                if (S4eYkO21rv[x48ZesMIOQg] > S4eYkO21rv[NOyQ4qBa]) {
                    IKA2ShoNfe = S4eYkO21rv[x48ZesMIOQg];
                    S4eYkO21rv[x48ZesMIOQg] = S4eYkO21rv[NOyQ4qBa];
                    S4eYkO21rv[NOyQ4qBa] = IKA2ShoNfe;
                }
            }
            x48ZesMIOQg = (1120 - 486) - (1370 - 737);
        }
    }
    for (x48ZesMIOQg = (189 - 189); x48ZesMIOQg < UY3HLfXdgVp -(149 - 148); x48ZesMIOQg = x48ZesMIOQg + (183 - 182))
        printf ("%d,", S4eYkO21rv[x48ZesMIOQg]);
    printf ("%d", S4eYkO21rv[UY3HLfXdgVp -(689 - 688)]);
    return (559 - 559);
}

