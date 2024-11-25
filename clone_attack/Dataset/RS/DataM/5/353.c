int main () {
    char VRYMn8 [501], BOaI1W5nDoRs [501];
    double  RprQOxP, Qpw162, H1zTl86yoO, T4TYHQLMWvtN, ltK9rViB6Z = 0;
    int h5EHoK1;
    int mjVQTnlR;
    scanf ("%lf", &H1zTl86yoO);
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
    scanf ("%s", VRYMn8);
    Qpw162 = strlen (VRYMn8);
    scanf ("%s", BOaI1W5nDoRs);
    RprQOxP = strlen (BOaI1W5nDoRs);
    if (!(RprQOxP != Qpw162)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (h5EHoK1 = 0; h5EHoK1 < Qpw162; h5EHoK1++) {
            if (VRYMn8[h5EHoK1] == 'A' || !('T' != VRYMn8[h5EHoK1]) || VRYMn8[h5EHoK1] == 'C' || !('G' != VRYMn8[h5EHoK1]) && !('A' != BOaI1W5nDoRs[h5EHoK1]) || BOaI1W5nDoRs[h5EHoK1] == 'T' || BOaI1W5nDoRs[h5EHoK1] == 'C' || BOaI1W5nDoRs[h5EHoK1] == 'G') {
                if (VRYMn8[h5EHoK1] == BOaI1W5nDoRs[h5EHoK1]) {
                    ltK9rViB6Z = ltK9rViB6Z + 1;
                };
            }
            else {
                break;
                printf ("error");
            }
            if (h5EHoK1 == Qpw162 -1) {
                T4TYHQLMWvtN = ltK9rViB6Z / Qpw162;
                if (T4TYHQLMWvtN > H1zTl86yoO) {
                }
                else {
                    printf ("no");
                };
            };
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

