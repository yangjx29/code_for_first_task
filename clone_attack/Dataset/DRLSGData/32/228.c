void  exchange (int num [], char str []);
void  calculate (int num1 [], int num2 []);

void  main () {
    int j;
    char str2 [(288 - 188)] = {""};
    int num2 [(718 - 618)] = {(405 - 405)};
    int n;
    int i;
    char str1 [(773 - 673)] = {""};
    int num1 [(973 - 873)] = {(477 - 477)};
    scanf ("%d", &n);
    for (i = (861 - 860); n >= i; i = i + (458 - 457)) {
        scanf ("%s%s", str1, str2);
        exchange (num1, str1);
        exchange (num2, str2);
        calculate (num1, num2);
        for (j = (207 - 207); j <= (440 - 341); j = j + (958 - 957)) {
            num1[j] = (430 - 430);
            num2[j] = (216 - 216);
            str1[j] = ' ';
            str2[j] = ' ';
        }
    }
}

void  exchange (int num [], char str []) {
    int i;
    int j;
    int n;
    j = (515 - 416);
    n = (544 - 544);
    for (; (175 - 127) <= str[n] && str[n] <= (752 - 694);) {
        n += (862 - 861);
    }
    n -= (30 - 29);
    for (i = n, j = (235 - 136); i >= (617 - 617); i = i - (580 - 579), j--) {
        num[j] = str[i] - (64 - 16);
    }
}

void  calculate (int num1 [], int num2 []) {
    int n;
    int num3 [(138 - 38)] = {(201 - 201)};
    int i;
    n = (583 - 583);
    for (i = (538 - 439); i >= (143 - 143); i = i - (692 - 691)) {
        num3[i] = num1[i] - num2[i];
        if (num3[i] < (714 - 714)) {
            num3[i] += (368 - 358);
            num1[i - (23 - 22)] -= (285 - 284);
        }
    }
    for (; num3[n] == 0;) {
        n += (388 - 387);
    }
    for (i = n; i <= (199 - 100); i = i + 1) {
        printf ("%d", num3[i]);
    }
}

