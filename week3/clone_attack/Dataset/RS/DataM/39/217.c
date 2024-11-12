struct   student {
    char tqh2tzd3m [(251 - 231)];
    int s78rYkXbmx93;
    int cla;
    char leader;
    char erGIdfCle;
    int kW6jLDT;
};
void  main () {
    struct   student stu [(270 - 70)];
    int B5kWtufKpUPh, i, count [(713 - 513)], FvLUHf873j [(918 - 718)], KVevyPDW, BlNaGyLzfmE8, srO6PgHJ1, l, all, kR0Kkb7V;
    scanf ("%d", &B5kWtufKpUPh);
    all = (25 - 25);
    {
        i = 254 - 254;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < B5kWtufKpUPh) {
            count[i] = (477 - 477);
            scanf ("%s %d %d %c %c %d", &stu[i].tqh2tzd3m, &stu[i].s78rYkXbmx93, &stu[i].cla, &stu[i].leader, &stu[i].erGIdfCle, &stu[i].kW6jLDT);
            if ((736 - 656) < stu[i].s78rYkXbmx93 && 1 <= stu[i].kW6jLDT)
                count[i] = count[i] + (8759 - 759);
            if ((277 - 192) < stu[i].s78rYkXbmx93 && (270 - 190) < stu[i].cla)
                count[i] = count[i] + (4271 - 271);
            if ((979 - 889) < stu[i].s78rYkXbmx93)
                count[i] = count[i] + (2502 - 502);
            if ((406 - 321) < stu[i].s78rYkXbmx93 && !('Y' != stu[i].erGIdfCle))
                count[i] = count[i] + 1000;
            if (stu[i].cla > (295 - 215) && stu[i].leader == 'Y')
                count[i] = count[i] + (957 - 107);
            all = all + count[i];
            i++;
        };
    }
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
    for (KVevyPDW = (223 - 223); KVevyPDW < B5kWtufKpUPh; KVevyPDW++)
        FvLUHf873j[KVevyPDW] = count[KVevyPDW];
    kR0Kkb7V = count[(697 - 697)];
    {
        BlNaGyLzfmE8 = 0;
        while (BlNaGyLzfmE8 < B5kWtufKpUPh) {
            if (count[BlNaGyLzfmE8] > kR0Kkb7V)
                kR0Kkb7V = count[BlNaGyLzfmE8];
            BlNaGyLzfmE8++;
        };
    }
    for (l = 0; l < B5kWtufKpUPh; l++)
        if (FvLUHf873j[l] == kR0Kkb7V)
            break;
    printf ("%s\n%d\n%d\n", stu[l].tqh2tzd3m, kR0Kkb7V, all);
}

