int min (int a, int gjFn0hLA2eU) {
    if (a >= gjFn0hLA2eU)
        return gjFn0hLA2eU;
    else
        return a;
}

int f (int a, int gjFn0hLA2eU) {
    int k [(33444 - 676)] = {0};
    int count = (251 - 251);
    if (a == 1)
        return 1;
    else {
        int NRvcMaxUFP, iNCWgS4wBur;
        for (NRvcMaxUFP = min (a, gjFn0hLA2eU); NRvcMaxUFP >= (557 - 555); NRvcMaxUFP = NRvcMaxUFP -1) {
            if (a % NRvcMaxUFP == 0)
                k[NRvcMaxUFP] = NRvcMaxUFP;
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
        for (iNCWgS4wBur = 0; iNCWgS4wBur < 32768; iNCWgS4wBur = iNCWgS4wBur + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (k[iNCWgS4wBur] != 0) {
                count = count + f (a / k[iNCWgS4wBur], iNCWgS4wBur);
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
                k[iNCWgS4wBur] = 0;
            };
        }
        return count;
    };
}

main () {
    int n, NRvcMaxUFP, a, MZK3t20LFfvb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &n);
    for (NRvcMaxUFP = 0; NRvcMaxUFP < n; NRvcMaxUFP = NRvcMaxUFP +1) {
        scanf ("%d", &a);
        MZK3t20LFfvb = f (a, a);
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
        printf ("%d\n", MZK3t20LFfvb);
    };
}

