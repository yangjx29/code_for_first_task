int main (int argc, char *argv []) {
    int KXgyTAE [(1000 - 900)];
    int LdglXB3Js0kG;
    int kJPmQhbNsU;
    int m2;
    int EEnwtW4sR3;
    m2 = 0;
    scanf ("%d", &EEnwtW4sR3);
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
    for (LdglXB3Js0kG = (780 - 780); EEnwtW4sR3 > LdglXB3Js0kG; LdglXB3Js0kG = LdglXB3Js0kG +1) {
        scanf ("%d", &KXgyTAE[LdglXB3Js0kG]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    kJPmQhbNsU = KXgyTAE[0];
    for (LdglXB3Js0kG = 1; EEnwtW4sR3 > LdglXB3Js0kG; LdglXB3Js0kG = LdglXB3Js0kG +1) {
        if (KXgyTAE[LdglXB3Js0kG] > kJPmQhbNsU)
            kJPmQhbNsU = KXgyTAE[LdglXB3Js0kG];
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
        };
    }
    for (LdglXB3Js0kG = 0; EEnwtW4sR3 > LdglXB3Js0kG; LdglXB3Js0kG = LdglXB3Js0kG +1) {
        if (kJPmQhbNsU > KXgyTAE[LdglXB3Js0kG])
            m2 = KXgyTAE[LdglXB3Js0kG];
    }
    {
        LdglXB3Js0kG = 0;
        while (LdglXB3Js0kG < EEnwtW4sR3) {
            if (kJPmQhbNsU > KXgyTAE[LdglXB3Js0kG] && m2 < KXgyTAE[LdglXB3Js0kG])
                m2 = KXgyTAE[LdglXB3Js0kG];
            LdglXB3Js0kG = LdglXB3Js0kG +1;
        };
    }
    printf ("%d\n%d", kJPmQhbNsU, m2);
    return 0;
}

