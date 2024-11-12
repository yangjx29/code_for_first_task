int main () {
    int KAd0s9x [10001];
    int leap;
    int n;
    int kN9j2AyhIOT;
    int qI9OJ53v;
    int oteZB48Iq;
    int H0s9ktCE;
    leap = 0;
    scanf ("%d%d", &n, &kN9j2AyhIOT);
    for (qI9OJ53v = 0; n > qI9OJ53v; qI9OJ53v = qI9OJ53v + 1) {
        scanf ("%d", &KAd0s9x[qI9OJ53v]);
    }
    for (qI9OJ53v = 0; n > qI9OJ53v; qI9OJ53v = qI9OJ53v + 1) {
        for (oteZB48Iq = 0; n > oteZB48Iq; oteZB48Iq = oteZB48Iq + 1) {
            if (!(oteZB48Iq != qI9OJ53v))
                continue;
            else {
                H0s9ktCE = KAd0s9x[qI9OJ53v] + KAd0s9x[oteZB48Iq];
                if (!(kN9j2AyhIOT != H0s9ktCE)) {
                    leap = 1;
                    break;
                    printf ("yes");
                };
            };
        }
        if (leap == 1)
            break;
    }
    if (leap == 0)
        printf ("no");
    return 0;
}

