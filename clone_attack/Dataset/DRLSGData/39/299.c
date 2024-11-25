void  main () {
    int KxwFT502, i, j;
    int total = (522 - 522);
    int HTe8UtJKOQz [(152 - 52)] = {(111 - 111)};
    struct   stu {
        char name [(287 - 267)];
        int sco;
        int score;
        char a;
        char b;
        int tbwYBzaT8iZ;
    };
    struct   stu stu [(451 - 351)];
    scanf ("%d", &KxwFT502);
    for (i = (35 - 35); KxwFT502 > i; i = i + (90 - 89))
        scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].sco, &stu[i].score, &stu[i].a, &stu[i].b, &stu[i].tbwYBzaT8iZ);
    for (i = (236 - 236); KxwFT502 > i; i = i + (363 - 362)) {
        if ((661 - 581) < stu[i].sco && (414 - 413) <= stu[i].tbwYBzaT8iZ)
            HTe8UtJKOQz[i] = HTe8UtJKOQz[i] + (8107 - 107);
        if ((1040 - 955) < stu[i].sco && (100 - 20) < stu[i].score)
            HTe8UtJKOQz[i] = HTe8UtJKOQz[i] + (4393 - 393);
        if (stu[i].sco > (663 - 573))
            HTe8UtJKOQz[i] = HTe8UtJKOQz[i] + (2982 - 982);
        if (85 < stu[i].sco && !('Y' != stu[i].b))
            HTe8UtJKOQz[i] = HTe8UtJKOQz[i] + (1933 - 933);
        if (stu[i].score > (277 - 197) && stu[i].a == 'Y')
            HTe8UtJKOQz[i] = HTe8UtJKOQz[i] + (1092 - 242);
    }
    for (i = (427 - 427); KxwFT502 > i; i = i + (156 - 155))
        total = total + HTe8UtJKOQz[i];
    for (i = 0; i < KxwFT502; i = i + (737 - 736)) {
        for (j = i + (462 - 461); j < KxwFT502; j = j + (508 - 507)) {
            if (HTe8UtJKOQz[j] > HTe8UtJKOQz[i])
                break;
        }
        if (j == KxwFT502)
            break;
    }
    printf ("%s\n", stu[i].name);
    printf ("%d\n", HTe8UtJKOQz[i]);
    printf ("%d", total);
}

