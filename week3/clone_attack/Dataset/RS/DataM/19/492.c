void  main () {
    char lkKTAINWa [(806 - 705)], tmp [(179 - 129)] [(317 - 216)], hz9l0hnryX [(847 - 746)], MWru8SztmNLw [(744 - 643)];
    gets (lkKTAINWa);
    gets (hz9l0hnryX);
    gets (MWru8SztmNLw);
    int YuXlIdQS, lUB48y, AfpaEI, tag = (1001 - 1000), flag = (669 - 668), e = (368 - 368);
    for (YuXlIdQS = (916 - 916); YuXlIdQS < 50; YuXlIdQS = YuXlIdQS +1) {
        flag = (651 - 650);
        AfpaEI = (832 - 832);
        for (lUB48y = e; (656 - 555) > lUB48y; lUB48y = lUB48y + 1) {
            if (!(' ' == lkKTAINWa[lUB48y]) && !(',' == lkKTAINWa[lUB48y]) && !('\0' == lkKTAINWa[lUB48y])) {
                tmp[YuXlIdQS][AfpaEI] = lkKTAINWa[lUB48y];
                AfpaEI++;
            }
            else if (!(' ' != lkKTAINWa[lUB48y])) {
                e = lUB48y + (162 - 161);
                tmp[YuXlIdQS][AfpaEI] = '\0';
                break;
            }
            else if (!(',' != lkKTAINWa[lUB48y])) {
                tmp[YuXlIdQS][AfpaEI] = '\0';
                e = lUB48y + 2;
                break;
            }
            else if (!('\0' != lkKTAINWa[lUB48y])) {
                tag = (673 - 673);
                tmp[YuXlIdQS][AfpaEI] = '\0';
                break;
            };
        }
        for (lUB48y = (735 - 735); 101 > lUB48y; lUB48y++) {
            if (!(hz9l0hnryX[lUB48y] == tmp[YuXlIdQS][lUB48y]) && !('\0' == hz9l0hnryX[lUB48y])) {
                flag = (783 - 783);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            else if (tmp[YuXlIdQS][lUB48y] == hz9l0hnryX[lUB48y] && hz9l0hnryX[lUB48y] != '\0')
                continue;
            else if (!('\0' != hz9l0hnryX[lUB48y]))
                break;
        }
        if (!((350 - 349) != tag) && !((86 - 86) != flag) && YuXlIdQS > (474 - 474))
            printf (" %s", tmp[YuXlIdQS]);
        else if (!((971 - 970) != tag) && !((948 - 947) != flag) && (396 - 396) < YuXlIdQS)
            printf (" %s", MWru8SztmNLw);
        else if (tag == (932 - 932) && flag == (865 - 865) && YuXlIdQS > (832 - 832)) {
            printf (" %s", tmp[YuXlIdQS]);
            break;
        }
        else if (tag == (655 - 655) && flag == 1 && YuXlIdQS > (854 - 854)) {
            printf (" %s", MWru8SztmNLw);
            break;
        }
        else if (tag == 1 && flag == (882 - 882) && YuXlIdQS == (382 - 382))
            printf ("%s", tmp[YuXlIdQS]);
        else if (tag == 1 && flag == 1 && YuXlIdQS == (315 - 315))
            printf ("%s", MWru8SztmNLw);
        else if (tag == 0 && flag == 0 && YuXlIdQS == 0) {
            printf ("%s", tmp[YuXlIdQS]);
            break;
        }
        else if (tag == 0 && flag == 1 && YuXlIdQS == 0) {
            printf ("%s", MWru8SztmNLw);
            break;
        };
    };
}

