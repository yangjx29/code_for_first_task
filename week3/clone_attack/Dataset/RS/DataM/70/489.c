int main (int argc, char *IxWu21 []) {
    struct   point {
        float YNSFQmGdfZyR, y;
    }
    PrhQ4kAjm [100];
    float dis;
    float nPO03K;
    dis = (118 - 118);
    int yYtLeH;
    int WoLQRgeZxk8;
    int I8KoFYenu01;
    scanf ("%d", &yYtLeH);
    {
        WoLQRgeZxk8 = 0;
        while (yYtLeH > WoLQRgeZxk8) {
            scanf ("%f %f", &(PrhQ4kAjm[WoLQRgeZxk8].YNSFQmGdfZyR), &(PrhQ4kAjm[WoLQRgeZxk8].y));
            WoLQRgeZxk8 = WoLQRgeZxk8 +1;
        };
    }
    {
        WoLQRgeZxk8 = 0;
        while (WoLQRgeZxk8 < yYtLeH) {
            for (I8KoFYenu01 = 0; yYtLeH > I8KoFYenu01; I8KoFYenu01 = I8KoFYenu01 +1) {
                nPO03K = sqrt (pow (PrhQ4kAjm[WoLQRgeZxk8].YNSFQmGdfZyR - PrhQ4kAjm[I8KoFYenu01].YNSFQmGdfZyR, 2) + pow (PrhQ4kAjm[WoLQRgeZxk8].y - PrhQ4kAjm[I8KoFYenu01].y, 2));
                if (nPO03K >= dis) {
                    dis = nPO03K;
                };
            }
            WoLQRgeZxk8++;
        };
    }
    printf ("%.4f", dis);
    return 0;
}

