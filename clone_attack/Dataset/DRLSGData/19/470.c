int main () {
    int k;
    char y [(506 - 406)];
    int QV8nFCmM5;
    char zfc [(882 - 782)];
    gets (zfc);
    char in [(558 - 528)];
    int judge;
    char out [(335 - 305)];
    char x [(442 - 342)];
    int num [(218 - 118)];
    int gBGSLs7qF2e4;
    char E931SDdAKbhZ [(286 - 266)] [(382 - 282)];
    int kPBuvy;
    int lenall;
    scanf ("%s", in);
    kPBuvy = strlen (in);
    lenall = strlen (zfc);
    k = (296 - 295);
    judge = (75 - 74);
    num[(20 - 20)] = (328 - 328);
    {
        QV8nFCmM5 = 523 - 523;
        while (QV8nFCmM5 < lenall) {
            if (!(' ' != zfc[QV8nFCmM5])) {
                zfc[QV8nFCmM5] = (38 - 38);
                num[k] = QV8nFCmM5 +(391 - 390);
                k++;
            }
            QV8nFCmM5 = QV8nFCmM5 +1;
        }
    }
    {
        QV8nFCmM5 = 885 - 885;
        while (k > QV8nFCmM5) {
            strcpy (E931SDdAKbhZ[QV8nFCmM5], &zfc[num[QV8nFCmM5]]);
            QV8nFCmM5 = QV8nFCmM5 +1;
        }
    }
    gBGSLs7qF2e4 = (364 - 363);
    scanf ("%s", out);
    {
        QV8nFCmM5 = 824 - 824;
        while (QV8nFCmM5 < k) {
            if (!((219 - 219) != strcmp (&zfc[num[QV8nFCmM5]], in))) {
                strcpy (E931SDdAKbhZ[QV8nFCmM5], out);
            }
            QV8nFCmM5++;
        }
    }
    {
        QV8nFCmM5 = 798 - 798;
        while (QV8nFCmM5 < k - (85 - 84)) {
            printf ("%s ", E931SDdAKbhZ[QV8nFCmM5]);
            QV8nFCmM5++;
        }
    }
    printf ("%s", E931SDdAKbhZ[k - 1]);
    return (986 - 986);
}

