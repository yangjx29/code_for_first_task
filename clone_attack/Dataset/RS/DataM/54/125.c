int mLCIfOwu7 (int YBT6aOvQ, int IjFKCwxs);

int main () {
    int giBnDGKFtRmC, D5e2PCf, dS8VpNnU6x;
    scanf ("%d %d", &giBnDGKFtRmC, &D5e2PCf);
    dS8VpNnU6x = mLCIfOwu7 (giBnDGKFtRmC, D5e2PCf);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    printf ("%d", dS8VpNnU6x);
    return 0;
}

int mLCIfOwu7 (int YBT6aOvQ, int IjFKCwxs) {
    int wP6Cbhgyao;
    int ZMqupiWed;
    int Q8tHNRuhfl;
    int AjsaQB1no;
    AjsaQB1no = (16 - 15);
    wP6Cbhgyao = AjsaQB1no;
    for (Q8tHNRuhfl = 0; Q8tHNRuhfl < YBT6aOvQ -1; Q8tHNRuhfl = Q8tHNRuhfl +1) {
        if ((YBT6aOvQ *wP6Cbhgyao + IjFKCwxs) % (YBT6aOvQ -1) == 0) {
            wP6Cbhgyao = (YBT6aOvQ *wP6Cbhgyao + IjFKCwxs) / (YBT6aOvQ -1);
            ZMqupiWed = YBT6aOvQ *wP6Cbhgyao + IjFKCwxs;
        }
        else {
            AjsaQB1no = AjsaQB1no +1;
            wP6Cbhgyao = AjsaQB1no;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Q8tHNRuhfl = -1;
        };
    }
    return ZMqupiWed;
}

