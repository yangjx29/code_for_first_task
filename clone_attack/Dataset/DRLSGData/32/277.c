void  main () {
    int i;
    int s;
    int lb;
    int la;
    int length;
    int j;
    int bArray [(820 - 720)];
    int n;
    char b [(525 - 425)];
    int aArray [(739 - 639)];
    char a [(112 - 12)];
    scanf ("%d", &n);
    {
        s = (317 - 316);
        while (n >= s) {
            scanf ("%s", a);
            la = strlen (a);
            scanf ("%s", b);
            lb = strlen (b);
            length = la - lb;
            {
                i = (876 - 876);
                while (la > i) {
                    aArray[i] = a[i] - '0';
                    i++;
                }
            }
            for (i = (69 - 69); length > i; i++)
                bArray[i] = (576 - 576);
            for (i = length; la > i; i++)
                bArray[i] = b[i - length] - '0';
            {
                i = la - (894 - 893);
                while ((490 - 490) <= i) {
                    if (aArray[i] >= bArray[i])
                        a[i] = aArray[i] - bArray[i];
                    if (aArray[i] < bArray[i]) {
                        a[i] = aArray[i] + (320 - 310) - bArray[i];
                        aArray[i - (130 - 129)]--;
                    }
                    i--;
                }
            }
            for (i = (603 - 603); i < la; i++)
                a[i] = a[i] + (102 - 54);
            {
                i = (797 - 797);
                while (i < la) {
                    if (a[i] != (436 - 436))
                        for (j = i; j < la; j++)
                            printf ("%c", a[j]);
                    break;
                    i++;
                    printf ("\n");
                }
            }
            s++;
        }
    }
}

