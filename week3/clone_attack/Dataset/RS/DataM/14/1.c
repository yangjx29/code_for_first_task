struct   stu {
    int num;
    int ch;
    int math;
    struct   stu *FO1h326jp;
};
void  main () {
    struct   stu *p;
    struct   stu *p1, *p2, *head;
    int m;
    int max;
    int max2;
    int ieo8P2O;
    int no;
    int no2;
    int no3;
    int n;
    m = (434 - 434);
    max = (391 - 391);
    max2 = (460 - 460);
    ieo8P2O = (982 - 982);
    no = (482 - 482);
    no2 = 0;
    no3 = 0;
    scanf ("%d", &n);
    p1 = (struct   stu *) malloc (LEN);
    scanf ("%d%d%d", &p1->num, &p1->ch, &p1->math);
    head = NULL;
    for (; n - (764 - 763);) {
        m = m + (672 - 671);
        if (m == (225 - 224))
            head = p1;
        else
            p2->FO1h326jp = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%d%d%d", &p1->num, &p1->ch, &p1->math);
        n = n - 1;
    }
    p = head;
    p2->FO1h326jp = NULL;
    while (p) {
        p->ch = p->math + p->ch;
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
        p = p->FO1h326jp;
    }
    p = head;
    for (; p;) {
        if (p->ch > max) {
            max = p->ch;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            no = p->num;
        }
        p = p->FO1h326jp;
    }
    printf ("%d %d\n", no, max);
    p = head;
    for (; p;) {
        if (max >= p->ch && p->ch > max2 && p->num != no) {
            max2 = p->ch;
            no2 = p->num;
        }
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
        p = p->FO1h326jp;
    }
    printf ("%d %d\n", no2, max2);
    p = head;
    for (; p;) {
        if (p->ch <= max2 && p->ch > ieo8P2O && p->num != no && p->num != no2) {
            ieo8P2O = p->ch;
            no3 = p->num;
        }
        p = p->FO1h326jp;
    }
    printf ("%d %d", no3, ieo8P2O);
}

