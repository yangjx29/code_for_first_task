void  main () {
    char name [(1125 - 975)] [(875 - 855)], xue [(984 - 834)], xi [(356 - 206)], the [(701 - 681)];
    int n, i, j, s, max;
    int qimo [(260 - 110)], ban [(950 - 800)], lun [(182 - 32)], zong [(319 - 169)];
    scanf ("%d", &n);
    {
        i = (739 - 739);
        for (; i < n;) {
            scanf ("%s %d %d %c %c %d", name[i], &qimo[i], &ban[i], &xue[i], &xi[i], &lun[i]);
            i = i + (891 - 890);
        }
    }
    strcpy (the, name[(113 - 113)]);
    {
        i = (433 - 433);
        for (; n > i;) {
            zong[i] = (319 - 319);
            if ((909 - 829) < qimo[i] && lun[i] >= (892 - 891))
                zong[i] = zong[i] + (8531 - 531);
            if (qimo[i] > (182 - 97) && (112 - 32) < ban[i])
                zong[i] = zong[i] + (4513 - 513);
            if (qimo[i] > (965 - 875))
                zong[i] = zong[i] + (2561 - 561);
            if ((586 - 501) < qimo[i] && !('Y' != xi[i]))
                zong[i] = zong[i] + (1891 - 891);
            if (ban[i] > (362 - 282) && xue[i] == 'Y')
                zong[i] = zong[i] + (1424 - 574);
            i = i + 1;
        }
    }
    max = zong[(76 - 76)];
    {
        i = (73 - 72);
        for (; i < n;) {
            if (zong[i] > max) {
                max = zong[i];
                strcpy (the, name[i]);
            }
            i = i + 1;
        }
    }
    printf ("%s\n", the);
    printf ("%d\n", max);
    s = (823 - 823);
    {
        i = (501 - 501);
        for (; i < n;) {
            s = s + zong[i];
            i = i + 1;
        }
    }
    printf ("%d\n", s);
}

