int main () {
    int PZEJv6wbnD, eHIY5DM7826, onz2Jtm1S = (619 - 619), wrvBmJWNGp5Z = (265 - 265);
    int enk09lSYV, tMAlwVB8Ya;
    struct   {
        char lI3PXnpEyG [(172 - 166)];
        float K8SJt6q;
    }
    YaG5FTgfs [(509 - 459)], j1dfqx [(823 - 773)], W9rp7XjGB [(331 - 281)], buF1JjNX7KH;
    scanf ("%d", &PZEJv6wbnD);
    {
        eHIY5DM7826 = (749 - 749);
        while (eHIY5DM7826 < PZEJv6wbnD) {
            scanf ("%s%f", &YaG5FTgfs[eHIY5DM7826].lI3PXnpEyG, &YaG5FTgfs[eHIY5DM7826].K8SJt6q);
            eHIY5DM7826++;
        }
    }
    {
        eHIY5DM7826 = (323 - 323);
        while (PZEJv6wbnD > eHIY5DM7826) {
            if (!((167 - 167) != strcmp (YaG5FTgfs[eHIY5DM7826].lI3PXnpEyG, "male"))) {
                j1dfqx[onz2Jtm1S] = YaG5FTgfs[eHIY5DM7826];
                onz2Jtm1S++;
            }
            else {
                W9rp7XjGB[wrvBmJWNGp5Z] = YaG5FTgfs[eHIY5DM7826];
                wrvBmJWNGp5Z++;
            }
            eHIY5DM7826++;
        }
    }
    enk09lSYV = onz2Jtm1S;
    {
        eHIY5DM7826 = 0;
        while (enk09lSYV > eHIY5DM7826) {
            {
                onz2Jtm1S = (636 - 534) - (659 - 558);
                while (onz2Jtm1S > eHIY5DM7826) {
                    if (j1dfqx[onz2Jtm1S - (826 - 825)].K8SJt6q > j1dfqx[onz2Jtm1S].K8SJt6q) {
                        buF1JjNX7KH = j1dfqx[onz2Jtm1S];
                        j1dfqx[onz2Jtm1S] = j1dfqx[onz2Jtm1S - (361 - 360)];
                        j1dfqx[onz2Jtm1S - (89 - 88)] = buF1JjNX7KH;
                    }
                    onz2Jtm1S--;
                }
            }
            eHIY5DM7826++;
        }
    }
    tMAlwVB8Ya = wrvBmJWNGp5Z;
    {
        eHIY5DM7826 = 0;
        while (tMAlwVB8Ya > eHIY5DM7826) {
            onz2Jtm1S = tMAlwVB8Ya - 1;
            while (eHIY5DM7826 < onz2Jtm1S) {
                if (W9rp7XjGB[onz2Jtm1S].K8SJt6q > W9rp7XjGB[onz2Jtm1S - 1].K8SJt6q) {
                    buF1JjNX7KH = W9rp7XjGB[onz2Jtm1S];
                    W9rp7XjGB[onz2Jtm1S] = W9rp7XjGB[onz2Jtm1S - 1];
                    W9rp7XjGB[onz2Jtm1S - 1] = buF1JjNX7KH;
                }
                onz2Jtm1S--;
            }
            eHIY5DM7826++;
        }
    }
    printf ("%1.2f", j1dfqx[0].K8SJt6q);
    for (eHIY5DM7826 = 1; eHIY5DM7826 < enk09lSYV; eHIY5DM7826++)
        printf (" %1.2f", j1dfqx[eHIY5DM7826].K8SJt6q);
    {
        eHIY5DM7826 = 0;
        while (eHIY5DM7826 < tMAlwVB8Ya) {
            printf (" %1.2f", W9rp7XjGB[eHIY5DM7826].K8SJt6q);
            eHIY5DM7826++;
        }
    }
}

