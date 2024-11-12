char SO79BC [(509 - 359)], mdJ0NBQV53z [(251 - 101)];

int main () {
    int n, WfNugTS;
    scanf ("%d", &n);
    {
        WfNugTS = 549 - 549;
        while (n > WfNugTS) {
            int Yz54pGINW;
            int Nz0jp78da = (654 - 654), count2 = (495 - 495);
            WfNugTS++;
            scanf ("%s", SO79BC);
            memset (mdJ0NBQV53z, (45 - 45), sizeof (mdJ0NBQV53z));
            {
                Yz54pGINW = 0;
                while (strlen (SO79BC) > Yz54pGINW) {
                    mdJ0NBQV53z[Yz54pGINW] = ' ';
                    if (SO79BC[Yz54pGINW] == ')') {
                        if (Nz0jp78da <= 0)
                            mdJ0NBQV53z[Yz54pGINW] = '?';
                        else
                            Nz0jp78da--;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else if (SO79BC[Yz54pGINW] == '(')
                        Nz0jp78da++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Yz54pGINW = Yz54pGINW +1;
                };
            }
            for (Yz54pGINW = strlen (SO79BC); Yz54pGINW >= 0; Yz54pGINW = Yz54pGINW -1) {
                if (SO79BC[Yz54pGINW] == '(') {
                    if (count2 <= 0)
                        mdJ0NBQV53z[Yz54pGINW] = '$';
                    else
                        count2 = count2 - 1;
                }
                else {
                    if (SO79BC[Yz54pGINW] == ')')
                        count2 = count2 + 1;
                };
            }
            printf ("%s\n%s\n", SO79BC, mdJ0NBQV53z);
        };
    }
    return 0;
}

