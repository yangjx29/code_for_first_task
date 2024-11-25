int main () {
    int fen (int X6uwIip, int sRPCE1wdgV, int MoxrCqGdY4, int *nfO8d3b5xL, int T0hiWscQCKS);
    int X6uwIip, sRPCE1wdgV, MoxrCqGdY4, ZbURKig2 = (306 - 305), T0hiWscQCKS = (853 - 853);
    int *nfO8d3b5xL;
    scanf ("%d%d", &X6uwIip, &sRPCE1wdgV);
    nfO8d3b5xL = &ZbURKig2;
    MoxrCqGdY4 = X6uwIip;
    printf ("%d", fen (X6uwIip, sRPCE1wdgV, MoxrCqGdY4, nfO8d3b5xL, T0hiWscQCKS));
    return 0;
}

int fen (int X6uwIip, int sRPCE1wdgV, int MoxrCqGdY4, int *nfO8d3b5xL, int T0hiWscQCKS) {
    int lgnjlxtTYCrM;
    int jXTGpNm5zx9l (int lgnjlxtTYCrM, int X6uwIip, int sRPCE1wdgV, int MoxrCqGdY4, int *nfO8d3b5xL, int T0hiWscQCKS);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (MoxrCqGdY4 == (436 - 435)) {
        T0hiWscQCKS = X6uwIip **nfO8d3b5xL + sRPCE1wdgV;
    }
    if (MoxrCqGdY4 != 1) {
        lgnjlxtTYCrM = fen (X6uwIip, sRPCE1wdgV, MoxrCqGdY4 -1, nfO8d3b5xL, T0hiWscQCKS);
        lgnjlxtTYCrM = jXTGpNm5zx9l (lgnjlxtTYCrM, X6uwIip, sRPCE1wdgV, MoxrCqGdY4, nfO8d3b5xL, T0hiWscQCKS);
        T0hiWscQCKS = X6uwIip *(lgnjlxtTYCrM / (X6uwIip -1)) + sRPCE1wdgV;
    }
    return T0hiWscQCKS;
}

int jXTGpNm5zx9l (int lgnjlxtTYCrM, int X6uwIip, int sRPCE1wdgV, int MoxrCqGdY4, int *nfO8d3b5xL, int T0hiWscQCKS) {
    int fen (int X6uwIip, int sRPCE1wdgV, int MoxrCqGdY4, int *nfO8d3b5xL, int T0hiWscQCKS);
    if (lgnjlxtTYCrM % (X6uwIip -1) != 0) {
        (*nfO8d3b5xL)++;
        lgnjlxtTYCrM = fen (X6uwIip, sRPCE1wdgV, MoxrCqGdY4 -1, nfO8d3b5xL, T0hiWscQCKS);
        lgnjlxtTYCrM = jXTGpNm5zx9l (lgnjlxtTYCrM, X6uwIip, sRPCE1wdgV, MoxrCqGdY4, nfO8d3b5xL, T0hiWscQCKS);
    }
    return lgnjlxtTYCrM;
}

