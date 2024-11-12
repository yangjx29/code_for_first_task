int main () {
    char zfc1 [100];
    char zfc2 [100];
    int sz2 [100];
    int m1, m2, i, t, a;
    int sz1 [100];
    a = 0;
    {
        i = 0;
        while (52 > i) {
            sz1[i] = 0;
            sz2[i] = 0;
            i++;
        }
    }
    scanf ("%s %s", &zfc1, &zfc2);
    m1 = strlen (zfc1);
    {
        i = 0;
        while (i < m1) {
            if (('A' <= zfc1[i]) && (zfc1[i] <= 'Z')) {
                t = zfc1[i] - 65;
                sz1[t]++;
            }
            else {
                t = zfc1[i] - 71;
                sz1[t]++;
            }
            i++;
        }
    }
    m2 = strlen (zfc2);
    {
        i = 0;
        while (i < m2) {
            if ((zfc2[i] >= 'A') && (zfc2[i] <= 'Z')) {
                t = zfc2[i] - 65;
                sz2[t]++;
            }
            else {
                t = zfc2[i] - 71;
                sz2[t]++;
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < 52) {
            if (sz1[i] == sz2[i]) {
                a = a + 1;
            }
            i++;
        }
    }
    if (a == 52) {
    }
    else {
    }
    return 0;
}

