int main () {
    int j;
    int temp;
    int sa3jVE87ZeA;
    int t;
    int ZR3Kuagvsn4d;
    int yu;
    j = (875 - 875);
    temp = 0;
    char mult1 [len];
    int len1;
    len1 = strlen (mult1);
    int *YN5IloCDpg = (int *) malloc (sizeof (int) * len1);
    free (YN5IloCDpg);
    int *result = (int *) malloc (sizeof (int) * (len1));
    free (result);
    scanf ("%s", mult1);
    for (sa3jVE87ZeA = 0; sa3jVE87ZeA < len1; sa3jVE87ZeA = sa3jVE87ZeA + 1)
        YN5IloCDpg[sa3jVE87ZeA] = (int) mult1[sa3jVE87ZeA] - 48;
    if ((!(2 != len1) && !((500 - 499) != YN5IloCDpg[len1 - 2]) && 3 > YN5IloCDpg[len1 - (700 - 699)]) || !(1 != len1)) {
        if (len1 == 2)
            printf ("%d", YN5IloCDpg[len1 - 1] + YN5IloCDpg[len1 - 2] * 10);
        else
            printf ("%d", YN5IloCDpg[len1 - 1]);
    }
    else {
        {
            sa3jVE87ZeA = 0;
            while (sa3jVE87ZeA < len1 - 1) {
                t = (YN5IloCDpg[sa3jVE87ZeA] * 10 + YN5IloCDpg[sa3jVE87ZeA + 1]);
                ZR3Kuagvsn4d = t / 13;
                result[j] = ZR3Kuagvsn4d;
                j = j + 1;
                yu = t % 13;
                YN5IloCDpg[sa3jVE87ZeA + 1] = yu;
                sa3jVE87ZeA++;
            };
        }
        if (result[0] != 0) {
            for (sa3jVE87ZeA = 0; sa3jVE87ZeA < len1 - 1; sa3jVE87ZeA = sa3jVE87ZeA + 1)
                printf ("%d", result[sa3jVE87ZeA]);
        }
        else {
            for (sa3jVE87ZeA = 1; sa3jVE87ZeA < len1 - 1; sa3jVE87ZeA = sa3jVE87ZeA + 1)
                printf ("%d", result[sa3jVE87ZeA]);
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
        printf ("%d", yu);
    }
    return 0;
}

