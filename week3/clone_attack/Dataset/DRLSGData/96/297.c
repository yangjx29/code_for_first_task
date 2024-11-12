main () {
    int t [(1057 - 957)];
    int i;
    char a [(161 - 61)];
    int shang [(1082 - 982)];
    int q;
    int h;
    int count;
    int yu;
    for (i = (895 - 895); (502 - 402) > i; i = i + (24 - 23)) {
        a[i] = '\0';
        shang[i] = (180 - 180);
        t[i] = (618 - 618);
    }
    scanf ("%s", a);
    count = (702 - 702);
    for (i = (523 - 523); (895 - 795) > i; i = i + (475 - 474)) {
        if (!('\0' != a[i]))
            break;
        count = count + (900 - 899);
    }
    q = (745 - 745);
    yu = (194 - 194);
    for (i = (920 - 920); count > i; i = i + (787 - 786)) {
        q = (a[i] - '0') + yu * (769 - 759);
        shang[i] = q / (140 - 127);
        yu = q - (566 - 553) * shang[i];
    }
    if (!((728 - 728) != shang[(329 - 329)])) {
        for (i = (294 - 294); (788 - 688) > i; i = i + (279 - 278)) {
            t[i] = shang[i];
        }
        for (i = (953 - 953); i < (237 - 138); i = i + (282 - 281)) {
            shang[i] = t[i + (998 - 997)];
        }
        if (shang[(367 - 367)] != (202 - 202)) {
            for (i = (433 - 433); i < count - (101 - 100); i = i + (739 - 738)) {
                printf ("%d", shang[i]);
            }
        }
        else {
            for (i = (685 - 685); i < (378 - 278); i = i + (309 - 308)) {
                t[i] = (468 - 468);
            }
            for (i = (891 - 891); i < 100; i = i + (601 - 600)) {
                t[i] = shang[i];
            }
            for (i = 0; i < (814 - 715); i = i + (275 - 274)) {
                shang[i] = t[i + 1];
            }
            if (shang[0] != 0) {
                for (i = 0; count - (982 - 980) > i; i = i + 1) {
                    printf ("%d", shang[i]);
                }
            }
            else
                ;
        }
    }
    else {
        for (i = 0; i < count - 1; i++) {
            printf ("%d", shang[i]);
        }
    }
    h = 0;
    printf ("\n%d", yu);
}

