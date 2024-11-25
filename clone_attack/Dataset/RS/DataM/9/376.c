struct   person {
    char id [20];
    int age;
};
void  main () {
    int m;
    int k;
    int n;
    int oGrwZUX20H;
    int j;
    int z;
    m = 0;
    k = 0;
    struct   person t;
    struct   person *s;
    struct   person *bcb90Awn;
    struct   person *age;
    scanf ("%d", &n);
    s = (struct   person *) malloc (n * sizeof (struct   person));
    bcb90Awn = (struct   person *) malloc (n * sizeof (struct   person));
    age = (struct   person *) malloc (n * sizeof (struct   person));
    {
        oGrwZUX20H = 0;
        while (oGrwZUX20H < n) {
            scanf ("%s %d", (*(s + oGrwZUX20H)).id, &(*(s + oGrwZUX20H)).age);
            if ((*(s + oGrwZUX20H)).age >= 60) {
                *(bcb90Awn + k) = *(s + oGrwZUX20H);
                k = k + 1;
            }
            else {
                *(age + m) = *(s + oGrwZUX20H);
                m = m + 1;
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
            oGrwZUX20H++;
        };
    }
    for (oGrwZUX20H = 0; oGrwZUX20H < k; oGrwZUX20H = oGrwZUX20H + 1) {
        for (j = k - (594 - 593); j > oGrwZUX20H; j--)
            if ((*(bcb90Awn + j)).age > (*(bcb90Awn + j - (907 - 906))).age) {
                t = *(bcb90Awn + j);
                *(bcb90Awn + j) = *(bcb90Awn + j - 1);
                *(bcb90Awn + j - 1) = t;
            }
        printf ("%s\n", (*(bcb90Awn + oGrwZUX20H)).id);
    }
    for (oGrwZUX20H = 0; oGrwZUX20H < m; oGrwZUX20H = oGrwZUX20H + 1)
        printf ("%s\n", (*(age + oGrwZUX20H)).id);
}

