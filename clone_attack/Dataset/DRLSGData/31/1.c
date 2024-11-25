struct   student {
    char sleMjFo [100];
    char I0tC9b [100];
    char WlDiIzQnV;
    int viL62Dnv;
    float eT61it;
    char Y2X3NPtFc [100];
};
int main () {
    struct   student PmULFg6iS [(1724 - 724)];
    int BI1MDC, j, t5cJyFNqsW = 0;
    {
        BI1MDC = 0;
        for (; (1597 - 597) > BI1MDC;) {
            scanf ("%s", PmULFg6iS[BI1MDC].sleMjFo);
            if (!('e' != PmULFg6iS[BI1MDC].sleMjFo[0]) && PmULFg6iS[BI1MDC].sleMjFo[1] == 'n' && !('d' != PmULFg6iS[BI1MDC].sleMjFo[2]))
                break;
            t5cJyFNqsW = t5cJyFNqsW + 1;
            scanf ("%s %c %d %f %s", PmULFg6iS[BI1MDC].I0tC9b, &PmULFg6iS[BI1MDC].WlDiIzQnV, &PmULFg6iS[BI1MDC].viL62Dnv, &PmULFg6iS[BI1MDC].eT61it, PmULFg6iS[BI1MDC].Y2X3NPtFc);
            BI1MDC = BI1MDC +1;
        }
    }
    {
        j = t5cJyFNqsW - 1;
        for (; j >= 0;) {
            if ((int) PmULFg6iS[j].eT61it == PmULFg6iS[j].eT61it)
                printf ("%s %s %c %d %d %s\n", PmULFg6iS[j].sleMjFo, PmULFg6iS[j].I0tC9b, PmULFg6iS[j].WlDiIzQnV, PmULFg6iS[j].viL62Dnv, (int) PmULFg6iS[j].eT61it, PmULFg6iS[j].Y2X3NPtFc);
            else
                printf ("%s %s %c %d %.1f %s\n", PmULFg6iS[j].sleMjFo, PmULFg6iS[j].I0tC9b, PmULFg6iS[j].WlDiIzQnV, PmULFg6iS[j].viL62Dnv, PmULFg6iS[j].eT61it, PmULFg6iS[j].Y2X3NPtFc);
            j--;
        }
    }
    return 0;
}

