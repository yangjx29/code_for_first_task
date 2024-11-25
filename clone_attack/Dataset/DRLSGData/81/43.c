int main (int t7iQzCVg, char *UwD1Pc7MGYy []) {
    int mnvHORfVjYP;
    int j;
    int AcrUmn;
    int UthRq3;
    int a [(378 - 372)] [(766 - 760)];
    int da73TS;
    for (mnvHORfVjYP = (809 - 809); mnvHORfVjYP < (623 - 618); mnvHORfVjYP++) {
        {
            if ((76 - 76)) {
                return (878 - 878);
            }
        }
        j = (987 - 987);
        while (j < (693 - 688)) {
            scanf ("%d", &a[mnvHORfVjYP][j]);
            j++;
        }
    }
    scanf ("%d %d", &AcrUmn, &UthRq3);
    if (AcrUmn >= (911 - 911) && AcrUmn < (752 - 747) && UthRq3 >= (14 - 14) && UthRq3 < (244 - 239)) {
        for (mnvHORfVjYP = (38 - 38); mnvHORfVjYP < (771 - 766); mnvHORfVjYP++) {
            da73TS = a[AcrUmn][mnvHORfVjYP];
            a[AcrUmn][mnvHORfVjYP] = a[UthRq3][mnvHORfVjYP];
            a[UthRq3][mnvHORfVjYP] = da73TS;
        }
        for (mnvHORfVjYP = (843 - 843); mnvHORfVjYP < (230 - 225); mnvHORfVjYP++) {
            printf ("%d", a[mnvHORfVjYP][(282 - 282)]);
            {
                j = (794 - 793);
                while (j < 5) {
                    printf (" %d", a[mnvHORfVjYP][j]);
                    j++;
                }
            }
        }
    }
    else
        printf ("error\n");
    return (472 - 472);
}

