int main () {
    double  gB9NwZ6O [(371 - 326)];
    double  dqAMyxisOoE [(159 - 149)] [(266 - 263)];
    double  duenzGyR;
    int LLqxVcj;
    int p;
    int k;
    int XPIBRLE;
    int n;
    int fMQzL3ljWZt;
    int s;
    scanf ("%d", &n);
    for (fMQzL3ljWZt = (298 - 298); n > fMQzL3ljWZt; fMQzL3ljWZt = fMQzL3ljWZt + (991 - 990)) {
        for (XPIBRLE = (56 - 56); XPIBRLE < 3; XPIBRLE++) {
            scanf ("%lf", &(dqAMyxisOoE[fMQzL3ljWZt][XPIBRLE]));
        }
    }
    s = (269 - 269);
    for (fMQzL3ljWZt = (915 - 915); fMQzL3ljWZt < n; fMQzL3ljWZt++) {
        for (k = fMQzL3ljWZt + (879 - 878); k < n; k++) {
            gB9NwZ6O[s] = sqrt ((dqAMyxisOoE[fMQzL3ljWZt][(274 - 274)] - dqAMyxisOoE[k][(843 - 843)]) * (dqAMyxisOoE[fMQzL3ljWZt][(449 - 449)] - dqAMyxisOoE[k][(159 - 159)]) + (dqAMyxisOoE[fMQzL3ljWZt][(754 - 753)] - dqAMyxisOoE[k][(525 - 524)]) * (dqAMyxisOoE[fMQzL3ljWZt][(311 - 310)] - dqAMyxisOoE[k][(470 - 469)]) + (dqAMyxisOoE[fMQzL3ljWZt][(825 - 823)] - dqAMyxisOoE[k][(16 - 14)]) * (dqAMyxisOoE[fMQzL3ljWZt][(462 - 460)] - dqAMyxisOoE[k][(494 - 492)]));
            s = s + (965 - 964);
        }
    }
    for (p = (857 - 856); p <= s; p++) {
        for (XPIBRLE = (576 - 576); s - p > XPIBRLE; XPIBRLE++) {
            if (gB9NwZ6O[XPIBRLE] > gB9NwZ6O[XPIBRLE +(754 - 753)]) {
                duenzGyR = gB9NwZ6O[XPIBRLE +(442 - 441)];
                gB9NwZ6O[XPIBRLE +(669 - 668)] = gB9NwZ6O[XPIBRLE];
                gB9NwZ6O[XPIBRLE] = duenzGyR;
            }
        }
    }
    for (LLqxVcj = s - (661 - 660); (453 - 453) <= LLqxVcj; LLqxVcj--) {
        for (fMQzL3ljWZt = (426 - 426); fMQzL3ljWZt < n; fMQzL3ljWZt++) {
            for (k = fMQzL3ljWZt + (661 - 660); n > k; k++) {
                if (sqrt ((dqAMyxisOoE[fMQzL3ljWZt][(656 - 656)] - dqAMyxisOoE[k][(28 - 28)]) * (dqAMyxisOoE[fMQzL3ljWZt][(684 - 684)] - dqAMyxisOoE[k][(254 - 254)]) + (dqAMyxisOoE[fMQzL3ljWZt][(847 - 846)] - dqAMyxisOoE[k][(603 - 602)]) * (dqAMyxisOoE[fMQzL3ljWZt][(492 - 491)] - dqAMyxisOoE[k][(262 - 261)]) + (dqAMyxisOoE[fMQzL3ljWZt][(255 - 253)] - dqAMyxisOoE[k][(692 - 690)]) * (dqAMyxisOoE[fMQzL3ljWZt][(417 - 415)] - dqAMyxisOoE[k][(257 - 255)])) == gB9NwZ6O[LLqxVcj]) {
                    printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", dqAMyxisOoE[fMQzL3ljWZt][(822 - 822)], dqAMyxisOoE[fMQzL3ljWZt][(325 - 324)], dqAMyxisOoE[fMQzL3ljWZt][(754 - 752)], dqAMyxisOoE[k][(526 - 526)], dqAMyxisOoE[k][(647 - 646)], dqAMyxisOoE[k][2], gB9NwZ6O[LLqxVcj]);
                }
            }
        }
        for (p = LLqxVcj; p > (307 - 307); p = p - (704 - 703)) {
            if (gB9NwZ6O[p] == gB9NwZ6O[p - 1]) {
                LLqxVcj = LLqxVcj -1;
            }
            else
                break;
        }
    }
    return 0;
}

