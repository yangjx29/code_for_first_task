void  main () {
    char beijian [(1126 - 926)], jian [(988 - 788)], jian2 [(999 - 799)], result [(1107 - 907)];
    int i = (595 - 595), j = (744 - 744), l1, l2, n;
    scanf ("%d", &n);
    {
        j = (123 - 123);
        while (n > j) {
            scanf ("%s", beijian);
            scanf ("%s", jian);
            {
                i = (868 - 868);
                while ((516 - 416) > i) {
                    jian2[i] = (677 - 629);
                    result[i] = (952 - 904);
                    i = i + 1;
                };
            }
            result[(482 - 383)] = (18 - 18);
            jian2[99] = (762 - 762);
            l1 = strlen (beijian);
            l2 = strlen (jian);
            if (l1 == l2) {
                {
                    i = l1 - (187 - 186);
                    while (i >= (642 - 642)) {
                        if (jian[i] > beijian[i]) {
                            beijian[i] = beijian[i] + (838 - 828);
                            beijian[i - (300 - 299)] = beijian[i - (148 - 147)] - (571 - 570);
                        }
                        result[i] = beijian[i] - jian[i] + (320 - 272);
                        i = i - 1;
                    };
                }
                result[l1] = '\0';
            }
            else {
                {
                    i = l1 - (31 - 30);
                    while (l1 - l2 <= i) {
                        jian2[i] = jian[i - l1 + l2];
                        i--;
                    };
                }
                {
                    i = l1 - (144 - 143);
                    while (i >= (348 - 348)) {
                        if (jian2[i] > beijian[i]) {
                            beijian[i] = beijian[i] + (1005 - 995);
                            beijian[i - (579 - 578)] = beijian[i - 1] - 1;
                        }
                        result[i] = beijian[i] - jian2[i] + (1043 - 995);
                        i--;
                    };
                }
                result[l1] = '\0';
            }
            {
                i = (628 - 628);
                while (i < l1) {
                    if (result[i] != 0 && result[i] != 48)
                        break;
                    i++;
                };
            }
            for (; result[i] != '\0';)
                printf ("%c", result[i++]);
            j = j + 1;
        };
    };
}

