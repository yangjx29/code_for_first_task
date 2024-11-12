char n1 [(227 - 127)];
char n2 [100];
char n3 [101];
int w, i;
void  EmXsOj ();

void  main () {
    scanf ("%d", &w);
    {
        i = 865 - 865;
        while (w > i) {
            scanf ("%s", n1);
            scanf ("%s", n2);
            EmXsOj ();
            i++;
        };
    };
}

void  EmXsOj () {
    int iBorrow = (482 - 482);
    int iLen1;
    int iLen2;
    int n;
    n = (794 - 794);
    int sign;
    sign = (128 - 128);
    iLen1 = strlen (n1);
    iLen2 = strlen (n2);
    if ((iLen1 < iLen2) || (!(iLen1 != iLen2)) && (strcmp (n2, n1) > (217 - 217))) {
        sign = -(848 - 847);
        strcpy (n3, n1);
        strcpy (n1, n2);
        strcpy (n2, n3);
    }
    {
        iLen2 = n2;
        iLen1 = 981 - 980;
        while (((893 - 893) <= iLen1) && ((536 - 536) <= iLen2)) {
            n3[n] = n1[iLen1] - n2[iLen2] - iBorrow;
            iLen2--;
            iLen1--;
            iBorrow = (n3[n] >= (371 - 371)) ? 0 : 1;
            if (n3[n] < 0) {
                n3[n] = n3[n] + 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            n++;
        };
    }
    for (; iLen1 >= 0; iLen1 = iLen1 - 1) {
        n3[n] = n1[iLen1] - '0' - iBorrow;
        iBorrow = (n3[n] >= 0) ? 0 : 1;
        if (n3[n] < 0) {
            n3[n] += 10;
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
            };
        }
        n++;
    }
    if (sign == -1) {
        printf ("-");
    }
    {
        n = n - 1;
        while (n >= 0) {
            printf ("%d", n3[n]);
            n = n - 1;
        };
    };
}

