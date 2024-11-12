int main () {
    char CBHGmo [600];
    char i8UZv1Y6FVs [600];
    double  p;
    double  fmFTf5s0w1;
    int bUFCID7a1T4;
    int wa3y4uMiRkCV;
    int JjQ9UHAM;
    int lw6Ci5;
    bUFCID7a1T4 = (619 - 619);
    wa3y4uMiRkCV = (952 - 952);
    scanf ("%lf", &p);
    scanf ("%s", CBHGmo);
    scanf ("%s", i8UZv1Y6FVs);
    JjQ9UHAM = strlen (CBHGmo);
    lw6Ci5 = strlen (i8UZv1Y6FVs);
    for (int U1DIiR4XPl = 0;
    ; U1DIiR4XPl++) {
        if (JjQ9UHAM != lw6Ci5) {
            break;
            printf ("error");
        }
        for (int EI6cq3d = 0;
        JjQ9UHAM > EI6cq3d; EI6cq3d = EI6cq3d +1) {
            if (!(CBHGmo[EI6cq3d] == 'A' || CBHGmo[EI6cq3d] == 'T' || CBHGmo[EI6cq3d] == 'C' || CBHGmo[EI6cq3d] == 'G')) {
                wa3y4uMiRkCV = wa3y4uMiRkCV + 1;
            }
            if (!(i8UZv1Y6FVs[EI6cq3d] == 'A' || i8UZv1Y6FVs[EI6cq3d] == 'T' || i8UZv1Y6FVs[EI6cq3d] == 'C' || i8UZv1Y6FVs[EI6cq3d] == 'G')) {
                wa3y4uMiRkCV = wa3y4uMiRkCV + 1;
            };
        }
        if (wa3y4uMiRkCV != 0) {
            break;
            printf ("error");
        }
        {
            int i = 0;
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
            while (i < JjQ9UHAM) {
                if (CBHGmo[i] == i8UZv1Y6FVs[i]) {
                    bUFCID7a1T4++;
                }
                i++;
            };
        }
        fmFTf5s0w1 = bUFCID7a1T4 / (JjQ9UHAM *(633.0 - 632.0));
        if (fmFTf5s0w1 >= p) {
            printf ("yes");
        }
        if (fmFTf5s0w1 < p) {
            printf ("no");
        }
        break;
    }
    return 0;
}

