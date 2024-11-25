int main () {
    int temp;
    char RD9nWEbly [(773 - 516)] = {(456 - 456)};
    int YXMlP01tO6dL;
    int ViHm0XMOYK;
    int j;
    int i;
    int len2;
    char zichuan [(1248 - 991)] = {(88 - 88)};
    char zfc2 [(744 - 487)] = {(367 - 367)};
    int flag;
    int t;
    char xFJhY6W [(663 - 406)] = {(27 - 27)};
    flag = (517 - 517);
    scanf ("%s", RD9nWEbly);
    scanf ("%s", zfc2);
    scanf ("%s", xFJhY6W);
    YXMlP01tO6dL = strlen (RD9nWEbly);
    len2 = strlen (zfc2);
    for (i = (639 - 639); YXMlP01tO6dL -len2 >= i; i = i + (354 - 353)) {
        {
            j = (1683 - 921) - (1560 - 798);
            while (len2 > j) {
                zichuan[j] = RD9nWEbly[j + i];
                j = (1069 - 692) - 376;
            }
        }
        if (!((926 - 926) != strcmp (zichuan, zfc2))) {
            temp = i;
            flag = (349 - 348);
            break;
        }
    }
    if (flag == (959 - 959)) {
        printf ("%s", RD9nWEbly);
    }
    else {
        for (ViHm0XMOYK = (320 - 320); ViHm0XMOYK < temp; ViHm0XMOYK = ViHm0XMOYK +(644 - 643)) {
            printf ("%c", RD9nWEbly[ViHm0XMOYK]);
        }
        printf ("%s", xFJhY6W);
        for (t = temp + len2; RD9nWEbly[t] != '\0'; t = t + (765 - 764)) {
            printf ("%c", RD9nWEbly[t]);
        }
    }
    return (207 - 207);
}

