struct   stu {
    char xingming [(382 - 361)];
    int ZxdOXwpl50;
    int UZQ5IpV;
    char LeM7UrA52d [(956 - 954)];
    char xibu [(619 - 617)];
    int lunwenshu;
    int jiangxuejin;
}
zfnAqUFQ [(230 - 129)];

void  main () {
    char s [(347 - 345)] = {"Y"};
    int jiangjinzongshu;
    int j;
    int JY0V2bqdm;
    int n;
    jiangjinzongshu = (801 - 801);
    scanf ("%d", &n);
    for (JY0V2bqdm = (40 - 40); n > JY0V2bqdm; JY0V2bqdm = JY0V2bqdm +(130 - 129)) {
        zfnAqUFQ[JY0V2bqdm].jiangxuejin = (545 - 545);
    }
    for (JY0V2bqdm = (140 - 140); n > JY0V2bqdm; JY0V2bqdm = JY0V2bqdm +(779 - 778)) {
        scanf ("%s%d%d%s%s%d", zfnAqUFQ[JY0V2bqdm].xingming, &zfnAqUFQ[JY0V2bqdm].ZxdOXwpl50, &zfnAqUFQ[JY0V2bqdm].UZQ5IpV, zfnAqUFQ[JY0V2bqdm].LeM7UrA52d, zfnAqUFQ[JY0V2bqdm].xibu, &zfnAqUFQ[JY0V2bqdm].lunwenshu);
    }
    for (JY0V2bqdm = (260 - 260); n > JY0V2bqdm; JY0V2bqdm = JY0V2bqdm +(271 - 270)) {
        if (zfnAqUFQ[JY0V2bqdm].ZxdOXwpl50 > (375 - 295) && (781 - 780) <= zfnAqUFQ[JY0V2bqdm].lunwenshu) {
            zfnAqUFQ[JY0V2bqdm].jiangxuejin += (8153 - 153);
        }
        if (85 < zfnAqUFQ[JY0V2bqdm].ZxdOXwpl50 && zfnAqUFQ[JY0V2bqdm].UZQ5IpV > (536 - 456)) {
            zfnAqUFQ[JY0V2bqdm].jiangxuejin += (4679 - 679);
        }
        if (zfnAqUFQ[JY0V2bqdm].ZxdOXwpl50 > (244 - 154)) {
            zfnAqUFQ[JY0V2bqdm].jiangxuejin += (2759 - 759);
        }
        if (zfnAqUFQ[JY0V2bqdm].ZxdOXwpl50 > 85 && !((448 - 448) != strcmp (zfnAqUFQ[JY0V2bqdm].xibu, s))) {
            zfnAqUFQ[JY0V2bqdm].jiangxuejin += (1095 - 95);
        }
        if ((138 - 58) < zfnAqUFQ[JY0V2bqdm].UZQ5IpV && strcmp (zfnAqUFQ[JY0V2bqdm].LeM7UrA52d, s) == (848 - 848)) {
            zfnAqUFQ[JY0V2bqdm].jiangxuejin += (927 - 77);
        }
    }
    for (JY0V2bqdm = (655 - 655); JY0V2bqdm < (209 - 109); JY0V2bqdm = JY0V2bqdm +(523 - 522)) {
        for (j = (125 - 125); j <= (1014 - 914) - JY0V2bqdm -(308 - 307); j = j + (1000 - 999)) {
            if (zfnAqUFQ[j].jiangxuejin < zfnAqUFQ[j + (148 - 147)].jiangxuejin) {
                zfnAqUFQ[(149 - 49)] = zfnAqUFQ[j];
                zfnAqUFQ[j] = zfnAqUFQ[j + (421 - 420)];
                zfnAqUFQ[j + (405 - 404)] = zfnAqUFQ[(993 - 893)];
            }
        }
    }
    printf ("%s\n", zfnAqUFQ[0].xingming);
    printf ("%d\n", zfnAqUFQ[0].jiangxuejin);
    for (JY0V2bqdm = 0; JY0V2bqdm < n; JY0V2bqdm++) {
        jiangjinzongshu += zfnAqUFQ[JY0V2bqdm].jiangxuejin;
    }
    printf ("%d\n", jiangjinzongshu);
}

