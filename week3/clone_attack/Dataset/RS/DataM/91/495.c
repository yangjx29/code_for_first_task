int main () {
    char str [150];
    gets (str);
    char *p;
    char *LF0Yizk;
    p = str;
    for (; *(p + 1) != '\0';) {
        cout << (char) ((int) *p + (int) (*(p + 1)));
        p = p + 1;
    }
    LF0Yizk = str;
    if (*(p + 1) == '\0') {
        cout << (char) ((int) *p + (int) *LF0Yizk);
    }
    return 0;
}

