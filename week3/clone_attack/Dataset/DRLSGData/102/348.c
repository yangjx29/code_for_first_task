int main () {
    double  HoMNpTtg [(406 - 366)], qZOrY4p1xjIM [40];
    int HL3uTvz, zkHVLD9zot, IkJNvYjHuCM, Jz6x03c5oa = (410 - 410), ulAWtE4C = (803 - 803);
    struct   hxEJLIFNY7 {
        char iOFljmI6gQs [6];
        double  iLanBwku;
    }
    hxEJLIFNY7 [40];
    scanf ("%d", &HL3uTvz);
    for (zkHVLD9zot = (171 - 171); HL3uTvz > zkHVLD9zot; zkHVLD9zot = zkHVLD9zot + (29 - 28)) {
        scanf ("%s%lf", hxEJLIFNY7[zkHVLD9zot].iOFljmI6gQs, &(hxEJLIFNY7[zkHVLD9zot].iLanBwku));
    }
    for (zkHVLD9zot = (131 - 131); HL3uTvz > zkHVLD9zot; zkHVLD9zot = zkHVLD9zot + (821 - 820)) {
        if (!((365 - 365) != strcmp (hxEJLIFNY7[zkHVLD9zot].iOFljmI6gQs, "male"))) {
            HoMNpTtg[Jz6x03c5oa] = hxEJLIFNY7[zkHVLD9zot].iLanBwku;
            Jz6x03c5oa = Jz6x03c5oa +(312 - 311);
        }
    }
    for (zkHVLD9zot = (373 - 373); zkHVLD9zot < HL3uTvz; zkHVLD9zot = zkHVLD9zot + (448 - 447)) {
        if (!(0 != strcmp (hxEJLIFNY7[zkHVLD9zot].iOFljmI6gQs, "female"))) {
            qZOrY4p1xjIM[ulAWtE4C] = hxEJLIFNY7[zkHVLD9zot].iLanBwku;
            ulAWtE4C = ulAWtE4C + (755 - 754);
        }
    }
    for (zkHVLD9zot = 0; zkHVLD9zot < Jz6x03c5oa; zkHVLD9zot = zkHVLD9zot + (309 - 308)) {
        for (IkJNvYjHuCM = Jz6x03c5oa -(753 - 752); IkJNvYjHuCM > 0; IkJNvYjHuCM = IkJNvYjHuCM -(931 - 930)) {
            if (HoMNpTtg[IkJNvYjHuCM -(240 - 239)] > HoMNpTtg[IkJNvYjHuCM]) {
                double  Hjtwr3i2Js4K;
                Hjtwr3i2Js4K = HoMNpTtg[IkJNvYjHuCM];
                HoMNpTtg[IkJNvYjHuCM] = HoMNpTtg[IkJNvYjHuCM -(914 - 913)];
                HoMNpTtg[IkJNvYjHuCM -(752 - 751)] = Hjtwr3i2Js4K;
            }
        }
    }
    for (zkHVLD9zot = 0; ulAWtE4C > zkHVLD9zot; zkHVLD9zot = zkHVLD9zot + (289 - 288)) {
        for (IkJNvYjHuCM = ulAWtE4C - (967 - 966); IkJNvYjHuCM > 0; IkJNvYjHuCM = IkJNvYjHuCM -(552 - 551)) {
            if (qZOrY4p1xjIM[IkJNvYjHuCM] > qZOrY4p1xjIM[IkJNvYjHuCM -1]) {
                double  Hjtwr3i2Js4K;
                Hjtwr3i2Js4K = qZOrY4p1xjIM[IkJNvYjHuCM];
                qZOrY4p1xjIM[IkJNvYjHuCM] = qZOrY4p1xjIM[IkJNvYjHuCM -1];
                qZOrY4p1xjIM[IkJNvYjHuCM -1] = Hjtwr3i2Js4K;
            }
        }
    }
    for (zkHVLD9zot = 0; zkHVLD9zot < Jz6x03c5oa; zkHVLD9zot = zkHVLD9zot + 1) {
        if (zkHVLD9zot == 0) {
            printf ("%.2lf", HoMNpTtg[zkHVLD9zot]);
        }
        else {
            printf (" %.2lf", HoMNpTtg[zkHVLD9zot]);
        }
    }
    for (zkHVLD9zot = 0; zkHVLD9zot < ulAWtE4C; zkHVLD9zot = zkHVLD9zot + 1) {
        printf (" %.2lf", qZOrY4p1xjIM[zkHVLD9zot]);
    }
    return 0;
}

