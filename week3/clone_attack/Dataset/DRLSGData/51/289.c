int main () {
    int i;
    char W4Png5M3a [500] [5];
    int NwJ1Fj4B;
    int AXTos2tPVQ;
    char lhXyIN [500];
    gets (lhXyIN);
    int pokWpuOg8B [500];
    int pm75qL;
    int COKd7Z1jlP [500];
    char BFimCLaJ [5];
    int GCmqP6Gze0rf;
    int pQsXIAOBygLT;
    AXTos2tPVQ = strlen (lhXyIN);
    scanf ("%d\n", &GCmqP6Gze0rf);
    {
        i = 0;
        for (; i <= AXTos2tPVQ -GCmqP6Gze0rf;) {
            {
                pm75qL = 0;
                for (; GCmqP6Gze0rf > pm75qL;) {
                    W4Png5M3a[i][pm75qL] = lhXyIN[i + pm75qL];
                    pm75qL++;
                }
            }
            W4Png5M3a[i][GCmqP6Gze0rf] = 0;
            pokWpuOg8B[i] = i;
            i++;
        }
    }
    {
        i = 0;
        for (; AXTos2tPVQ -GCmqP6Gze0rf >= i;) {
            COKd7Z1jlP[i] = 0;
            i++;
        }
    }
    {
        i = 0;
        for (; i < AXTos2tPVQ -GCmqP6Gze0rf;) {
            {
                pm75qL = i + 1;
                for (; AXTos2tPVQ -GCmqP6Gze0rf >= pm75qL;) {
                    if (!(0 != strcmp (W4Png5M3a[i], W4Png5M3a[pm75qL])))
                        COKd7Z1jlP[i]++;
                    pm75qL++;
                }
            }
            i++;
        }
    }
    for (i = 0; i < AXTos2tPVQ -GCmqP6Gze0rf; i++) {
        pm75qL = 0;
        for (; pm75qL < AXTos2tPVQ -GCmqP6Gze0rf-i;) {
            if (COKd7Z1jlP[pm75qL + 1] > COKd7Z1jlP[pm75qL]) {
                NwJ1Fj4B = COKd7Z1jlP[pm75qL];
                COKd7Z1jlP[pm75qL] = COKd7Z1jlP[pm75qL + 1];
                COKd7Z1jlP[pm75qL + 1] = NwJ1Fj4B;
                strcpy (BFimCLaJ, W4Png5M3a[pm75qL]);
                strcpy (W4Png5M3a[pm75qL], W4Png5M3a[pm75qL + 1]);
                strcpy (W4Png5M3a[pm75qL + 1], BFimCLaJ);
                NwJ1Fj4B = pokWpuOg8B[pm75qL];
                pokWpuOg8B[pm75qL] = pokWpuOg8B[pm75qL + 1];
                pokWpuOg8B[pm75qL + 1] = NwJ1Fj4B;
            }
            pm75qL++;
        }
    }
    if (!(0 != COKd7Z1jlP[0]))
        ;
    else if (COKd7Z1jlP[0] - COKd7Z1jlP[1] > 0) {
        asJkKuzl (W4Png5M3a [0]);
        printf ("%d\n", COKd7Z1jlP[0] + 1);
    }
    else {
        {
            i = 0;
            for (; AXTos2tPVQ -GCmqP6Gze0rf > i;) {
                if (0 < COKd7Z1jlP[i] - COKd7Z1jlP[i + 1]) {
                    NwJ1Fj4B = i;
                    break;
                }
                i++;
            }
        }
        printf ("%d\n", COKd7Z1jlP[0] + 1);
        {
            i = 0;
            for (; i < NwJ1Fj4B;) {
                {
                    pm75qL = 0;
                    for (; pm75qL < NwJ1Fj4B -i;) {
                        if (pokWpuOg8B[pm75qL] > pokWpuOg8B[pm75qL + 1]) {
                            strcpy (BFimCLaJ, W4Png5M3a[pm75qL]);
                            strcpy (W4Png5M3a[pm75qL], W4Png5M3a[pm75qL + 1]);
                            strcpy (W4Png5M3a[pm75qL + 1], BFimCLaJ);
                        }
                        pm75qL++;
                    }
                }
                i++;
            }
        }
        {
            i = 0;
            for (; i <= NwJ1Fj4B;) {
                asJkKuzl (W4Png5M3a [i]);
                i++;
            }
        }
    }
    return 0;
}

