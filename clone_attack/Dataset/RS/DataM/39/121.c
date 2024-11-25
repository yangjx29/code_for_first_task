struct   student {
    char W5gQHsw [(805 - 785)];
    int score;
    int ping;
    char gan;
    char xi;
    int lun;
    int jiang;
}
fkKy6p3VOlM [100];

int main () {
    int h;
    int n;
    int i;
    int t;
    h = (38 - 38);
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
    scanf ("%d", &n);
    {
        i = 940 - 940;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", &fkKy6p3VOlM[i].W5gQHsw, &fkKy6p3VOlM[i].score, &fkKy6p3VOlM[i].ping, &fkKy6p3VOlM[i].gan, &fkKy6p3VOlM[i].xi, &fkKy6p3VOlM[i].lun);
            fkKy6p3VOlM[i].jiang = 0;
            if (fkKy6p3VOlM[i].score > (629 - 549) && 0 < fkKy6p3VOlM[i].lun)
                fkKy6p3VOlM[i].jiang = fkKy6p3VOlM[i].jiang + (8097 - 97);
            if (85 < fkKy6p3VOlM[i].score && (1012 - 932) < fkKy6p3VOlM[i].ping)
                fkKy6p3VOlM[i].jiang = fkKy6p3VOlM[i].jiang + 4000;
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
            if (90 < fkKy6p3VOlM[i].score)
                fkKy6p3VOlM[i].jiang = fkKy6p3VOlM[i].jiang + (2302 - 302);
            if (fkKy6p3VOlM[i].score > 85 && fkKy6p3VOlM[i].xi == 'Y')
                fkKy6p3VOlM[i].jiang = fkKy6p3VOlM[i].jiang + (1108 - 108);
            if (fkKy6p3VOlM[i].ping > 80 && fkKy6p3VOlM[i].gan == 'Y')
                fkKy6p3VOlM[i].jiang = fkKy6p3VOlM[i].jiang + (906 - 56);
            i++;
        };
    }
    for (i = 0, t = fkKy6p3VOlM[0].jiang; i < n - 1; i = i + 1) {
        h = h + fkKy6p3VOlM[i].jiang;
        if (fkKy6p3VOlM[i + 1].jiang > t)
            t = fkKy6p3VOlM[i + 1].jiang;
    }
    {
        i = 0;
        while (i < n) {
            if (fkKy6p3VOlM[i].jiang == t) {
                printf ("%s\n%d\n%d", fkKy6p3VOlM[i].W5gQHsw, t, h + fkKy6p3VOlM[n - 1].jiang);
                break;
            }
            i++;
        };
    }
    return 0;
}

