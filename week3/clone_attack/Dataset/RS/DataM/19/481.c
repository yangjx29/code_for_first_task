int main () {
    char H0ZEPk4Y2 [(324 - 224)] [100], ETI0H4FRslhP [100], f0UcXL5Nx [100], jYFnV2XaeAN7 [100];
    int j;
    int hpy94ABSVWYH;
    int N2l3Mj0gA;
    int e;
    int p;
    j = (224 - 224);
    hpy94ABSVWYH = 0;
    gets (jYFnV2XaeAN7);
    gets (ETI0H4FRslhP);
    gets (f0UcXL5Nx);
    e = strlen (jYFnV2XaeAN7);
    for (N2l3Mj0gA = 0; 100 > N2l3Mj0gA; N2l3Mj0gA = N2l3Mj0gA +1) {
        p = 0;
        while (100 > p) {
            H0ZEPk4Y2[N2l3Mj0gA][p] = 0;
            p = p + 1;
        };
    }
    for (N2l3Mj0gA = 0; e > N2l3Mj0gA; N2l3Mj0gA = N2l3Mj0gA +1) {
        if (!(' ' == jYFnV2XaeAN7[N2l3Mj0gA])) {
            H0ZEPk4Y2[j][hpy94ABSVWYH] = jYFnV2XaeAN7[N2l3Mj0gA];
            hpy94ABSVWYH = hpy94ABSVWYH + 1;
        }
        else {
            hpy94ABSVWYH = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            j = j + 1;
        };
    }
    {
        N2l3Mj0gA = 0;
        while (N2l3Mj0gA < j) {
            if (strcmp (H0ZEPk4Y2[N2l3Mj0gA], ETI0H4FRslhP) == 0) {
                printf ("%s ", f0UcXL5Nx);
            }
            else {
                printf ("%s ", H0ZEPk4Y2[N2l3Mj0gA]);
            }
            N2l3Mj0gA = N2l3Mj0gA +1;
        };
    }
    if (strcmp (H0ZEPk4Y2[j], ETI0H4FRslhP) == 0) {
        printf ("%s", f0UcXL5Nx);
    }
    else {
        printf ("%s", H0ZEPk4Y2[j]);
    }
    return 0;
}

