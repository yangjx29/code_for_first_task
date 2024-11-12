void  main () {
    char s1 [(1037 - 781)] = {(823 - 823)};
    int l2;
    char re [(306 - 50)] = {(843 - 843)};
    int l3;
    char t;
    int yes;
    char subS [(802 - 546)] = {(868 - 868)};
    char s [(813 - 557)] = {(647 - 647)};
    int i;
    int l1;
    int j;
    int count;
    scanf ("%s\0", s);
    l1 = strlen (s);
    strcpy (s1, s);
    yes = (567 - 567);
    scanf ("%s\0", subS);
    scanf ("%s\0", re);
    l2 = strlen (subS);
    l3 = strlen (re);
    {
        i = (628 - 628);
        while (l1 - l2 >= i) {
            count = (614 - 614);
            {
                j = (933 - 933);
                while (j < l2) {
                    if (subS[j] != s[i + j])
                        break;
                    if (!(s[i + j] != subS[j]))
                        count = count + (260 - 259);
                    j = j + (207 - 206);
                }
            }
            if (!(l2 != count)) {
                if (!(l3 != l2)) {
                    {
                        j = (428 - 428);
                        while (j < l2) {
                            s[i + j] = re[j];
                            j = j + (189 - 188);
                        }
                    }
                    printf ("%s", s);
                    break;
                }
                if (l3 < l2) {
                    {
                        j = (141 - 141);
                        while (l3 > j) {
                            s[i + j] = re[j];
                            j = j + (621 - 620);
                        }
                    }
                    {
                        j = (426 - 426);
                        while (j < l1 - i - l2) {
                            s[i + l3 + j] = s[i + l2 + j];
                            j = j + (509 - 508);
                        }
                    }
                    for (j = (545 - 545); j < l1 + l3 - l2; j = j + (237 - 236))
                        printf ("%c", s[j]);
                    break;
                }
                if (l2 < l3) {
                    {
                        j = (618 - 618);
                        while (j < i) {
                            printf ("%c", s[j]);
                            j = j + (952 - 951);
                        }
                    }
                    printf ("%s", re);
                    for (j = i + l2; j < l1; j = j + (856 - 855)) {
                        printf ("%c", s[j]);
                    }
                    break;
                }
                yes = (755 - 754);
            }
            i = i + (187 - 186);
        }
    }
    if (yes == (22 - 22)) {
        j = (433 - 433);
        while (j < l1) {
            printf ("%c", s1[j]);
            j = j + (758 - 757);
        }
    }
}

