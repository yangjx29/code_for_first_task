void  V8Ly40qM (int xaqmY4Uz, int blumYwzxW, char SyUNqh []);

int main () {
    int kDL4lmxcIB;
    int DAK6QMdcOg;
    char SyUNqh [(547 - 47)];
    int blumYwzxW;
    cin.getline (SyUNqh, (1441 - 941));
    DAK6QMdcOg = strlen (SyUNqh);
    for (blumYwzxW = (549 - 547); DAK6QMdcOg >= blumYwzxW; blumYwzxW = blumYwzxW + (542 - 541)) {
        for (kDL4lmxcIB = (701 - 701); DAK6QMdcOg > kDL4lmxcIB; kDL4lmxcIB = kDL4lmxcIB + (48 - 47))
            V8Ly40qM (kDL4lmxcIB, blumYwzxW, SyUNqh);
    }
    return 0;
}

void  V8Ly40qM (int xaqmY4Uz, int blumYwzxW, char SyUNqh []) {
    int te47OUMR2x;
    int nq2l1ZO;
    int zexg5UpynRo;
    for (nq2l1ZO = xaqmY4Uz, zexg5UpynRo = xaqmY4Uz + blumYwzxW - (538 - 537); nq2l1ZO < zexg5UpynRo; zexg5UpynRo = zexg5UpynRo - (285 - 284), nq2l1ZO = nq2l1ZO + (35 - 34))
        if (SyUNqh[nq2l1ZO] != SyUNqh[zexg5UpynRo])
            break;
    if (nq2l1ZO >= zexg5UpynRo) {
        for (te47OUMR2x = xaqmY4Uz; te47OUMR2x < xaqmY4Uz + blumYwzxW; te47OUMR2x++)
            cout << SyUNqh[te47OUMR2x];
        cout << endl;
    }
}

