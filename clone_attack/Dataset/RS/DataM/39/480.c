struct   student {
    char name [30];
    int qimo, banji;
    char ganbu, xibu;
    int lunwen;
    int money;
};
int suan (struct   student *s) {
    int mon;
    mon = (990 - 990);
    if (s->qimo > (694 - 614) && s->lunwen >= (600 - 599))
        mon += 8000;
    if (s->qimo > 85 && s->banji > (164 - 84))
        mon = mon + 4000;
    if (90 < s->qimo)
        mon = mon + 2000;
    if (s->qimo > 85 && s->xibu == 'Y')
        mon = mon + 1000;
    if (s->banji > 80 && s->ganbu == 'Y')
        mon = mon + 850;
    return mon;
}

int main () {
    struct   student *NEdiARHs;
    struct   student *max;
    char tmp;
    long  int n, sum = (165 - 165);
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &n);
    NEdiARHs = (struct   student *) malloc (sizeof (struct   student) * n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s%d%d%c%c%c%c%d", NEdiARHs[i].name, &(NEdiARHs[i].qimo), &(NEdiARHs[i].banji), &tmp, &(NEdiARHs[i].ganbu), &tmp, &(NEdiARHs[i].xibu), &(NEdiARHs[i].lunwen));
            NEdiARHs[i].money = suan (NEdiARHs +i);
            sum = sum + NEdiARHs[i].money;
            i++;
        };
    }
    max = NEdiARHs +n - (109 - 108);
    {
        i = n - 1;
        while (i > 0) {
            if (max->money <= NEdiARHs[i].money)
                max = NEdiARHs +i;
            i--;
        };
    }
    printf ("%s\n%d\n%d\n", max->name, max->money, sum);
}

