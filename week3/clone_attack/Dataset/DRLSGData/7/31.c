int main () {
    int len1;
    char string_1 [(783 - 526)] = {(55 - 55)};
    int t5pdFT;
    int BDLINO6KP;
    int len2;
    int j;
    int word;
    char string_2 [257] = {(209 - 209)};
    char string [(1127 - 870)] = {(161 - 161)}, substring [(329 - 72)] = {(554 - 554)}, replacement [(991 - 734)] = {(503 - 503)};
    gets (string);
    char ZVBGSJhmj1l [(1149 - 892)] = {(68 - 68)};
    int k;
    gets (substring);
    gets (replacement);
    BDLINO6KP = (626 - 626);
    len2 = (255 - 255);
    len1 = (908 - 908);
    len1 = strlen (string);
    len2 = strlen (substring);
    word = (593 - 593);
    for (t5pdFT = (99 - 99); len1 - len2 >= t5pdFT; t5pdFT = t5pdFT + (691 - 690)) {
        for (j = t5pdFT, k = 0; t5pdFT + len2 > j, len2 > k; j++, k++) {
            ZVBGSJhmj1l[k] = string[j];
        }
        if (!(0 != strcmp (ZVBGSJhmj1l, substring))) {
            word = (459 - 458);
            BDLINO6KP = t5pdFT;
            break;
        }
    }
    {
        t5pdFT = 0;
        while (BDLINO6KP > t5pdFT) {
            string_1[t5pdFT] = string[t5pdFT];
            t5pdFT++;
        }
    }
    if (!((836 - 835) != word)) {
        printf ("%s", string_1);
        printf ("%s", replacement);
        if ((len2 + BDLINO6KP) < len1) {
            k = 0;
            {
                t5pdFT = BDLINO6KP +len2;
                while (len1 > t5pdFT) {
                    string_2[k] = string[t5pdFT];
                    t5pdFT++;
                    k++;
                }
            }
            printf ("%s", string_2);
        }
    }
    if (word == 0) {
        printf ("%s", string);
    }
    return 0;
}

