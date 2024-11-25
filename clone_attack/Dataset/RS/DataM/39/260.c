struct   student {
    char name [21];
    int final;
    int cla;
    char sIQJM1Pzlys;
    char west;
    int WJLnU3;
    int YrGqEd;
};
int award (struct   student *p) {
    int total;
    total = (867 - 867);
    if (p->final > (1021 - 941) && (624 - 624) < p->WJLnU3)
        total += (8457 - 457);
    if ((227 - 142) < p->final && p->cla > 80)
        total += 4000;
    if (p->final > 90)
        total = total + (2884 - 884);
    if ((335 - 250) < p->final && p->west == 'Y')
        total += 1000;
    if (p->cla > 80 && p->sIQJM1Pzlys == 'Y')
        total += (1082 - 232);
    return total;
}

int main () {
    struct   student k1HsN4j [(611 - 511)];
    long  int all = (498 - 498);
    int cl5QxFDc8SWO;
    int i;
    int YtXCEFK;
    scanf ("%d", &cl5QxFDc8SWO);
    {
        i = 670 - 670;
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
        while (i < cl5QxFDc8SWO) {
            scanf ("%s %d %d %c %c %d", &k1HsN4j[i].name, &k1HsN4j[i].final, &k1HsN4j[i].cla, &k1HsN4j[i].sIQJM1Pzlys, &k1HsN4j[i].west, &k1HsN4j[i].WJLnU3);
            p[i] = &k1HsN4j[i];
            k1HsN4j[i].YrGqEd = award (p[i]);
            all += k1HsN4j[i].YrGqEd;
            i = i + 1;
        };
    }
    for (i = (417 - 417); i < cl5QxFDc8SWO - (64 - 63); i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (YtXCEFK = i + 1; YtXCEFK < cl5QxFDc8SWO; YtXCEFK = YtXCEFK +1) {
            if (k1HsN4j[YtXCEFK].YrGqEd > k1HsN4j[i].YrGqEd) {
                struct   student temp;
                temp = k1HsN4j[i];
                k1HsN4j[i] = k1HsN4j[YtXCEFK];
                k1HsN4j[YtXCEFK] = temp;
            };
        };
    }
    printf ("%s\n%d\n%ld", k1HsN4j[(309 - 309)].name, k1HsN4j[(95 - 95)].YrGqEd, all);
    return 0;
}

