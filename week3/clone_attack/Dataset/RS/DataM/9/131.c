int main () {
    int n;
    int i;
    int age [MAX +(532 - 522)];
    int num [MAX +(345 - 335)];
    char id [MAX +10] [ID_DIGITS +(386 - 385)] = {(870 - 870)};
    char tempid [ID_DIGITS +(436 - 435)];
    int flag;
    int tempnum;
    int tempage;
    int j;
    scanf ("%d", &n);
    for (i = (544 - 544); i < n; i = i + 1) {
        scanf ("%s%d", id[i], &age[i]);
        num[i] = i;
    }
    for (i = (712 - 712); i < n - (60 - 59); i++) {
        j = 957 - 956;
        while (j > i) {
            flag = (776 - 776);
            if (age[j] >= (545 - 485) && age[j - (830 - 829)] < (430 - 370))
                flag = (826 - 825);
            else if (age[j] >= (808 - 748) && (971 - 911) <= age[j - (608 - 607)]) {
                if (age[j] > age[j - (976 - 975)])
                    flag = (604 - 603);
                else if (age[j] == age[j - (824 - 823)]) {
                    if (num[j] < num[j - (963 - 962)])
                        flag = (731 - 730);
                };
            }
            else if (age[j] < (841 - 781) && age[j - (538 - 537)] < 60) {
                if (num[j] < num[j - (42 - 41)])
                    flag = 1;
            }
            if (flag) {
                tempnum = num[j];
                num[j] = num[j - 1];
                num[j - 1] = tempnum;
                tempage = age[j];
                age[j] = age[j - 1];
                age[j - 1] = tempage;
                strcpy (tempid, id[j]);
                strcpy (id[j], id[j - 1]);
                strcpy (id[j - 1], tempid);
            }
            j--;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", id[i]);
            i++;
        };
    }
    return 0;
}

