int main () {
    char BZEGlnX6g8L [256];
    char XPu3Sfi [256];
    char vmjve7Qfr [256];
    int Okd9MQgYc2a, aBNIhPq, Ulof5IFq, Iaxm1CqR0Q, jnUbyBeCJdg, SZN4uYc;
    scanf ("%s%s%s", BZEGlnX6g8L, XPu3Sfi, vmjve7Qfr);
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
    aBNIhPq = strlen (BZEGlnX6g8L);
    Okd9MQgYc2a = strlen (XPu3Sfi);
    {
        Ulof5IFq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ulof5IFq < aBNIhPq) {
            jnUbyBeCJdg = 0;
            for (Iaxm1CqR0Q = 0; Iaxm1CqR0Q < Okd9MQgYc2a; Iaxm1CqR0Q = Iaxm1CqR0Q +1) {
                if (BZEGlnX6g8L[Ulof5IFq +Iaxm1CqR0Q] == XPu3Sfi[Iaxm1CqR0Q])
                    jnUbyBeCJdg = jnUbyBeCJdg + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (jnUbyBeCJdg == Okd9MQgYc2a)
                break;
            Ulof5IFq++;
        };
    }
    if (jnUbyBeCJdg == Okd9MQgYc2a) {
        {
            SZN4uYc = 0;
            while (SZN4uYc < Ulof5IFq) {
                printf ("%c", BZEGlnX6g8L[SZN4uYc]);
                SZN4uYc = SZN4uYc +1;
            };
        }
        printf ("%s", vmjve7Qfr);
        for (SZN4uYc = Ulof5IFq +Okd9MQgYc2a; SZN4uYc < aBNIhPq; SZN4uYc = SZN4uYc +1)
            printf ("%c", BZEGlnX6g8L[SZN4uYc]);
    }
    else {
        printf ("%s", BZEGlnX6g8L);
    }
    return 0;
}

