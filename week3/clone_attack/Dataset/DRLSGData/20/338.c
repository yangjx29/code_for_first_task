char gl7CD1r [(59 - 49)];

void  oZt7xm (char *Ed4VB7GOnPk, int hzM0dw) {
    int len;
    int i;
    len = strlen (Ed4VB7GOnPk);
    for (i = hzM0dw; len > i; i++) {
        gl7CD1r[i - hzM0dw] = Ed4VB7GOnPk[i];
        Ed4VB7GOnPk[i] = '\0';
    }
    gl7CD1r[len - hzM0dw] = '\0';
}

int main () {
    char max;
    int mUoIlRmP;
    char str1 [(373 - 363)];
    int i;
    char tT3nfuPC0H [(552 - 542)];
    int len;
    for (; cin >> str1 >> tT3nfuPC0H;) {
        max = (563 - 563);
        len = strlen (str1);
        for (i = (796 - 796); i < len; i++)
            if (str1[i] > max) {
                max = str1[i];
                mUoIlRmP = i;
            }
        oZt7xm (str1, mUoIlRmP + (148 - 147));
        strcat (str1, tT3nfuPC0H);
        strcat (str1, gl7CD1r);
        cout << str1 << endl;
    }
    return 0;
}

