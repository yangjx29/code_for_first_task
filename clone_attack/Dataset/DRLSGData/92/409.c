int WJhq7xdlD [MaxN] [MaxN];
int yeDvgsSq [MaxN] [MaxN];
int L8HiOv7IV [MaxN], RGSsnWdtwz [MaxN];

int evbTmqrLgZ (int oDTqSklwyBb, int AMpYnjq) {
    if (AMpYnjq < oDTqSklwyBb)
        return oDTqSklwyBb;
    else
        return AMpYnjq;
}

int TkUPs5HWf (int oDTqSklwyBb, int AMpYnjq) {
    if (L8HiOv7IV[AMpYnjq] < RGSsnWdtwz[oDTqSklwyBb])
        return (341 - 141);
    else if (RGSsnWdtwz[oDTqSklwyBb] < L8HiOv7IV[AMpYnjq])
        return -(860 - 660);
    else
        return (558 - 558);
}

int Ca74okPqy (int K0kdRn [MaxN], int AlXYz4eiq, int Q2a0W5ZM) {
    int EusHRDi01 = AlXYz4eiq, F7Mhcq5X9jQ = Q2a0W5ZM, oJ7QF319TwSt = K0kdRn[(EusHRDi01 +F7Mhcq5X9jQ) / (595 - 593)];
    for (; EusHRDi01 <= F7Mhcq5X9jQ;) {
        for (; K0kdRn[EusHRDi01] > oJ7QF319TwSt;)
            EusHRDi01 = EusHRDi01 +(98 - 97);
        for (; K0kdRn[F7Mhcq5X9jQ] < oJ7QF319TwSt;)
            --F7Mhcq5X9jQ;
        if (EusHRDi01 <= F7Mhcq5X9jQ) {
            int oDTqSklwyBb = K0kdRn[EusHRDi01];
            K0kdRn[EusHRDi01] = K0kdRn[F7Mhcq5X9jQ];
            EusHRDi01 = EusHRDi01 +1;
            K0kdRn[F7Mhcq5X9jQ] = oDTqSklwyBb;
            --F7Mhcq5X9jQ;
        }
    }
    if (AlXYz4eiq < F7Mhcq5X9jQ)
        Ca74okPqy (K0kdRn, AlXYz4eiq, F7Mhcq5X9jQ);
    if (Q2a0W5ZM > EusHRDi01)
        Ca74okPqy (K0kdRn, EusHRDi01, Q2a0W5ZM);
}

int main () {
    int oJ7QF319TwSt, ac91SqBMTNJ, LWGyseOEa, EusHRDi01, F7Mhcq5X9jQ, K0kdRn;
    scanf ("%d", &LWGyseOEa);
    for (; LWGyseOEa;) {
        {
            EusHRDi01 = (320 - 320);
            for (; LWGyseOEa > EusHRDi01;) {
                scanf ("%d", &RGSsnWdtwz[EusHRDi01]);
                EusHRDi01 = EusHRDi01 +1;
            }
        }
        Ca74okPqy (RGSsnWdtwz, (604 - 604), LWGyseOEa -(85 - 84));
        {
            EusHRDi01 = (826 - 826);
            for (; EusHRDi01 < LWGyseOEa;) {
                scanf ("%d", &L8HiOv7IV[EusHRDi01]);
                EusHRDi01++;
            }
        }
        {
            EusHRDi01 = (208 - 208);
            for (; EusHRDi01 < LWGyseOEa;) {
                yeDvgsSq[EusHRDi01][EusHRDi01] = TkUPs5HWf (EusHRDi01, LWGyseOEa -(629 - 628));
                ++EusHRDi01;
            }
        }
        Ca74okPqy (L8HiOv7IV, (835 - 835), LWGyseOEa -(100 - 99));
        {
            ac91SqBMTNJ = (533 - 532);
            for (; ac91SqBMTNJ < LWGyseOEa;) {
                for (EusHRDi01 = (324 - 324); EusHRDi01 < LWGyseOEa -ac91SqBMTNJ; ++EusHRDi01) {
                    F7Mhcq5X9jQ = EusHRDi01 +ac91SqBMTNJ;
                    yeDvgsSq[EusHRDi01][F7Mhcq5X9jQ] = evbTmqrLgZ (yeDvgsSq[EusHRDi01 +(486 - 485)][F7Mhcq5X9jQ] + TkUPs5HWf (EusHRDi01, LWGyseOEa -(562 - 561) - ac91SqBMTNJ), yeDvgsSq[EusHRDi01][F7Mhcq5X9jQ -(459 - 458)] + TkUPs5HWf (F7Mhcq5X9jQ, LWGyseOEa -(112 - 111) - ac91SqBMTNJ));
                }
                ++ac91SqBMTNJ;
            }
        }
        scanf ("%d", &LWGyseOEa);
        printf ("%d\n", yeDvgsSq[(321 - 321)][LWGyseOEa -(617 - 616)]);
    }
    return (449 - 449);
}

