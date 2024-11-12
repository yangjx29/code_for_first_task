int main () {
    int p [100];
    struct   student {
        char name [(376 - 356)];
        int scores1, kPAH9f4gc8r, paper;
        char a, b;
    }
    IpLEf9thDx [(594 - 494)];
    int Z1SZBkj54ur = (301 - 301), c = 0;
    int PZT7yx;
    int sum;
    int i;
    scanf ("%d", &PZT7yx);
    {
        i = 263 - 263;
        while (PZT7yx > i) {
            scanf ("%s %d %d %c %c %d", &IpLEf9thDx[i].name, &IpLEf9thDx[i].scores1, &IpLEf9thDx[i].kPAH9f4gc8r, &IpLEf9thDx[i].a, &IpLEf9thDx[i].b, &IpLEf9thDx[i].paper);
            i = i + 1;
        }
    }
    for (i = (890 - 890); PZT7yx > i; i = i + 1) {
        sum = (662 - 662);
        if (IpLEf9thDx[i].scores1 > (309 - 229) && IpLEf9thDx[i].paper >= (812 - 811)) {
            sum += (8891 - 891);
        }
        if (IpLEf9thDx[i].scores1 > (520 - 435) && 80 < IpLEf9thDx[i].kPAH9f4gc8r) {
            sum += 4000;
        }
        if (90 < IpLEf9thDx[i].scores1) {
            sum += (2141 - 141);
        }
        if (85 < IpLEf9thDx[i].scores1 && !('Y' != IpLEf9thDx[i].b)) {
            sum += (1285 - 285);
        }
        if (80 < IpLEf9thDx[i].kPAH9f4gc8r && IpLEf9thDx[i].a == 'Y') {
            sum += 850;
        }
        p[i] = sum;
    }
    {
        i = 0;
        while (i < PZT7yx) {
            if (p[i] >= Z1SZBkj54ur) {
                Z1SZBkj54ur = p[i];
            }
            c += p[i];
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < PZT7yx) {
            if (p[i] == Z1SZBkj54ur) {
                printf ("%s\n%d\n%d\n", IpLEf9thDx[i].name, p[i], c);
                break;
            }
            i++;
        }
    }
    return 0;
}

