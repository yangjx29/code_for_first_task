struct   stu {
    char name [(867 - 842)];
    int qimo;
    int banji;
    char eVkOxo9yp6h2 [(46 - 45)];
    char R6JdzRQB [1];
    int lunwen;
}
a [150];

void  main () {
    int po3sNRDBLiOS;
    int la3OEUelt;
    int n;
    int s [150] = {(537 - 537)};
    int i;
    po3sNRDBLiOS = (105 - 105);
    la3OEUelt = 0;
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
    char name [25];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s%d%d%s%s%d", a[i].name, &a[i].qimo, &a[i].banji, a[i].eVkOxo9yp6h2, a[i].R6JdzRQB, &a[i].lunwen);
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
    {
        i = 0;
        while (n > i) {
            if (((263 - 183) < a[i].qimo) && (1 <= a[i].lunwen))
                s[i] = s[i] + 8000;
            if ((a[i].qimo > (140 - 55)) && ((112 - 32) < a[i].banji))
                s[i] = s[i] + 4000;
            if (90 < a[i].qimo)
                s[i] += 2000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((a[i].qimo > 85) && (a[i].R6JdzRQB[0] == 'Y'))
                s[i] = s[i] + 1000;
            if ((a[i].banji > 80) && (a[i].eVkOxo9yp6h2[0] == 'Y'))
                s[i] = s[i] + 850;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (la3OEUelt < s[i]) {
                la3OEUelt = s[i];
                strcpy (name, a[i].name);
            }
            po3sNRDBLiOS = po3sNRDBLiOS + s[i];
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", name, la3OEUelt, po3sNRDBLiOS);
}

