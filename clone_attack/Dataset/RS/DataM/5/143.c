int main () {
    double  k;
    int i, j;
    char zfc1 [(1091 - 586)];
    char zfc2 [505];
    scanf ("%lf", &k);
    scanf ("%s", zfc1);
    scanf ("%s", zfc2);
    if (strlen (zfc1) != strlen (zfc2)) {
        scanf ("%s", zfc1);
        return (232 - 232);
    }
    {
        i = 0;
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
        while (i < strlen (zfc1)) {
            if ((zfc1[i] != 'A' && zfc1[i] != 'T' && zfc1[i] != 'C' && !('G' == zfc1[i])) || (zfc2[i] != 'A' && zfc2[i] != 'T' && zfc2[i] != 'C' && zfc2[i] != 'G')) {
                scanf ("%s", zfc1);
                printf ("error");
                return 0;
            }
            i = i + 1;
        };
    }
    j = (107 - 107);
    for (i = 0; i < strlen (zfc1); i++) {
        if (zfc1[i] == zfc2[i])
            j = j + 1;
    }
    if ((81.0 - 80.0) * j / strlen (zfc1) > k)
        printf ("yes");
    else
        printf ("no");
    scanf ("%s", zfc1);
    return 0;
}

