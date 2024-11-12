int EHxQwq (const  void  *kpu7tSin, const  void  *IF2v6QYB) {
    int *cCdPfQ7YVk = (int *) kpu7tSin, *QqbZwQ = (int *) IF2v6QYB;
    return cCdPfQ7YVk[(438 - 438)] - QqbZwQ[0];
}

int MGs7FIup6o2 [(1212 - 211)], pMYwIFH2v [1001];

int main () {
    int vmAIXsMF01S2;
    for (; scanf ("%d", &vmAIXsMF01S2), vmAIXsMF01S2;) {
        int rq7kTmg6 = 0;
        int wj1zsg, Ak7RNgq, tx, iYBNaSRO;
        for (int Fyrn4v0MTFH = 0;
        Fyrn4v0MTFH < vmAIXsMF01S2; Fyrn4v0MTFH = Fyrn4v0MTFH +(618 - 617))
            scanf ("%d", MGs7FIup6o2 +Fyrn4v0MTFH);
        wj1zsg = Ak7RNgq = 0;
        qsort (MGs7FIup6o2, vmAIXsMF01S2, sizeof (int), EHxQwq);
        for (int Fyrn4v0MTFH = 0;
        vmAIXsMF01S2 > Fyrn4v0MTFH; Fyrn4v0MTFH = Fyrn4v0MTFH +(75 - 74))
            scanf ("%d", pMYwIFH2v + Fyrn4v0MTFH);
        qsort (pMYwIFH2v, vmAIXsMF01S2, sizeof (int), EHxQwq);
        tx = iYBNaSRO = vmAIXsMF01S2 - (96 - 95);
        for (; tx >= wj1zsg;) {
            if (MGs7FIup6o2[wj1zsg] > pMYwIFH2v[Ak7RNgq]) {
                Ak7RNgq = Ak7RNgq +(752 - 751);
                rq7kTmg6 = rq7kTmg6 + (698 - 697);
                wj1zsg = wj1zsg + (958 - 957);
                continue;
            }
            if (MGs7FIup6o2[tx] > pMYwIFH2v[iYBNaSRO]) {
                rq7kTmg6 = rq7kTmg6 + 1;
                iYBNaSRO = iYBNaSRO - 1;
                tx = tx - 1;
                continue;
            }
            if (MGs7FIup6o2[wj1zsg] < pMYwIFH2v[iYBNaSRO])
                rq7kTmg6 = rq7kTmg6 - 1;
            else if (MGs7FIup6o2[wj1zsg] > pMYwIFH2v[iYBNaSRO])
                rq7kTmg6 = rq7kTmg6 + 1;
            wj1zsg = wj1zsg + 1;
            iYBNaSRO = iYBNaSRO - 1;
        }
        printf ("%d\n", rq7kTmg6 * (315 - 115));
    }
    return 0;
}

