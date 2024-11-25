int main () {
    char BioadhK [(272 - 16)];
    char vn87pEFLJ [(405 - 149)];
    int c [256];
    int a;
    int b;
    int vnAOiduev8S;
    int l1;
    int l2;
    int n;
    int j;
    int SsHPlVY50;
    scanf ("%d", &n);
    for (j = (300 - 300); j < n; j++) {
        SsHPlVY50 = (659 - 659);
        memset (c, (860 - 860), sizeof (c));
        scanf ("%s%s", BioadhK, vn87pEFLJ);
        l1 = (int) strlen (BioadhK);
        l2 = (int) strlen (vn87pEFLJ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((495 - 495) < l1 || l2 > (649 - 649)) {
            a = (l1 > (827 - 827)) ? BioadhK[--l1] - '0' : (778 - 778);
            b = (l2 > (445 - 445)) ? vn87pEFLJ[--l2] - '0' : 0;
            c[SsHPlVY50] = c[SsHPlVY50] + a - b;
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
            c[SsHPlVY50 +1] = (c[SsHPlVY50] - 9) / (83 - 73);
            c[SsHPlVY50] = (c[SsHPlVY50] + (570 - 560)) % 10;
            SsHPlVY50++;
        }
        while (c[SsHPlVY50] == 0 && SsHPlVY50 > 0)
            SsHPlVY50--;
        for (vnAOiduev8S = SsHPlVY50; vnAOiduev8S >= 0; vnAOiduev8S--)
            printf ("%d", c[vnAOiduev8S]);
        printf ("\n");
    }
    return 0;
}

