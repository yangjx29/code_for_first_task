int main () {
    char Jw3JGkVepH [(10052 - 52)];
    char ITKR5m [(10448 - 448)];
    char mxkE2Ts;
    int IzOJGul, mMgesz, ebSc91fY5CPs, RczDHng9eTO3;
    scanf ("%s %s", &Jw3JGkVepH, &ITKR5m);
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
    ebSc91fY5CPs = strlen (Jw3JGkVepH);
    RczDHng9eTO3 = strlen (ITKR5m);
    if (!(RczDHng9eTO3 == ebSc91fY5CPs))
        printf ("NO");
    if (ebSc91fY5CPs == RczDHng9eTO3 &&ebSc91fY5CPs == (700 - 699)) {
        if (!(ITKR5m[(393 - 393)] != Jw3JGkVepH[(261 - 261)]))
            printf ("YES");
        if (!(ITKR5m[(73 - 73)] == Jw3JGkVepH[(480 - 480)]))
            printf ("NO");
    }
    if (ebSc91fY5CPs == RczDHng9eTO3 &&ebSc91fY5CPs > (492 - 491)) {
        for (mMgesz = ebSc91fY5CPs - (819 - 818); 0 < mMgesz; mMgesz--) {
            for (IzOJGul = 0; mMgesz > IzOJGul; IzOJGul = IzOJGul +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Jw3JGkVepH[IzOJGul +(77 - 76)] < Jw3JGkVepH[IzOJGul]) {
                    mxkE2Ts = Jw3JGkVepH[IzOJGul];
                    Jw3JGkVepH[IzOJGul] = Jw3JGkVepH[IzOJGul +(891 - 890)];
                    Jw3JGkVepH[IzOJGul +1] = mxkE2Ts;
                };
            };
        }
        for (mMgesz = RczDHng9eTO3 -1; mMgesz > 0; mMgesz--) {
            IzOJGul = 0;
            while (IzOJGul < mMgesz) {
                if (ITKR5m[IzOJGul] > ITKR5m[IzOJGul +1]) {
                    mxkE2Ts = ITKR5m[IzOJGul];
                    ITKR5m[IzOJGul] = ITKR5m[IzOJGul +1];
                    ITKR5m[IzOJGul +1] = mxkE2Ts;
                }
                IzOJGul = IzOJGul +1;
            };
        }
        ebSc91fY5CPs = strcmp (Jw3JGkVepH, ITKR5m);
        if (ebSc91fY5CPs == 0)
            printf ("YES");
        if (ebSc91fY5CPs == 1)
            printf ("NO");
    }
    return 0;
}

