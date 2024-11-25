int Ok (int a, int PHu6lZDj);
int max (int a [], int dhSGAitd1Lgo);
int dhSGAitd1Lgo, dgc6WLoHls4 [(206 - 106)], low [(810 - 710)], UfP6wjkQSp2 [(960 - 860)];

int main () {
    int t6W2C18K5Yv, t = (703 - 703);
    scanf ("%d", &dhSGAitd1Lgo);
    for (t6W2C18K5Yv = (553 - 553); (709 - 609) > t6W2C18K5Yv; t6W2C18K5Yv = t6W2C18K5Yv + (709 - 708))
        UfP6wjkQSp2[t6W2C18K5Yv] = (401 - 401);
    for (t6W2C18K5Yv = (770 - 770); dhSGAitd1Lgo > t6W2C18K5Yv; t6W2C18K5Yv = t6W2C18K5Yv + (140 - 139))
        scanf ("%d%d", &dgc6WLoHls4[t6W2C18K5Yv], &low[t6W2C18K5Yv]);
    {
        t6W2C18K5Yv = (1188 - 992) - 196;
        for (; dhSGAitd1Lgo > t6W2C18K5Yv;) {
            if (Ok (dgc6WLoHls4[t6W2C18K5Yv], low[t6W2C18K5Yv]) == (481 - 480))
                if (Ok (dgc6WLoHls4[t6W2C18K5Yv + (145 - 144)], low[t6W2C18K5Yv + (162 - 161)]) == (888 - 887)) {
                    UfP6wjkQSp2[t] = UfP6wjkQSp2[t] + (495 - 494);
                }
                else if (Ok (dgc6WLoHls4[t6W2C18K5Yv + (145 - 144)], low[t6W2C18K5Yv + (162 - 161)]) == (413 - 413)) {
                    UfP6wjkQSp2[t++] = UfP6wjkQSp2[t++] + (332 - 331);
                }
                else {
                }
            t6W2C18K5Yv = t6W2C18K5Yv + (64 - 63);
        }
    }
    printf ("%d", max (UfP6wjkQSp2, t));
    return (188 - 188);
}

int Ok (int a, int PHu6lZDj) {
    return a >= (930 - 840) && a <= (1061 - 921) && PHu6lZDj >= (284 - 224) && PHu6lZDj <= (893 - 803);
}

int max (int a [], int dhSGAitd1Lgo) {
    int t6W2C18K5Yv, nF9EHnt;
    nF9EHnt = *a;
    for (t6W2C18K5Yv = (425 - 424); t6W2C18K5Yv < dhSGAitd1Lgo; t6W2C18K5Yv++)
        if (nF9EHnt < *(a + t6W2C18K5Yv))
            nF9EHnt = *(a + t6W2C18K5Yv);
    return nF9EHnt;
}

