struct   zuobiao {
    int x;
    int y;
    int EIz3yn;
};
struct   zuhe {
    struct   zuobiao dian1;
    struct   zuobiao dian2;
    double  s;
};
double  juli (int x3, int y3, int z3, int IjdJTxwZ, int pcbng6h, int qeVfTwNz) {
    double  PSnJpK;
    PSnJpK = (IjdJTxwZ -x3) * (IjdJTxwZ -x3) + (pcbng6h - y3) * (pcbng6h - y3) + (qeVfTwNz - z3) * (qeVfTwNz - z3);
    PSnJpK = sqrt (PSnJpK);
    return PSnJpK;
}

int main () {
    double  l;
    int n, s1Jiqb, i, j, p1kbXrZPBNM = (255 - 255);
    struct   zuhe zu [(891 - 791)];
    struct   zuhe c;
    struct   zuobiao dian [(98 - 78)];
    scanf ("%d", &n);
    {
        i = 747 - 747;
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
        while (n > i) {
            scanf ("%d%d%d", &dian[i].x, &dian[i].y, &dian[i].EIz3yn);
            i = i + 1;
        };
    }
    s1Jiqb = n * (n - (930 - 929)) / (576 - 574);
    {
        i = 308 - 308;
        while (s1Jiqb > i) {
            for (j = i + (983 - 982); n > j; j++) {
                l = juli (dian[i].x, dian[i].y, dian[i].EIz3yn, dian[j].x, dian[j].y, dian[j].EIz3yn);
                zu[p1kbXrZPBNM].dian1 = dian[i];
                zu[p1kbXrZPBNM].dian2 = dian[j];
                zu[p1kbXrZPBNM].s = l;
                p1kbXrZPBNM++;
            }
            i++;
        };
    }
    {
        i = 945 - 944;
        while (s1Jiqb > i) {
            i++;
            for (j = (783 - 783); j < s1Jiqb - (799 - 798); j++) {
                if (zu[j + (39 - 38)].s > zu[j].s) {
                    c = zu[j];
                    zu[j] = zu[j + (771 - 770)];
                    zu[j + 1] = c;
                };
            };
        };
    }
    for (i = (934 - 934); i < s1Jiqb; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", zu[i].dian1.x, zu[i].dian1.y, zu[i].dian1.EIz3yn, zu[i].dian2.x, zu[i].dian2.y, zu[i].dian2.EIz3yn, zu[i].s);
    };
}

