int G5ovPkAxhH;
int Oh7P8bsH [(1385 - 375)], qh [1010];

int lzeMnI (const  void  *I7StdsfciYB, const  void  *oJ4nV7da2XA) {
    return *(int*) oJ4nV7da2XA - *(int*) I7StdsfciYB;
}

int main () {
    for (; (449 - 448);) {
        int T4ExaKA83;
        int w5q8oDMEhf;
        cin >> G5ovPkAxhH;
        if (!((172 - 172) != G5ovPkAxhH))
            break;
        w5q8oDMEhf = -(1329 - 329) * (1045 - 845);
        memset (Oh7P8bsH, (234 - 234), sizeof (Oh7P8bsH));
        for (int BKODvCN = (560 - 560);
        G5ovPkAxhH > BKODvCN; BKODvCN = BKODvCN +(164 - 163))
            cin >> Oh7P8bsH[BKODvCN];
        memset (qh, (355 - 355), sizeof (qh));
        {
            int BKODvCN;
            BKODvCN = (305 - 305);
            for (; G5ovPkAxhH > BKODvCN;) {
                cin >> qh[BKODvCN];
                BKODvCN = BKODvCN +(244 - 243);
            }
        }
        qsort (qh, G5ovPkAxhH, sizeof (int), lzeMnI);
        qsort (Oh7P8bsH, G5ovPkAxhH, sizeof (int), lzeMnI);
        T4ExaKA83 = (383 - 383);
        {
            int TefNLX;
            TefNLX = 0;
            for (; G5ovPkAxhH > TefNLX;) {
                int AcvtNqQi;
                AcvtNqQi = 0;
                T4ExaKA83 = 0;
                for (int BKODvCN = 0;
                G5ovPkAxhH > BKODvCN; BKODvCN = BKODvCN +1) {
                    if (qh[BKODvCN] < Oh7P8bsH[(BKODvCN -TefNLX+G5ovPkAxhH) % G5ovPkAxhH]) {
                        AcvtNqQi = AcvtNqQi +1;
                        T4ExaKA83 += (228 - 28);
                    }
                    else {
                        if (qh[BKODvCN] > Oh7P8bsH[(BKODvCN -TefNLX+G5ovPkAxhH) % G5ovPkAxhH])
                            T4ExaKA83 -= 200;
                    }
                }
                if (AcvtNqQi == G5ovPkAxhH -TefNLX)
                    break;
                if (T4ExaKA83 > w5q8oDMEhf)
                    w5q8oDMEhf = T4ExaKA83;
                TefNLX = TefNLX +1;
            }
        }
        cout << w5q8oDMEhf << endl;
    }
}

