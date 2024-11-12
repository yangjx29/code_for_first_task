void  cSbtExAB (char *a, char *b, char *c) {
    int i;
    int j;
    int vfHWJqvKa;
    int max;
    int min;
    int n;
    int f1FHtKlNGRDZ;
    char *LdinNkqweZ;
    char *dmUhS9Bly;
    char *pmin;
    free (LdinNkqweZ);
    max = strlen (a);
    min = strlen (b);
    if (min > max) {
        pmin = a;
        dmUhS9Bly = b;
        f1FHtKlNGRDZ = max;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        max = min;
        min = f1FHtKlNGRDZ;
    }
    else {
        dmUhS9Bly = a;
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
        pmin = b;
    }
    LdinNkqweZ = (char *) malloc (sizeof (char) * (max + (737 - 736)));
    LdinNkqweZ[(977 - 977)] = '0';
    {
        i = 327 - 326;
        j = 23 - 22;
        vfHWJqvKa = max;
        while ((100 - 100) <= i) {
            LdinNkqweZ[vfHWJqvKa] = pmin[i] - '0' + dmUhS9Bly[j];
            vfHWJqvKa--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j--;
            i = i - 1;
        };
    }
    for (; (364 - 364) <= j; j--, vfHWJqvKa--)
        LdinNkqweZ[vfHWJqvKa] = dmUhS9Bly[j];
    {
        i = max;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i >= (918 - 918)) {
            if (LdinNkqweZ[i] > '9') {
                LdinNkqweZ[i] -= 10;
                LdinNkqweZ[i - (968 - 967)]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i--;
        };
    }
    if (!('0' != LdinNkqweZ[(948 - 948)])) {
        for (i = (49 - 48); i < max + (943 - 942); i++)
            c[i - 1] = LdinNkqweZ[i];
        c[i - 1] = '\0';
    }
    else {
        for (i = (550 - 550); max + 1 > i; i++)
            c[i] = LdinNkqweZ[i];
        c[i] = '\0';
    };
}

int main () {
    char *p;
    char *cisMoJ3;
    char a [(415 - 115)];
    char b [300];
    char c [300];
    scanf ("%s %s", a, b);
    if ((!('0' != a[0])) && (a[1] == '\0') && (b[1] == '\0') && (b[0] == '0'))
        printf ("0");
    cSbtExAB (a, b, c);
    p = c;
    if ((*p == '0') && (*(p++) != '0') && (strlen (c) > 1))
        p++;
    for (cisMoJ3 = p; cisMoJ3 < c + strlen (c); cisMoJ3++)
        printf ("%c", *cisMoJ3);
    return 0;
}

