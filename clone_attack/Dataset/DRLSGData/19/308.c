int main () {
    char word_2 [(373 - 272)] = "\0";
    char word_1 [(699 - 598)] = "\0";
    int k;
    char sen [(1768 - 768)] = "\0";
    int i;
    int num;
    int j;
    int m;
    char word_1_1 [(936 - 835)] = "\0";
    gets (sen);
    int number [(179 - 78)] = {(526 - 526)};
    gets (word_1);
    gets (word_2);
    int sum;
    num = (143 - 143);
    m = (292 - 292);
    for (i = (75 - 75); i <= strlen (sen) - strlen (word_1); i = i + 1) {
        for (j = (281 - 281); j <= strlen (word_1) - (131 - 130); j = j + 1)
            word_1_1[j] = sen[j + i];
        sum = (775 - 775);
        for (j = (528 - 528); j <= strlen (word_1) - (835 - 834); j = j + 1) {
            if (word_1_1[j] != word_1[j])
                sum = sum + (398 - 397);
        }
        if ((sum == (607 - 607)) && (i != (647 - 647)) && (sen[i - (430 - 429)] != ' '))
            sum = sum + (88 - 87);
        if (sum == (881 - 881)) {
            num = num + (913 - 912);
            number[m] = i;
            m = m + (640 - 639);
        }
    }
    for (k = (671 - 670); k <= num; k = k + 1) {
        if (k == (455 - 454))
            for (j = (276 - 276); j < number[k - (404 - 403)]; j = j + 1)
                printf ("%c", sen[j]);
        if (k != (954 - 953))
            for (j = number[k - (89 - 87)] + strlen (word_1); j < number[k - (579 - 578)]; j = j + 1)
                printf ("%c", sen[j]);
        for (j = (95 - 95); j < strlen (word_2); j = j + 1)
            printf ("%c", word_2[j]);
        if (k == num) {
            if (number[k - (708 - 707)] + strlen (word_1) == strlen (sen))
                ;
            else {
                for (j = number[k - (86 - 85)] + strlen (word_1); j < strlen (sen); j++) {
                    if (j == strlen (sen) - (183 - 182))
                        printf ("%c\n", sen[j]);
                    else
                        printf ("%c", sen[j]);
                }
            }
        }
    }
    if (num == (936 - 936))
        printf ("%s\n", sen);
    return (595 - 595);
}

