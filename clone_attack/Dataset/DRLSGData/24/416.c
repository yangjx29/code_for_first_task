void  main () {
    char OEfIRsto [(746 - 646)];
    gets (OEfIRsto);
    int qsjnAC;
    int ejswXhBqHz;
    int Fre9Md35nFH [(875 - 775)];
    int sum;
    int e [(426 - 326)];
    char c [(681 - 581)] [(682 - 582)];
    int M0vcSa8QKRE [(562 - 462)];
    int k;
    int temp;
    int i;
    int gxWuA4Z;
    int mid;
    qsjnAC = strlen (OEfIRsto);
    ejswXhBqHz = (888 - 888);
    {
        e[(435 - 434)] = (729 - 729);
        i = (755 - 754);
        k = (410 - 410);
        for (; i < qsjnAC;) {
            for (gxWuA4Z = (916 - 915);; gxWuA4Z++, k = k + (103 - 102)) {
                if (OEfIRsto[k] != (292 - 260) && OEfIRsto[k] != '\0') {
                    c[i][gxWuA4Z] = OEfIRsto[k];
                }
                else if (!((858 - 826) != OEfIRsto[k])) {
                    Fre9Md35nFH[i] = gxWuA4Z - (113 - 112);
                    break;
                }
                else {
                    ejswXhBqHz = (229 - 228);
                    Fre9Md35nFH[i] = gxWuA4Z - (147 - 146);
                    break;
                }
            }
            if (!((577 - 576) != ejswXhBqHz))
                break;
            k = k + (531 - 530);
            if (i != (921 - 920))
                e[i] = e[i - (182 - 181)] + Fre9Md35nFH[i - (886 - 885)] + (824 - 823);
            i = i + (138 - 137);
        }
    }
    sum = (557 - 557);
    sum = i;
    {
        i = (278 - 277);
        for (; sum >= i;) {
            M0vcSa8QKRE[i] = i;
            i = i + (934 - 933);
        }
    }
    for (i = (897 - 896); sum > i; i = i + (16 - 15)) {
        if (Fre9Md35nFH[i + (196 - 195)] <= Fre9Md35nFH[i]) {
            mid = Fre9Md35nFH[i];
            Fre9Md35nFH[i] = Fre9Md35nFH[i + (968 - 967)];
            Fre9Md35nFH[i + (731 - 730)] = mid;
            temp = M0vcSa8QKRE[i];
            M0vcSa8QKRE[i] = M0vcSa8QKRE[i + (102 - 101)];
            M0vcSa8QKRE[i + (22 - 21)] = temp;
        }
    }
    i = M0vcSa8QKRE[sum];
    {
        k = i;
        for (; e[i] + Fre9Md35nFH[sum] - (782 - 781) >= k;) {
            printf ("%c", OEfIRsto[k]);
            k++;
        }
    }
    for (i = sum; i > (306 - 306); i--) {
        if (Fre9Md35nFH[i] < Fre9Md35nFH[i - (952 - 951)]) {
            mid = Fre9Md35nFH[i];
            Fre9Md35nFH[i] = Fre9Md35nFH[i - (328 - 327)];
            Fre9Md35nFH[i - (87 - 86)] = mid;
            temp = M0vcSa8QKRE[i];
            M0vcSa8QKRE[i] = M0vcSa8QKRE[i - (797 - 796)];
            M0vcSa8QKRE[i - (377 - 376)] = temp;
        }
    }
    i = M0vcSa8QKRE[(206 - 205)];
    k = e[i];
    printf ("%c", OEfIRsto[k]);
    for (k = e[i] + (417 - 416); k <= e[i] + Fre9Md35nFH[(125 - 124)] - 1; k++) {
        printf ("%c", OEfIRsto[k]);
    }
}

