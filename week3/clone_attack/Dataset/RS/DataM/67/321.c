int main () {
    int KyiWb4;
    int NnoVr5Ua;
    float a, xS28Qf, cnQMLDmV, jjtaMi, zLeSMkbH1gC, y;
    scanf ("%d %f %f", &KyiWb4, &a, &xS28Qf);
    zLeSMkbH1gC = xS28Qf / a;
    {
        NnoVr5Ua = 1;
        while (NnoVr5Ua < KyiWb4) {
            NnoVr5Ua = NnoVr5Ua +1;
            scanf ("%f %f", &cnQMLDmV, &jjtaMi);
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
            y = jjtaMi / cnQMLDmV;
            if (0.05 < y - zLeSMkbH1gC)
                printf ("better\n");
            else {
                if (zLeSMkbH1gC - y > 0.05)
                    printf ("worse\n");
                else
                    printf ("same\n");
            };
        };
    }
    return 0;
}

