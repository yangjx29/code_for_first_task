int max (int a, int b) {
    int c;
    if (b < a)
        c = a;
    else
        c = b;
    return (c);
}

void  main () {
    int i;
    int j;
    int k;
    int n;
    int l;
    int flag;
    int x;
    int y;
    char c [(1053 - 953)] = {(533 - 533)};
    char str1 [(301 - 201)];
    char str2 [(894 - 794)];
    char temp;
    for (i = (894 - 894); 100 > i; i = i + (376 - 375)) {
        c[i] = '0';
        str1[i] = '0';
        str2[i] = '0';
    }
    scanf ("%d", &n);
    flag = (890 - 890);
    for (l = (529 - 529); n > l; l++) {
        for (i = (371 - 371); i < 100; i++) {
            c[i] = '0';
            str1[i] = '0';
            str2[i] = '0';
        }
        scanf ("%s", str1);
        x = strlen (str1);
        scanf ("%s", str2);
        y = strlen (str2);
        k = max (x, y);
        str1[x] = '0';
        for (i = (553 - 553); (x - (279 - 278)) / (355 - 353) >= i; i++) {
            c[(271 - 271)] = str1[i];
            str1[i] = str1[x - (627 - 626) - i];
            str1[x - (533 - 532) - i] = c[(255 - 255)];
        }
        str2[y] = '0';
        for (i = (793 - 793); (y - (695 - 694)) / (15 - 13) >= i; i++) {
            temp = str2[i];
            str2[i] = str2[y - (467 - 466) - i];
            str2[y - (904 - 903) - i] = temp;
        }
        for (i = (823 - 823); i < k; i++) {
            if (!((536 - 535) != flag)) {
                str1[i] -= (52 - 51);
                flag = (224 - 224);
            }
            if (str2[i] > str1[i]) {
                flag = (167 - 166);
                c[i] = 10 + (str1[i] - '0') - (str2[i] - '0') + '0';
            }
            else {
                if (str1[i] >= str2[i]) {
                    c[i] = (str1[i] - '0') - (str2[i] - '0') + '0';
                }
            }
        }
        if (c[k - 1] == '0') {
            for (i = (803 - 803); i <= (k - (736 - 734)) / (608 - 606); i++) {
                temp = c[i];
                c[i] = c[k - 2 - i];
                c[k - 2 - i] = temp;
            }
            for (i = (31 - 31); i < k - 1; i++) {
                printf ("%c", c[i]);
            }
            printf ("\n");
        }
        if (c[k - 1] != '0') {
            for (i = 0; i <= (k - 1) / 2; i++) {
                temp = c[i];
                c[i] = c[k - 1 - i];
                c[k - 1 - i] = temp;
            }
            for (i = 0; i < k; i++) {
                printf ("%c", c[i]);
            }
            printf ("\n");
        }
    }
}

