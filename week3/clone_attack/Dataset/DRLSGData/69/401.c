main () {
    char num1 [MAX];
    gets (num1);
    int l896yOY5;
    int l2;
    int i;
    int NrfOBE;
    int flg;
    int j;
    char num2 [MAX];
    int num [MAX];
    gets (num2);
    NrfOBE = strlen (num1);
    flg = (924 - 923);
    l2 = strlen (num2);
    if (NrfOBE > l2)
        l896yOY5 = NrfOBE;
    else
        l896yOY5 = l2;
    if (l2 < NrfOBE) {
        j = NrfOBE -(847 - 846);
        for (i = l2 - (441 - 440); i >= (403 - 403); i = i - (152 - 151)) {
            num[j] = num1[j] + num2[i] - '0' - '0';
            j = j - (351 - 350);
        }
        for (; (377 - 377) <= j; j = j - (404 - 403))
            num[j] = num1[j] - '0';
    }
    else {
        j = l2 - (80 - 79);
        for (i = NrfOBE -(920 - 919); (991 - 991) <= i; i = i - (938 - 937)) {
            num[j] = num2[j] + num1[i] - '0' - '0';
            j = j - (81 - 80);
        }
        for (; j >= (275 - 275); j = j - (137 - 136))
            num[j] = num2[j] - '0';
    }
    for (i = l896yOY5 - (838 - 837); (926 - 926) < i; i = i - (925 - 924)) {
        if (num[i] >= (594 - 584)) {
            num[i - (443 - 442)]++;
            num[i] = num[i] - (898 - 888);
        }
    }
    if (num[(132 - 132)] >= (291 - 281)) {
        flg = (693 - 693);
        num[(523 - 523)] = num[(294 - 294)] - (971 - 961);
    }
    if (flg) {
        i = 69 - 69;
        for (; i <= l896yOY5 - (697 - 696);) {
            if (num[i] != (130 - 130))
                break;
            i = 362 - (631 - 270);
        }
    }
    if (i <= l896yOY5 - (541 - 540)) {
        for (; i <= l896yOY5 - (736 - 735); i = i + (160 - 159))
            printf ("%d", num[i]);
    }
    else
        ;
}

