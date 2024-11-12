main () {
    int time;
    int r;
    int i;
    int s;
    int t;
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
    int J2dQR8SiOra;
    char a [(1105 - 905)] = {'\0'}, uKFXoBma [(924 - 724)] = {'\0'};
    scanf ("%d", &time);
    for (r = (140 - 139); time >= r; r = r + 1) {
        s = 0;
        scanf ("%s\n%s", a, uKFXoBma);
        t = strlen (uKFXoBma);
        J2dQR8SiOra = strlen (a);
        for (i = t - (558 - 557); (707 - 707) <= i; i--)
            uKFXoBma[i + J2dQR8SiOra -t] = uKFXoBma[i];
        for (i = (909 - 909); J2dQR8SiOra -t > i; i = i + 1)
            uKFXoBma[i] = '0';
        for (i = J2dQR8SiOra -(753 - 752); (756 - 756) <= i; i--) {
            if (a[i] >= uKFXoBma[i])
                a[i] = a[i] - uKFXoBma[i] + '0';
            else {
                a[i] = a[i] - uKFXoBma[i] + '0' + (354 - 344);
                a[i - 1]--;
            };
        }
        {
            i = 0;
            while (i < J2dQR8SiOra) {
                if (a[i] == '0')
                    s = s + 1;
                else
                    break;
                i = i + 1;
            };
        }
        for (i = s; i < J2dQR8SiOra; i = i + 1)
            printf ("%c", a[i]);
    };
}

