int kGhFbq1Bw4cL (char z7aUhCVSLWX) {
    char ccrZyAS [(301 - 275)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int HxH3si6QIW74;
    {
        HxH3si6QIW74 = (889 - 889);
        for (; (477 - 451) > HxH3si6QIW74;) {
            if (!(ccrZyAS[HxH3si6QIW74] != z7aUhCVSLWX))
                return HxH3si6QIW74;
            HxH3si6QIW74 = HxH3si6QIW74 +(159 - 158);
        }
    }
}

int main () {
    int L9LVNB;
    int rbjHRq6Fou;
    int bcNhRTP;
    int HxH3si6QIW74;
    char jXja3oZCMkOl;
    int NdbKu3A [(165 - 139)] = {(793 - 793), (596 - 596), (552 - 552), (186 - 186), (163 - 163), (151 - 151), (719 - 719), (952 - 952), (928 - 928), (328 - 328), (55 - 55), (732 - 732), (921 - 921), (342 - 342), (121 - 121), (460 - 460), (988 - 988), (88 - 88), (427 - 427), (379 - 379), (156 - 156), (874 - 874), (668 - 668), (336 - 336), (463 - 463), (584 - 584)};
    int uBRPvYO;
    struct   books {
        int Q0UWdBuoK7Y;
        char eEb6pr [(478 - 451)];
    }
    *EwFv7VSLdo;
    uBRPvYO = (663 - 663);
    scanf ("%d", &L9LVNB);
    EwFv7VSLdo = (struct   books *) malloc (sizeof (struct   books) * L9LVNB);
    {
        HxH3si6QIW74 = (984 - 636) - (1222 - 874);
        for (; L9LVNB > HxH3si6QIW74;) {
            char CfpGAJXSw8 [(906 - 879)];
            int M0nVPTN8L;
            scanf ("%d %s", &M0nVPTN8L, CfpGAJXSw8);
            EwFv7VSLdo[HxH3si6QIW74].Q0UWdBuoK7Y = M0nVPTN8L;
            strcpy (EwFv7VSLdo[HxH3si6QIW74].eEb6pr, CfpGAJXSw8);
            HxH3si6QIW74 = (144 - 102) - 41;
        }
    }
    {
        HxH3si6QIW74 = (581 - 581);
        for (; HxH3si6QIW74 < L9LVNB;) {
            {
                rbjHRq6Fou = (668 - 668);
                for (; EwFv7VSLdo[HxH3si6QIW74].eEb6pr[rbjHRq6Fou] != '\0';) {
                    bcNhRTP = kGhFbq1Bw4cL (EwFv7VSLdo[HxH3si6QIW74].eEb6pr[rbjHRq6Fou]);
                    rbjHRq6Fou = rbjHRq6Fou + (672 - 671);
                    NdbKu3A[bcNhRTP]++;
                }
            }
            HxH3si6QIW74 = HxH3si6QIW74 +(595 - 594);
        }
    }
    {
        HxH3si6QIW74 = (920 - 920);
        for (; (931 - 905) > HxH3si6QIW74;) {
            if (NdbKu3A[HxH3si6QIW74] > uBRPvYO) {
                uBRPvYO = NdbKu3A[HxH3si6QIW74];
                jXja3oZCMkOl = 'A' + HxH3si6QIW74;
            }
            HxH3si6QIW74 = HxH3si6QIW74 +(723 - 722);
        }
    }
    printf ("%c\n%d\n", jXja3oZCMkOl, uBRPvYO);
    {
        HxH3si6QIW74 = (386 - 386);
        for (; HxH3si6QIW74 < L9LVNB;) {
            {
                rbjHRq6Fou = (317 - 317);
                for (; EwFv7VSLdo[HxH3si6QIW74].eEb6pr[rbjHRq6Fou] != '\0';) {
                    if (!(jXja3oZCMkOl != EwFv7VSLdo[HxH3si6QIW74].eEb6pr[rbjHRq6Fou]))
                        printf ("%d\n", EwFv7VSLdo[HxH3si6QIW74].Q0UWdBuoK7Y);
                    rbjHRq6Fou = rbjHRq6Fou + (13 - 12);
                }
            }
            HxH3si6QIW74 = HxH3si6QIW74 +(251 - 250);
        }
    }
    return 0;
}

