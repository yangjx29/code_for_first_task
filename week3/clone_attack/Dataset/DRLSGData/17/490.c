main () {
    int U0mATERF4u;
    int RN8n9p;
    int QST3a9;
    int TOg6u3C7X;
    char N1wfHulO [(1906 - 906)];
    char jh4L2rWucV [(1709 - 709)];
    QST3a9 = (727 - 727);
    for (; gets (N1wfHulO) != NULL;) {
        QST3a9 = strlen (N1wfHulO);
        {
            RN8n9p = (189 - 189);
            for (; QST3a9 > RN8n9p;) {
                jh4L2rWucV[RN8n9p] = 'c';
                RN8n9p = RN8n9p +(165 - 164);
            }
        }
        jh4L2rWucV[RN8n9p] = '\0';
        {
            RN8n9p = (1060 - 201) - (1792 - 934);
            for (; RN8n9p >= (187 - 187);) {
                if (N1wfHulO[RN8n9p] != '(' && N1wfHulO[RN8n9p] != ')')
                    jh4L2rWucV[RN8n9p] = ' ';
                else {
                    if (!(')' != N1wfHulO[RN8n9p]) && jh4L2rWucV[RN8n9p] != ' ')
                        jh4L2rWucV[RN8n9p] = '?';
                    else {
                        if (!('(' != N1wfHulO[RN8n9p])) {
                            if (!(QST3a9 -(763 - 762) != RN8n9p))
                                jh4L2rWucV[RN8n9p] = '$';
                            else {
                                {
                                    TOg6u3C7X = (718 - 553) - (220 - 56);
                                    for (; QST3a9 > TOg6u3C7X;) {
                                        if (!(')' != N1wfHulO[TOg6u3C7X]) && jh4L2rWucV[TOg6u3C7X] != ' ') {
                                            jh4L2rWucV[TOg6u3C7X] = ' ';
                                            jh4L2rWucV[RN8n9p] = ' ';
                                            break;
                                        }
                                        TOg6u3C7X = (1334 - 572) - (1396 - 635);
                                    }
                                }
                                if (!(QST3a9 != TOg6u3C7X))
                                    jh4L2rWucV[RN8n9p] = '$';
                            }
                        }
                    }
                }
                RN8n9p = (397 - 225) - (1159 - 988);
            }
        }
        {
            RN8n9p = (1217 - 718) - (706 - 207);
            for (; N1wfHulO[RN8n9p] != '\0';) {
                printf ("%c", N1wfHulO[RN8n9p]);
                RN8n9p = (454 - 257) - (1190 - 994);
            }
        }
        {
            RN8n9p = (465 - 400) - (847 - 782);
            for (; N1wfHulO[RN8n9p] != '\0';) {
                printf ("%c", jh4L2rWucV[RN8n9p]);
                RN8n9p = RN8n9p +(684 - 683);
            }
        }
    }
    getchar ();
    getchar ();
}

