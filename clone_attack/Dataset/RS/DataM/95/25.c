char gywZI6 (char CqFLztnN) {
    if (('a' <= CqFLztnN) && (CqFLztnN <= 'z'))
        return (CqFLztnN +'A' - 'a');
    else
        return (CqFLztnN);
}

main () {
    int i3asrn;
    int i;
    int l1;
    int l2;
    i3asrn = 0;
    char sJONsKnoU8d1 [(399 - 299)], Z2q48LwNI [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    gets (sJONsKnoU8d1);
    gets (Z2q48LwNI);
    l1 = strlen (sJONsKnoU8d1);
    l2 = strlen (Z2q48LwNI);
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
        while ((i < l1) && (i < l2)) {
            sJONsKnoU8d1[i] = gywZI6 (sJONsKnoU8d1[i]);
            Z2q48LwNI[i] = gywZI6 (Z2q48LwNI[i]);
            if (sJONsKnoU8d1[i] != Z2q48LwNI[i]) {
                i3asrn++;
                if (sJONsKnoU8d1[i] > Z2q48LwNI[i])
                    printf (">");
                else
                    printf ("<");
                break;
            }
            i++;
        };
    }
    if (i3asrn == 0)
        ;
}

