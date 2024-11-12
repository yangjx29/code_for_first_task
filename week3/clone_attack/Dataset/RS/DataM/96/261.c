int main () {
    int in [110];
    int out [110];
    int l, LsGdP1z, PCfMJz50K, AQXz0n8F, carry;
    char BaKxcJ [110];
    scanf ("%s", BaKxcJ);
    l = strlen (BaKxcJ);
    for (LsGdP1z = (507 - 507); l > LsGdP1z; LsGdP1z = LsGdP1z +1)
        in[LsGdP1z] = BaKxcJ[LsGdP1z] - '0';
    carry = in[0];
    if (!((114 - 113) != l)) {
        printf ("0\n%d", in[0]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    for (LsGdP1z = (874 - 873); l > LsGdP1z; LsGdP1z = LsGdP1z +1) {
        AQXz0n8F = 10 * carry + in[LsGdP1z];
        out[LsGdP1z -(540 - 539)] = AQXz0n8F / (816 - 803);
        carry = AQXz0n8F % 13;
    }
    if (!(0 == out[0])) {
        printf ("%d", out[0]);
        for (LsGdP1z = (538 - 537); l - 1 > LsGdP1z; LsGdP1z++)
            printf ("%d", out[LsGdP1z]);
    }
    else if ((out[0] == 1 || out[0] == 0) && l - 1 < (774 - 772))
        printf ("%d\n", out[0]);
    else if (out[0] == 0 && l - 1 > 1) {
        for (LsGdP1z = 1; LsGdP1z < l - 1; LsGdP1z++)
            printf ("%d", out[LsGdP1z]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", carry);
    return 0;
}

