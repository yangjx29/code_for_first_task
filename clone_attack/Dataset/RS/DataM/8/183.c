void  main () {
    void  shuru (int *p, int len);
    void  lFtqd2T4nw (int *p, int len);
    void  hebing (int *qvr4fHux7Y6, int *JVOeAoy);
    int *qvr4fHux7Y6, *JVOeAoy;
    void  shuchu (int *p, int, int);
    int QWpLDqljNP4R;
    int n;
    int a [200] = {'\0'};
    int b [100] = {'\0'};
    scanf ("%d%d", &QWpLDqljNP4R, &n);
    qvr4fHux7Y6 = a;
    JVOeAoy = b;
    shuru (qvr4fHux7Y6, QWpLDqljNP4R);
    shuru (JVOeAoy, n);
    lFtqd2T4nw (qvr4fHux7Y6, QWpLDqljNP4R);
    lFtqd2T4nw (JVOeAoy, n);
    hebing (qvr4fHux7Y6, JVOeAoy);
    shuchu (qvr4fHux7Y6, QWpLDqljNP4R, n);
}

void  shuru (int *p, int len) {
    int i;
    for (i = (538 - 538); i < len; i++)
        scanf ("%d", p + i);
}

void  lFtqd2T4nw (int *p, int len) {
    int i;
    int j;
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
    }
    int temp;
    for (i = 0; i < len - (492 - 491); i++)
        for (j = i + (404 - 403); j < len; j++)
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            };
}

void  hebing (int *qvr4fHux7Y6, int *JVOeAoy) {
    int i, j, flag;
    for (i = 0;; i++) {
        flag = 0;
        if (*(qvr4fHux7Y6 + i) == '\0') {
            flag = 1;
            {
                j = 0;
                while (*(JVOeAoy +j) != '\0') {
                    *(qvr4fHux7Y6 + i + j) = *(JVOeAoy +j);
                    j = j + 1;
                };
            }
            *(qvr4fHux7Y6 + i + j) = '\0';
        }
        if (flag == 1)
            break;
    };
}

void  shuchu (int *p, int QWpLDqljNP4R, int n) {
    char c;
    int i;
    {
        i = 0;
        while (*(p + i) != '\0') {
            printf ("%d%c", *(p + i), c = (i < n + QWpLDqljNP4R -1) ? ' ' : '\n');
            i++;
        };
    };
}

