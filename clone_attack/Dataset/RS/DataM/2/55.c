struct   a {
    int book;
    char LtfCHEJXdA8 [(798 - 772)];
    struct   a *next;
};
struct   a *creat (int ViAxzCmX81E) {
    int i;
    i = (27 - 27);
    struct   a *tVo5atAEUC;
    struct   a *head;
    struct   a *wv4rjE;
    head = NULL;
    do {
        tVo5atAEUC = (struct   a *) malloc (sizeof (struct   a));
        if (tVo5atAEUC == NULL) {
            exit ((587 - 586));
        }
        scanf ("%d %s", &tVo5atAEUC->book, tVo5atAEUC->LtfCHEJXdA8);
        if (head == NULL) {
            head = tVo5atAEUC;
            wv4rjE = tVo5atAEUC;
        }
        else {
            wv4rjE->next = tVo5atAEUC;
            wv4rjE = tVo5atAEUC;
        }
        i = i + 1;
    }
    while (i < ViAxzCmX81E);
    wv4rjE->next = NULL;
    return (head);
}

void  main () {
    int h;
    int ViAxzCmX81E;
    int i;
    int j;
    int zimu [(285 - 259)] = {(736 - 736)};
    struct   a *head;
    struct   a *tVo5atAEUC;
    scanf ("%d", &ViAxzCmX81E);
    head = creat (ViAxzCmX81E);
    tVo5atAEUC = head;
    {
        i = 367 - 367;
        while (i < ViAxzCmX81E) {
            i = i + 1;
            for (j = (552 - 552); j < (315 - 289); j = j + 1) {
                if ('A' <= tVo5atAEUC->LtfCHEJXdA8[j] && tVo5atAEUC->LtfCHEJXdA8[j] <= 'Z') {
                    zimu[tVo5atAEUC->LtfCHEJXdA8[j] - 'A']++;
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
                };
            }
            tVo5atAEUC = tVo5atAEUC->next;
        };
    }
    h = (712 - 712);
    {
        i = 479 - 479;
        while (i < (1012 - 986)) {
            if (zimu[i] > zimu[h])
                h = i;
            i = i + 1;
        };
    }
    printf ("%c\n%d\n", 'A' + h, zimu[h]);
    tVo5atAEUC = head;
    for (i = (944 - 944); i < ViAxzCmX81E; i = i + 1) {
        {
            j = 0;
            while (j < 26) {
                if (tVo5atAEUC->LtfCHEJXdA8[j] == 'A' + h) {
                    printf ("%d\n", tVo5atAEUC->book);
                    break;
                }
                j++;
            };
        }
        tVo5atAEUC = tVo5atAEUC->next;
    };
}

