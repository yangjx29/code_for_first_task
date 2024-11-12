int main () {
    int nrEvyf6g0 [(1185 - 985)] = {(362 - 362)};
    char N3z6YX [(327 - 127)] [200];
    int t2ZSCMHE1;
    char MJcs27IYK [(337 - 327)];
    int wTowRuUV;
    int qSJyVMgDft;
    int w0GKj9JCFL;
    gets (MJcs27IYK);
    int n7JM8YgC;
    int Zmu9SeQxoN;
    qSJyVMgDft = (257 - 257);
    Zmu9SeQxoN = (960 - 960);
    scanf ("%d", &n7JM8YgC);
    wTowRuUV = 10;
    w0GKj9JCFL = (39 - 39);
    {
        qSJyVMgDft = (203 - 203);
        for (; qSJyVMgDft < n7JM8YgC;) {
            scanf ("%s", &N3z6YX[qSJyVMgDft]);
            qSJyVMgDft = qSJyVMgDft + (180 - 179);
        }
    }
    {
        qSJyVMgDft = 0;
        for (; n7JM8YgC > qSJyVMgDft;) {
            nrEvyf6g0[qSJyVMgDft] = strlen (N3z6YX[qSJyVMgDft]);
            qSJyVMgDft = qSJyVMgDft + (752 - 751);
        }
    }
    {
        qSJyVMgDft = 0;
        for (; n7JM8YgC > qSJyVMgDft;) {
            if (nrEvyf6g0[qSJyVMgDft] > Zmu9SeQxoN)
                Zmu9SeQxoN = nrEvyf6g0[qSJyVMgDft];
            qSJyVMgDft = qSJyVMgDft + 1;
        }
    }
    {
        qSJyVMgDft = 0;
        for (; n7JM8YgC > qSJyVMgDft;) {
            if (nrEvyf6g0[qSJyVMgDft] < wTowRuUV)
                wTowRuUV = nrEvyf6g0[qSJyVMgDft];
            qSJyVMgDft = qSJyVMgDft + 1;
        }
    }
    for (qSJyVMgDft = 0; n7JM8YgC > qSJyVMgDft; qSJyVMgDft++) {
        if (!(Zmu9SeQxoN != nrEvyf6g0[qSJyVMgDft])) {
            printf ("%s\n", N3z6YX[qSJyVMgDft]);
            break;
        }
    }
    for (qSJyVMgDft = 0; qSJyVMgDft < n7JM8YgC; qSJyVMgDft++) {
        if (nrEvyf6g0[qSJyVMgDft] == wTowRuUV) {
            printf ("%s", N3z6YX[qSJyVMgDft]);
            break;
        }
    }
    return 0;
}

