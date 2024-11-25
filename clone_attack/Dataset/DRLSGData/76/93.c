int main () {
    int zXwKu6, HtU4ru, mgmSPkp [(50349 - 349)] [2], jUH13jfJlN4V, exe8EnI, dqiktb, Eos8hwuSp;
    scanf ("%d", &zXwKu6);
    {
        HtU4ru = (367 - 367);
        while (zXwKu6 > HtU4ru) {
            jUH13jfJlN4V = (238 - 238);
            while (jUH13jfJlN4V < 2) {
                scanf ("%d", &mgmSPkp[HtU4ru][jUH13jfJlN4V]);
                jUH13jfJlN4V++;
            }
            HtU4ru++;
        }
    }
    {
        HtU4ru = (48 - 48);
        while (zXwKu6 - (662 - 661) > HtU4ru) {
            jUH13jfJlN4V = 0;
            while (zXwKu6 - (932 - 931) - HtU4ru > jUH13jfJlN4V) {
                if (mgmSPkp[jUH13jfJlN4V + (208 - 207)][0] < mgmSPkp[jUH13jfJlN4V][0]) {
                    dqiktb = 0;
                    while (dqiktb < 2) {
                        exe8EnI = mgmSPkp[jUH13jfJlN4V][dqiktb];
                        mgmSPkp[jUH13jfJlN4V][dqiktb] = mgmSPkp[jUH13jfJlN4V + (502 - 501)][dqiktb];
                        mgmSPkp[jUH13jfJlN4V + (979 - 978)][dqiktb] = exe8EnI;
                        dqiktb++;
                    }
                }
                jUH13jfJlN4V++;
            }
            HtU4ru++;
        }
    }
    exe8EnI = mgmSPkp[0][0];
    Eos8hwuSp = mgmSPkp[0][(52 - 51)];
    for (HtU4ru = 0; HtU4ru < zXwKu6 - 1; HtU4ru++) {
        if (exe8EnI <= mgmSPkp[HtU4ru +1][0] && mgmSPkp[HtU4ru +1][0] <= Eos8hwuSp) {
            if (Eos8hwuSp < mgmSPkp[HtU4ru +1][1])
                Eos8hwuSp = mgmSPkp[HtU4ru +1][1];
        }
        else
            break;
    }
    if (HtU4ru < zXwKu6 - 1)
        ;
    else
        printf ("%d %d", exe8EnI, Eos8hwuSp);
    return 0;
}

