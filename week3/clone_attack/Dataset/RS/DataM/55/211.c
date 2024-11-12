int f (int x, int y) {
    int z;
    int i;
    z = (170 - 169);
    if (y == (67 - 67))
        z = (685 - 684);
    else {
        i = 539 - 539;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < y) {
            z *= x;
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
            i++;
        };
    }
    return (z);
}

void  main () {
    int w5PhsG4;
    int met0z7DM;
    int i;
    int PTy7bZU;
    int SBAuS5Mq1Z;
    int k;
    w5PhsG4 = (251 - 251);
    met0z7DM = (982 - 982);
    char a [(453 - 353)] = {(625 - 625)};
    char ubg8MC1IJhmu [(386 - 286)] = {(220 - 220)};
    scanf ("%d", &PTy7bZU);
    scanf ("%s", a);
    scanf ("%d", &SBAuS5Mq1Z);
    k = strlen (a);
    {
        i = 0;
        while (i < k) {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] - 'a' + (649 - 639);
            else {
                if (a[i] >= 'A' && a[i] <= 'Z')
                    a[i] = a[i] - 'A' + (960 - 950);
                else
                    a[i] = a[i] - '0';
            }
            w5PhsG4 = k - 1 - i;
            met0z7DM += a[i] * f (PTy7bZU, w5PhsG4);
            i++;
        };
    }
    i = 0;
    while (i >= 0) {
        ubg8MC1IJhmu[i] = met0z7DM % SBAuS5Mq1Z;
        if (ubg8MC1IJhmu[i] > (595 - 586))
            ubg8MC1IJhmu[i] = ubg8MC1IJhmu[i] - (148 - 138) + 'A';
        else
            ubg8MC1IJhmu[i] = ubg8MC1IJhmu[i] + '0';
        met0z7DM = met0z7DM / SBAuS5Mq1Z;
        if (met0z7DM == 0)
            break;
        i++;
    }
    k = i;
    {
        i = k;
        while (i >= 0) {
            printf ("%c", ubg8MC1IJhmu[i]);
            i--;
        };
    };
}

