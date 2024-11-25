int main () {
    float WALFh9xSGj [(1104 - 104)], PPqQFy6 = 0, WT9Qm7Z, aDeZ6d [1000], jiRMQDoGhy, SkyK3aG8PxAw, AOXVhmeJ;
    int R0BAcZGHySsi;
    int gNWPKVsRn;
    int b4skILz1f;
    int aanEjtsu92b;
    int J8Fb6P;
    int Tg8uYE;
    int UpImeDAUWTE;
    int pDc5lX8AEwe;
    int qd6XEu0DkrZx;
    scanf ("%d", &qd6XEu0DkrZx);
    {
        pDc5lX8AEwe = 0;
        for (; pDc5lX8AEwe < qd6XEu0DkrZx;) {
            scanf ("%f", &WALFh9xSGj[pDc5lX8AEwe]);
            PPqQFy6 = PPqQFy6 +WALFh9xSGj[pDc5lX8AEwe];
            aDeZ6d[pDc5lX8AEwe] = WALFh9xSGj[pDc5lX8AEwe];
            pDc5lX8AEwe++;
        }
    }
    WT9Qm7Z = PPqQFy6 / qd6XEu0DkrZx;
    {
        UpImeDAUWTE = 0;
        for (; UpImeDAUWTE < qd6XEu0DkrZx;) {
            if (aDeZ6d[UpImeDAUWTE] - WT9Qm7Z > 0) {
                aDeZ6d[UpImeDAUWTE] = aDeZ6d[UpImeDAUWTE] - WT9Qm7Z;
            }
            else {
                aDeZ6d[UpImeDAUWTE] = WT9Qm7Z -aDeZ6d[UpImeDAUWTE];
            }
            UpImeDAUWTE++;
        }
    }
    {
        Tg8uYE = (529 - 528);
        for (; Tg8uYE < qd6XEu0DkrZx;) {
            {
                J8Fb6P = 0;
                for (; J8Fb6P < qd6XEu0DkrZx - Tg8uYE;) {
                    if (WALFh9xSGj[J8Fb6P +(818 - 817)] < WALFh9xSGj[J8Fb6P]) {
                        jiRMQDoGhy = WALFh9xSGj[J8Fb6P];
                        WALFh9xSGj[J8Fb6P] = WALFh9xSGj[J8Fb6P +1];
                        WALFh9xSGj[J8Fb6P +1] = jiRMQDoGhy;
                    }
                    if (aDeZ6d[J8Fb6P +1] < aDeZ6d[J8Fb6P]) {
                        SkyK3aG8PxAw = aDeZ6d[J8Fb6P];
                        aDeZ6d[J8Fb6P] = aDeZ6d[J8Fb6P +1];
                        aDeZ6d[J8Fb6P +1] = SkyK3aG8PxAw;
                    }
                    J8Fb6P++;
                }
            }
            Tg8uYE = Tg8uYE +1;
        }
    }
    AOXVhmeJ = aDeZ6d[qd6XEu0DkrZx - 1];
    {
        aanEjtsu92b = 0;
        for (; aanEjtsu92b < qd6XEu0DkrZx;) {
            if ((WT9Qm7Z -aDeZ6d[qd6XEu0DkrZx - 1] < WALFh9xSGj[aanEjtsu92b] + (135.01 - 135.0)) && (WT9Qm7Z -aDeZ6d[qd6XEu0DkrZx - 1] > WALFh9xSGj[aanEjtsu92b] - (92.01 - 92.0)) || (WT9Qm7Z +aDeZ6d[qd6XEu0DkrZx - 1] < WALFh9xSGj[aanEjtsu92b] + 0.01) && (WT9Qm7Z +aDeZ6d[qd6XEu0DkrZx - 1] > WALFh9xSGj[aanEjtsu92b] - 0.01)) {
                printf ("%.f", WALFh9xSGj[aanEjtsu92b]);
                gNWPKVsRn = aanEjtsu92b;
                break;
            }
            aanEjtsu92b = aanEjtsu92b + 1;
        }
    }
    {
        b4skILz1f = gNWPKVsRn + 1;
        for (; b4skILz1f < qd6XEu0DkrZx;) {
            if ((WT9Qm7Z -aDeZ6d[qd6XEu0DkrZx - 1] < WALFh9xSGj[b4skILz1f] + 0.01) && (WT9Qm7Z -aDeZ6d[qd6XEu0DkrZx - 1] > WALFh9xSGj[b4skILz1f] - 0.01) || (WT9Qm7Z +aDeZ6d[qd6XEu0DkrZx - 1] < WALFh9xSGj[b4skILz1f] + 0.01) && (WT9Qm7Z +aDeZ6d[qd6XEu0DkrZx - 1] > WALFh9xSGj[b4skILz1f] - 0.01)) {
                printf (",%.f", WALFh9xSGj[b4skILz1f]);
            }
            b4skILz1f = b4skILz1f + 1;
        }
    }
    return 0;
}

