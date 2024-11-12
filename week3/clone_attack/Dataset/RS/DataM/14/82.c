struct   student {
    int kvwkqZdQ;
    int xQpgWe;
    int math;
    int CR9noicmqApW;
    struct   student *next;
};
int n, Zxrm6IdbfpOi;

void  main () {
    struct   student *j6Xksr3;
    int i, j;
    int m;
    struct   student *nCFtum1bpyQ;
    struct   student *QDQpoy0hc;
    struct   student *ioC0ikBIxr;
    struct   student *aHY4cINveQ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    m = (967 - 967);
    scanf ("%d", &n);
    nCFtum1bpyQ = QDQpoy0hc = (struct   student *) malloc (len);
    scanf ("%d %d %d", &nCFtum1bpyQ->kvwkqZdQ, &nCFtum1bpyQ->xQpgWe, &nCFtum1bpyQ->math);
    nCFtum1bpyQ->CR9noicmqApW = nCFtum1bpyQ->xQpgWe + nCFtum1bpyQ->math;
    j6Xksr3 = nCFtum1bpyQ;
    while (m < n - 1) {
        m = m + 1;
        nCFtum1bpyQ = (struct   student *) malloc (len);
        scanf ("%d %d %d", &nCFtum1bpyQ->kvwkqZdQ, &nCFtum1bpyQ->xQpgWe, &nCFtum1bpyQ->math);
        nCFtum1bpyQ->CR9noicmqApW = nCFtum1bpyQ->xQpgWe + nCFtum1bpyQ->math;
        QDQpoy0hc->next = nCFtum1bpyQ;
        QDQpoy0hc = nCFtum1bpyQ;
    }
    QDQpoy0hc->next = (885 - 885);
    {
        i = 0;
        while (i < 3) {
            ioC0ikBIxr = j6Xksr3;
            aHY4cINveQ = QDQpoy0hc = j6Xksr3;
            nCFtum1bpyQ = QDQpoy0hc;
            for (j = 0; j < n - i; j = j + 1) {
                if (nCFtum1bpyQ->CR9noicmqApW > ioC0ikBIxr->CR9noicmqApW) {
                    aHY4cINveQ = QDQpoy0hc;
                    ioC0ikBIxr = nCFtum1bpyQ;
                }
                QDQpoy0hc = nCFtum1bpyQ;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                nCFtum1bpyQ = QDQpoy0hc->next;
            }
            i = i + 1;
            nCFtum1bpyQ = QDQpoy0hc = j6Xksr3;
            printf ("%d %d\n", ioC0ikBIxr->kvwkqZdQ, ioC0ikBIxr->CR9noicmqApW);
            if (ioC0ikBIxr->kvwkqZdQ == j6Xksr3->kvwkqZdQ)
                j6Xksr3 = nCFtum1bpyQ->next;
            else
                aHY4cINveQ->next = ioC0ikBIxr->next;
        };
    };
}

