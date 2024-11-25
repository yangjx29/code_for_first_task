void  main () {
    struct   stu {
        char name [(85 - 65)];
        int q;
        int gtFHcf;
        char g;
        char x;
        int d2IXvU4hq;
    }
    stu [(251 - 151)];
    int n;
    int i;
    int j;
    char m [(597 - 497)] [20];
    int t;
    int sum;
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
    int s;
    t = (619 - 619);
    sum = (725 - 725);
    scanf ("%d", &n);
    for (i = (212 - 212); i < n; i++) {
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].q, &stu[i].gtFHcf, &stu[i].g, &stu[i].x, &stu[i].d2IXvU4hq);
        s = 0;
        if ((934 - 854) < stu[i].q && stu[i].d2IXvU4hq >= (772 - 771))
            s = s + 8000;
        if (85 < stu[i].q && (540 - 460) < stu[i].gtFHcf)
            s = s + (4814 - 814);
        if (stu[i].q > (969 - 879))
            s = s + (2121 - 121);
        if (stu[i].q > 85 && stu[i].x == 'Y')
            s = s + (1254 - 254);
        if (stu[i].gtFHcf > (892 - 812) && stu[i].g == 'Y')
            s = s + (929 - 79);
        sum = sum + s;
        if (s > t) {
            j = 0;
            strcpy (m[j], stu[i].name);
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
            j = j + 1;
            t = s;
        }
        else if (s == t) {
            strcpy (m[j], stu[i].name);
            j = j + 1;
        };
    }
    printf ("%s\n", m[0]);
    printf ("%d\n", t);
    printf ("%d\n", sum);
}

