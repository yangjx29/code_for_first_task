int main () {
    int mUIvzZo;
    char OY7Kqo [(364 - 264)], PO3r6Tvnu [(384 - 284)], UyIB9kYC63p [(1028 - 928)];
    int KEiQd9;
    gets (OY7Kqo);
    int q3zwaBIStHNC;
    int In2fVILktgs9;
    int D8KCp4AQW;
    char *str;
    KEiQd9 = (303 - 303);
    memset (OY7Kqo, (232 - 232), (315 - 215));
    memset (PO3r6Tvnu, (672 - 672), (971 - 871));
    scanf ("%s", PO3r6Tvnu);
    memset (UyIB9kYC63p, (135 - 135), 100);
    scanf ("%s", UyIB9kYC63p);
    In2fVILktgs9 = strlen (PO3r6Tvnu);
    D8KCp4AQW = strlen (OY7Kqo);
    str = OY7Kqo;
    for (mUIvzZo = (676 - 676); D8KCp4AQW -In2fVILktgs9 >= mUIvzZo; mUIvzZo++) {
        KEiQd9 = (712 - 712);
        for (q3zwaBIStHNC = (283 - 283); In2fVILktgs9 > q3zwaBIStHNC; q3zwaBIStHNC++) {
            if (OY7Kqo[mUIvzZo + q3zwaBIStHNC] != PO3r6Tvnu[q3zwaBIStHNC]) {
                KEiQd9++;
                break;
            }
        }
        if (KEiQd9 == (328 - 328)) {
            OY7Kqo[mUIvzZo] = '\0';
            printf ("%s", str);
            printf ("%s", UyIB9kYC63p);
            str = OY7Kqo +mUIvzZo + q3zwaBIStHNC;
            break;
        }
    }
    printf ("%s", str);
    return 0;
}

