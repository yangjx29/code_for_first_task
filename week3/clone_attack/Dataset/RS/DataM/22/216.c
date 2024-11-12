int main () {
    char i80zME2bAhcj;
    int RNfGK24lk, P9Ef0edc1l = 0, a69WKjMSQ7L;
    scanf ("%d", &RNfGK24lk);
    {
        while (true) {
            i80zME2bAhcj = getchar ();
            if (!(',' == i80zME2bAhcj))
                break;
            else {
                scanf ("%d", &a69WKjMSQ7L);
                if (RNfGK24lk < a69WKjMSQ7L) {
                    P9Ef0edc1l = RNfGK24lk;
                    RNfGK24lk = a69WKjMSQ7L;
                }
                else {
                    if (a69WKjMSQ7L < RNfGK24lk &&a69WKjMSQ7L > P9Ef0edc1l)
                        P9Ef0edc1l = a69WKjMSQ7L;
                    else
                        continue;
                };
            };
        };
    }
    if (P9Ef0edc1l == 0)
        printf ("No");
    else
        printf ("%d", P9Ef0edc1l);
    return 0;
}

