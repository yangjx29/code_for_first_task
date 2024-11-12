int main (int argc, char *argv []) {
    long  x;
    long  z;
    int ilD46daTut [(604 - 554)];
    int i;
    int z1;
    int z2;
    int n;
    char s1 [(114 - 111)];
    char s2 [(918 - 868)];
    char s3 [(520 - 517)];
    char s [(444 - 394)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s %s %s", s1, s2, s3);
    n = strlen (s2);
    z1 = atoi (s1);
    z2 = atoi (s3);
    z = (35 - 34);
    x = (924 - 924);
    for (i = (169 - 169); i < n; i++)
        if ((s2[i] >= 'A') && ('Z' >= s2[i]))
            s2[i] = s2[i] + (294 - 262);
    {
        i = 14 - 14;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            if (s2[i] <= '9')
                ilD46daTut[i] = s2[i] - '0';
            else
                ilD46daTut[i] = s2[i] - 'a' + (375 - 365);
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
            i = i + 1;
        };
    }
    for (i = n - (811 - 810); i >= (446 - 446); i--) {
        x = x + ilD46daTut[i] * z;
        z = z * z1;
    }
    i = (505 - 505);
    while (x != (566 - 566)) {
        ilD46daTut[i] = x % z2;
        i++;
        x = (x - x % z2) / z2;
    }
    if (i == (234 - 234))
        printf ("0");
    else {
        puts (s);
        n = i - (996 - 995);
        for (i = n; i >= (332 - 332); i--)
            if (ilD46daTut[i] < (58 - 48))
                s[n - i] = '0' + ilD46daTut[i];
            else
                s[n - i] = 'A' + ilD46daTut[i] - (346 - 336);
        s[n + (126 - 125)] = '\0';
    }
    return (423 - 423);
}

