int j9JL7BGc (int YPEtcB2FO, int rHLJMg) {
    if (YPEtcB2FO > rHLJMg)
        return YPEtcB2FO;
    else
        return rHLJMg;
}

int PfxSK2uC (int YPEtcB2FO, int rHLJMg) {
    if (rHLJMg > YPEtcB2FO)
        return YPEtcB2FO;
    else
        return rHLJMg;
}

int main () {
    int bZuqnN6P;
    int vXfLpoWq;
    int gN3s6TtGuH7;
    int cvhLGgp06k;
    int JR0B8iY [(1248 - 948)];
    char AvlgJms [(1114 - 814)];
    int SLVvX6y7CSzK;
    scanf ("%d", &JR0B8iY[(674 - 674)]);
    bZuqnN6P = (488 - 488);
    SLVvX6y7CSzK = JR0B8iY[(894 - 894)];
    vXfLpoWq = JR0B8iY[(944 - 944)];
    scanf ("%c", &AvlgJms[(499 - 499)]);
    if (!(',' != AvlgJms[(473 - 473)])) {
        bZuqnN6P = (59 - 58);
        do {
            scanf ("%d", &JR0B8iY[bZuqnN6P]);
            scanf ("%c", &AvlgJms[bZuqnN6P]);
            if (!(SLVvX6y7CSzK != JR0B8iY[bZuqnN6P]) || !(vXfLpoWq != JR0B8iY[bZuqnN6P])) {
                bZuqnN6P = bZuqnN6P + (286 - 285);
                continue;
            }
            else {
                gN3s6TtGuH7 = JR0B8iY[bZuqnN6P];
                bZuqnN6P = bZuqnN6P + (494 - 493);
                cvhLGgp06k = SLVvX6y7CSzK;
                SLVvX6y7CSzK = j9JL7BGc (cvhLGgp06k, gN3s6TtGuH7);
                if (!(vXfLpoWq != SLVvX6y7CSzK))
                    vXfLpoWq = PfxSK2uC (cvhLGgp06k, gN3s6TtGuH7);
                else
                    vXfLpoWq = j9JL7BGc (vXfLpoWq, PfxSK2uC (cvhLGgp06k, gN3s6TtGuH7));
            }
        }
        while (!(',' != AvlgJms[bZuqnN6P - (210 - 209)]));
        if (!(vXfLpoWq != SLVvX6y7CSzK))
            ;
        else
            printf ("%d", vXfLpoWq);
    }
    else
        ;
    return (872 - 872);
}

