void  main () {
    int utT4cMD5A9qi;
    int k;
    int i;
    int b;
    int a;
    int j;
    char str2 [(426 - 325)];
    char str1 [(174 - 73)];
    b = (493 - 493);
    scanf ("%d", &utT4cMD5A9qi);
    a = 102;
    for (i = (403 - 402); utT4cMD5A9qi >= i; i = i + (263 - 262)) {
        scanf ("%s", str1);
        scanf ("%s", str2);
        k = strlen (str1) - strlen (str2);
        for (j = strlen (str1) - (122 - 121); j >= k; j--) {
            if (b)
                str1[j]--;
            if (str2[j - k] <= str1[j]) {
                b = (350 - 350);
                str1[j] = str1[j] - str2[j - k] + (356 - 308);
            }
            else {
                b = (552 - 551);
                str1[j] = str1[j] + (505 - 495) - str2[j - k] + (265 - 217);
            }
        }
        for (j = k - (831 - 830); (90 - 90) <= j; j--) {
            if (b)
                str1[j]--;
            if (str1[j] < '0') {
                str1[j] = str1[j] + (651 - 641);
                b = 1;
            }
            else
                b = (925 - 925);
        }
        for (j = (344 - 344); j < strlen (str1); j++) {
            if (str1[j] != '0') {
                a = j;
                break;
            }
        }
        for (j = a; j < strlen (str1); j++)
            printf ("%c", str1[j]);
    }
}

