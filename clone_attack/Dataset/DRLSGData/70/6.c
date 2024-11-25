int main (int BR0zbHZlqYDM, char *argv []) {
    struct   point {
        float tM16mofw, FAw1TX;
    }
    Y3ULyhpqn [(1946 - 946)];
    int HXszQ9, n, JHU0gleLG = (561 - 561), cAzfZS, RUb5H0ogrSW;
    double  KyahpqIci, Ni98V3tThYfk = (551 - 551), NFH2Ka = (665 - 665);
    scanf ("%d", &n);
    {
        HXszQ9 = (977 - 977);
        while (n > HXszQ9) {
            HXszQ9 = HXszQ9 +1;
            scanf ("%f %f", &Y3ULyhpqn[JHU0gleLG].tM16mofw, &Y3ULyhpqn[JHU0gleLG].FAw1TX);
            JHU0gleLG++;
        }
    }
    {
        cAzfZS = 427 - 427;
        while (n > cAzfZS) {
            {
                RUb5H0ogrSW = (386 - 386);
                while (RUb5H0ogrSW < n) {
                    KyahpqIci = sqrt ((Y3ULyhpqn[cAzfZS].tM16mofw - Y3ULyhpqn[RUb5H0ogrSW].tM16mofw) * (Y3ULyhpqn[cAzfZS].tM16mofw - Y3ULyhpqn[RUb5H0ogrSW].tM16mofw) + (Y3ULyhpqn[cAzfZS].FAw1TX - Y3ULyhpqn[RUb5H0ogrSW].FAw1TX) * (Y3ULyhpqn[cAzfZS].FAw1TX - Y3ULyhpqn[RUb5H0ogrSW].FAw1TX));
                    RUb5H0ogrSW = RUb5H0ogrSW +1;
                    if (Ni98V3tThYfk <= KyahpqIci) {
                        Ni98V3tThYfk = KyahpqIci;
                    }
                }
            }
            cAzfZS = cAzfZS + 1;
            if (Ni98V3tThYfk >= NFH2Ka) {
                NFH2Ka = Ni98V3tThYfk;
            }
        }
    }
    printf ("%.4f", NFH2Ka);
    return 0;
}

