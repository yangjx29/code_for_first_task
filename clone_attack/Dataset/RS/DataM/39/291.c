struct   student {
    char name [(887 - 867)];
    int hAyRaW;
    int AyVnc79W;
    char moni;
    char west;
    int comp;
}
BGp3P2l [100];

void  main () {
    char nam [(158 - 138)];
    puts (nam);
    int sum;
    int s;
    int n;
    int t;
    int d;
    int i;
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
    sum = (522 - 522);
    s = 0;
    struct   student *p;
    scanf ("%d", &n);
    {
        p = BGp3P2l;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BGp3P2l +n > p) {
            scanf ("%s %d %d %c %c %d", &p->name, &p->hAyRaW, &p->AyVnc79W, &p->moni, &p->west, &p->comp);
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
            p = p + 1;
        };
    }
    p = BGp3P2l;
    {
        p = BGp3P2l;
        while (p < BGp3P2l +n) {
            t = 0;
            if (p->hAyRaW > (806 - 726) && p->comp >= 1)
                t = t + 8000;
            if (85 < p->hAyRaW && p->AyVnc79W > 80)
                t = t + 4000;
            if (90 < p->hAyRaW)
                t = t + (2943 - 943);
            if (p->hAyRaW > 85 && p->west == 'Y')
                t = t + 1000;
            if (p->AyVnc79W > 80 && p->moni == 'Y')
                t = t + 850;
            if (t > s) {
                s = t;
                d = strlen (p->name);
                strcpy (nam, p->name);
                for (i = d; i < 20; i++)
                    nam[i] = 0;
            }
            p++;
            sum = sum + t;
        };
    }
    printf ("%d\n%d", s, sum);
}

