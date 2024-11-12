struct   student {
    char num [(532 - 522)];
    int chinese;
    int math;
    int sum;
    struct   student *next;
};
int LenATiL;

struct   student *creat (int LenATiL) {
    struct   student *head;
    struct   student *dTAviXuq;
    struct   student *p2;
    int dbEWHy;
    dbEWHy = LenATiL;
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
    dTAviXuq = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d", dTAviXuq->num, &dTAviXuq->chinese, &dTAviXuq->math);
    dTAviXuq->sum = dTAviXuq->chinese + dTAviXuq->math;
    head = NULL;
    while (LenATiL > 1) {
        if (LenATiL == dbEWHy)
            head = dTAviXuq;
        else
            p2->next = dTAviXuq;
        p2 = dTAviXuq;
        dTAviXuq = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %d %d", dTAviXuq->num, &dTAviXuq->chinese, &dTAviXuq->math);
        dTAviXuq->sum = dTAviXuq->chinese + dTAviXuq->math;
        LenATiL = LenATiL -1;
    }
    p2->next = NULL;
    return (head);
}

void  main () {
    int kbWSME8c;
    int sec_index;
    int thr_index;
    int LenATiL;
    int i;
    struct   student *YeuI5XF;
    struct   student *second;
    struct   student *vHl3byv;
    struct   student *head;
    struct   student *dTAviXuq;
    struct   student stu;
    scanf ("%d", &LenATiL);
    head = creat (LenATiL);
    YeuI5XF = head;
    second = head;
    vHl3byv = head;
    for (dTAviXuq = head; dTAviXuq->next != NULL; dTAviXuq = dTAviXuq->next) {
        if (dTAviXuq->sum > YeuI5XF->sum) {
            vHl3byv = second;
            second = YeuI5XF;
            YeuI5XF = dTAviXuq;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (dTAviXuq->sum > second->sum) {
                vHl3byv = second;
                second = dTAviXuq;
            }
            else {
                if (dTAviXuq->sum > vHl3byv->sum) {
                    vHl3byv = dTAviXuq;
                };
            };
        };
    }
    printf ("%s %d\n", YeuI5XF->num, YeuI5XF->sum);
    printf ("%s %d\n", second->num, second->sum);
    printf ("%s %d\n", vHl3byv->num, vHl3byv->sum);
}

