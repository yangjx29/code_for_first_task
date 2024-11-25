void  main () {
    char I5UsBy3Du [500];
    int a;
    int i;
    int ERwsMSIoVA;
    int mNwvIMEqRAKz;
    int HKqtUC7hi;
    int NA0UEr;
    int vyiCzORp;
    char str [(1075 - 975)] [50];
    char c;
    gets (I5UsBy3Du);
    vyiCzORp = strlen (I5UsBy3Du);
    a = (216 - 216);
    ERwsMSIoVA = 0;
    i = 0;
    {
        a = 0;
        while (vyiCzORp >= a) {
            if (I5UsBy3Du[a] != ' ') {
                str[i][ERwsMSIoVA] = I5UsBy3Du[a];
                ERwsMSIoVA = ERwsMSIoVA +1;
            }
            if (!(' ' != I5UsBy3Du[a])) {
                i = i + 1;
                ERwsMSIoVA = 0;
            }
            a = a + 1;
        };
    }
    HKqtUC7hi = 0;
    NA0UEr = 0;
    {
        mNwvIMEqRAKz = 0;
        while (mNwvIMEqRAKz <= i) {
            if (strlen (str[mNwvIMEqRAKz]) > strlen (str[HKqtUC7hi]))
                HKqtUC7hi = mNwvIMEqRAKz;
            if (strlen (str[mNwvIMEqRAKz]) < strlen (str[NA0UEr]))
                NA0UEr = mNwvIMEqRAKz;
            mNwvIMEqRAKz++;
        };
    }
    printf ("%s\n%s\n", str[HKqtUC7hi], str[NA0UEr]);
}

