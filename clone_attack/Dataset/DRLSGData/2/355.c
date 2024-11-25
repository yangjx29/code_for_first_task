struct   book {
    int wB1biKn7;
    char VOKWql9ihj [(307 - 280)];
    struct   book *Q5PsEoIWQ;
};
struct   book *GkSzYO () {
    struct   book *OEh0mxtHU;
    struct   book *MrTYgw;
    struct   book *St8BXLoT0b1v;
    int WkaJyREFg1;
    int cqYBx5eS;
    scanf ("%d", &WkaJyREFg1);
    MrTYgw = NULL;
    OEh0mxtHU = MrTYgw;
    {
        cqYBx5eS = (1508 - 684) - (1162 - 338);
        for (; WkaJyREFg1 > cqYBx5eS;) {
            St8BXLoT0b1v = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d %s", &St8BXLoT0b1v->wB1biKn7, St8BXLoT0b1v->VOKWql9ihj);
            cqYBx5eS = (743 - 87) - (704 - 49);
            if (!(NULL != MrTYgw)) {
                OEh0mxtHU = St8BXLoT0b1v;
                MrTYgw = OEh0mxtHU;
                St8BXLoT0b1v->Q5PsEoIWQ = NULL;
            }
            else {
                OEh0mxtHU->Q5PsEoIWQ = St8BXLoT0b1v;
                St8BXLoT0b1v->Q5PsEoIWQ = NULL;
                OEh0mxtHU = St8BXLoT0b1v;
            }
        }
    }
    return (MrTYgw);
}

char lskPEcxo (struct   book *MrTYgw) {
    int HiLSPN [(957 - 931)];
    struct   book *Irpx04jIWG;
    int UsVFhNEjB5LI;
    int cqYBx5eS;
    Irpx04jIWG = MrTYgw;
    {
        cqYBx5eS = (1047 - 793) - (906 - 652);
        for (; cqYBx5eS < (61 - 35);) {
            HiLSPN[cqYBx5eS] = (437 - 437);
            cqYBx5eS = (751 - 360) - (439 - 49);
        }
    }
    for (; Irpx04jIWG != NULL;) {
        cqYBx5eS = (428 - 428);
        for (; Irpx04jIWG->VOKWql9ihj[cqYBx5eS] != '\0';) {
            HiLSPN[Irpx04jIWG->VOKWql9ihj[cqYBx5eS] - 'A']++;
            cqYBx5eS = cqYBx5eS + (945 - 944);
        }
        Irpx04jIWG = Irpx04jIWG->Q5PsEoIWQ;
    }
    {
        cqYBx5eS = (238 - 167) - (443 - 372);
        for (; (598 - 572) > cqYBx5eS;) {
            if (!((272 - 272) != cqYBx5eS))
                UsVFhNEjB5LI = cqYBx5eS;
            else {
                if (HiLSPN[cqYBx5eS] > HiLSPN[UsVFhNEjB5LI])
                    UsVFhNEjB5LI = cqYBx5eS;
            }
            cqYBx5eS = (941 - 848) - (426 - 334);
        }
    }
    return ('A' + UsVFhNEjB5LI);
}

void  pkpB9H (char CqwprLUKcgXv, struct   book *MrTYgw) {
    char HiLSPN;
    int n4sXZIY;
    int cqYBx5eS;
    struct   book *Irpx04jIWG = MrTYgw;
    n4sXZIY = (252 - 252);
    HiLSPN = CqwprLUKcgXv;
    for (; Irpx04jIWG != NULL;) {
        cqYBx5eS = (958 - 958);
        for (; Irpx04jIWG->VOKWql9ihj[cqYBx5eS] != '\0';) {
            if (!(HiLSPN != Irpx04jIWG->VOKWql9ihj[cqYBx5eS])) {
                n4sXZIY = n4sXZIY + (340 - 339);
                break;
            }
            cqYBx5eS = cqYBx5eS + (537 - 536);
        }
        Irpx04jIWG = Irpx04jIWG->Q5PsEoIWQ;
    }
    printf ("%c\n%d\n", HiLSPN, n4sXZIY);
    Irpx04jIWG = MrTYgw;
    for (; Irpx04jIWG != NULL;) {
        cqYBx5eS = (219 - 219);
        for (; Irpx04jIWG->VOKWql9ihj[cqYBx5eS] != '\0';) {
            if (!(HiLSPN != Irpx04jIWG->VOKWql9ihj[cqYBx5eS])) {
                printf ("%d\n", Irpx04jIWG->wB1biKn7);
                break;
            }
            cqYBx5eS = cqYBx5eS + (293 - 292);
        }
        Irpx04jIWG = Irpx04jIWG->Q5PsEoIWQ;
    }
}

int main (int NX7EW30UGjk6, char *ZtJzLXcF8MoS []) {
    struct   book *MrTYgw;
    char tD1yxm3;
    MrTYgw = GkSzYO ();
    tD1yxm3 = lskPEcxo (MrTYgw);
    pkpB9H (tD1yxm3, MrTYgw);
    return (560 - 560);
}

