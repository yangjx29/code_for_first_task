int main (int EkYIwoAL, char *MvATgRMPW1 []) {
    int *kF6L7SRp4i, NaTkNdgMCiw, UplALoOu63Q, BcwiSEf4Ar0Y, r0TMmpcaSH;
    free (kF6L7SRp4i);
    scanf ("%d", &NaTkNdgMCiw);
    kF6L7SRp4i = (int *) malloc (sizeof (int) * NaTkNdgMCiw);
    for (UplALoOu63Q = 0; UplALoOu63Q < NaTkNdgMCiw; UplALoOu63Q = UplALoOu63Q +1) {
        scanf ("%d", &kF6L7SRp4i[UplALoOu63Q]);
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
    scanf ("%d", &BcwiSEf4Ar0Y);
    for (UplALoOu63Q = 0; UplALoOu63Q < NaTkNdgMCiw; UplALoOu63Q = UplALoOu63Q +1) {
        if (kF6L7SRp4i[UplALoOu63Q] == BcwiSEf4Ar0Y)
            continue;
        else {
            printf ("%d", kF6L7SRp4i[UplALoOu63Q]);
            break;
        };
    }
    for (r0TMmpcaSH = UplALoOu63Q +1; NaTkNdgMCiw > r0TMmpcaSH; r0TMmpcaSH = r0TMmpcaSH + 1) {
        if (kF6L7SRp4i[r0TMmpcaSH] == BcwiSEf4Ar0Y)
            continue;
        else
            printf (" %d", kF6L7SRp4i[r0TMmpcaSH]);
    }
    return 0;
}

