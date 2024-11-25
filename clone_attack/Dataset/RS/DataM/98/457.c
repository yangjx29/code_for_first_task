void  oSslUTBQNIqD (char s [], int *n, int *uJYw0vMSulD) {
    char *DFg6iSIu;
    char *QoA4CbEj9le;
    char word [40];
    int KTboj58fIFW;
    KTboj58fIFW = 0;
    for (DFg6iSIu = s + *n, QoA4CbEj9le = word; !(' ' == *DFg6iSIu) && !('\0' == *DFg6iSIu); DFg6iSIu = DFg6iSIu +1, QoA4CbEj9le = QoA4CbEj9le +1) {
        KTboj58fIFW = KTboj58fIFW +1;
        *QoA4CbEj9le = *DFg6iSIu;
    }
    *QoA4CbEj9le = '\0';
    if ((874 - 794) - *uJYw0vMSulD + 1 > KTboj58fIFW) {
        if (!(1 == *uJYw0vMSulD)) {
        }
        printf ("%s", word);
        *n = *n + KTboj58fIFW +1;
        *uJYw0vMSulD = *uJYw0vMSulD + KTboj58fIFW +1;
        if (*uJYw0vMSulD > 80) {
            *uJYw0vMSulD = 1;
            printf ("\n");
        };
    }
    else {
        if (KTboj58fIFW == 80 - *uJYw0vMSulD + 1) {
            printf ("%s\n", word);
            *n = *n + KTboj58fIFW +1;
            *uJYw0vMSulD = 1;
        }
        else {
            printf ("\n%s", word);
            *n = *n + KTboj58fIFW +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            *uJYw0vMSulD = KTboj58fIFW +2;
        };
    };
}

int main () {
    void  oSslUTBQNIqD (char s [], int *n, int *uJYw0vMSulD);
    int HXMSHYJDx4C;
    int line;
    int n;
    int i;
    HXMSHYJDx4C = 0;
    line = 1;
    int *dLNvZKPWf = &HXMSHYJDx4C;
    int *current = &line;
    char swvVnlr [2000];
    char g413iGb;
    gets (swvVnlr);
    scanf ("%d%c", &n, &g413iGb);
    for (i = 1; i <= n; i = i + 1) {
        oSslUTBQNIqD (swvVnlr, dLNvZKPWf, current);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    return 0;
}

