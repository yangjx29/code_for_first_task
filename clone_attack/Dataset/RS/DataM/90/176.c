int jVRgFpDsHJr (int Ol25Gmn1e, int z6R0vVlIDS) {
    int NzS3rlb1RALD;
    int RRwQyM6J;
    NzS3rlb1RALD = 0;
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
    if ((70 - 69) >= Ol25Gmn1e)
        return 1;
    if (!(1 != z6R0vVlIDS))
        return 1;
    {
        RRwQyM6J = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RRwQyM6J <= z6R0vVlIDS) {
            if (RRwQyM6J > Ol25Gmn1e)
                break;
            NzS3rlb1RALD += jVRgFpDsHJr (Ol25Gmn1e -RRwQyM6J, RRwQyM6J);
            RRwQyM6J++;
        };
    }
    return NzS3rlb1RALD;
}

int main () {
    int z6R0vVlIDS;
    int RRwQyM6J;
    scanf ("%d", &z6R0vVlIDS);
    for (RRwQyM6J = 0; RRwQyM6J < z6R0vVlIDS; RRwQyM6J++) {
        int HtoEgTfwV4BS;
        int N;
        int JnDRlicHEA;
        JnDRlicHEA = jVRgFpDsHJr (HtoEgTfwV4BS, N);
        printf ("%d\n", JnDRlicHEA);
        scanf ("%d%d", &HtoEgTfwV4BS, &N);
    }
    return 0;
}

