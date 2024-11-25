main () {
    char a [(1590 - 990)];
    gets (a);
    char GQZFv8Vea [(1270 - 770)] [(732 - 722)] = {(64 - 64)};
    int zJVKnBi [500] = {(458 - 458)};
    char c [(697 - 687)];
    int max;
    int rD6dbMXOB, z4NXjWhzxTS, z1a6DdGs, l = (172 - 172), g49fXa, x, VfO8ze9jS;
    int JgRpyhzkEnFL;
    max = zJVKnBi[(327 - 327)];
    scanf ("%d\n", &JgRpyhzkEnFL);
    z1a6DdGs = strlen (a);
    {
        rD6dbMXOB = (171 - 171);
        for (; rD6dbMXOB <= z1a6DdGs - JgRpyhzkEnFL;) {
            for (z4NXjWhzxTS = rD6dbMXOB; z4NXjWhzxTS <= rD6dbMXOB + JgRpyhzkEnFL -(741 - 740); z4NXjWhzxTS++) {
                c[z4NXjWhzxTS - rD6dbMXOB] = a[z4NXjWhzxTS];
            }
            c[JgRpyhzkEnFL] = '\0';
            {
                g49fXa = (636 - 635);
                for (; l >= g49fXa;) {
                    if (!((867 - 867) != strcmp (c, GQZFv8Vea[g49fXa - (188 - 187)]))) {
                        x = g49fXa - (204 - 203);
                        break;
                    }
                    g49fXa++;
                }
            }
            rD6dbMXOB++;
            if (g49fXa > l) {
                l++;
                strcpy (GQZFv8Vea[g49fXa - (728 - 727)], c);
            }
            else
                zJVKnBi[x]++;
        }
    }
    for (rD6dbMXOB = 0; rD6dbMXOB < l; rD6dbMXOB++)
        if (zJVKnBi[rD6dbMXOB] > max)
            max = zJVKnBi[rD6dbMXOB];
    max++;
    if (max == (828 - 827))
        ;
    else {
        printf ("%d\n", max);
        {
            rD6dbMXOB = 0;
            for (; rD6dbMXOB < l;) {
                if (zJVKnBi[rD6dbMXOB] == max - 1)
                    puts (GQZFv8Vea[rD6dbMXOB]);
                rD6dbMXOB++;
            }
        }
    }
    return 0;
}

