struct   student {
    long  num;
    int math;
    int pDmwWBnbx0o;
    struct   student *h6bR8uqa1;
};
long  stu_num;
struct   student *max1, *ylXpKT3GxzM, *MJlYeOtwj;

struct   student *creat (void ) {
    long  XWXYk0x9;
    struct   student *head, *VPZ3TG7LEA, *p2;
    XWXYk0x9 = 0;
    head = NULL;
    VPZ3TG7LEA = p2 = (struct   student *) malloc (LEN);
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
    scanf ("%ld%d%d", &VPZ3TG7LEA->num, &VPZ3TG7LEA->math, &VPZ3TG7LEA->pDmwWBnbx0o);
    while (stu_num - (426 - 425) > XWXYk0x9) {
        XWXYk0x9++;
        if (XWXYk0x9 == 1)
            head = VPZ3TG7LEA;
        else
            p2->h6bR8uqa1 = VPZ3TG7LEA;
        p2 = VPZ3TG7LEA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        VPZ3TG7LEA = (struct   student *) malloc (LEN);
        scanf ("%ld%d%d", &VPZ3TG7LEA->num, &VPZ3TG7LEA->math, &VPZ3TG7LEA->pDmwWBnbx0o);
    }
    p2->h6bR8uqa1 = VPZ3TG7LEA;
    VPZ3TG7LEA->h6bR8uqa1 = NULL;
    return (head);
}

void  CSAvyatgc (struct   student *head, long  stu_num) {
    struct   student *q1;
    q1 = head;
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
    max1 = head;
    for (; !(NULL == q1);)
        if ((max1->math + max1->pDmwWBnbx0o) < (q1->math + q1->pDmwWBnbx0o)) {
            max1 = q1;
            q1 = q1->h6bR8uqa1;
        }
        else
            q1 = q1->h6bR8uqa1;
    printf ("%ld %d\n", max1->num, max1->math + max1->pDmwWBnbx0o);
}

void  Max2 (struct   student *head, long  stu_num) {
    struct   student *q2;
    q2 = head;
    if (!(max1 == head))
        ylXpKT3GxzM = head;
    else
        ylXpKT3GxzM = q2->h6bR8uqa1;
    for (; q2 != NULL;)
        if ((q2->math + q2->pDmwWBnbx0o) > (ylXpKT3GxzM->math + ylXpKT3GxzM->pDmwWBnbx0o) && q2 != max1) {
            ylXpKT3GxzM = q2;
            q2 = q2->h6bR8uqa1;
        }
        else
            q2 = q2->h6bR8uqa1;
    printf ("%ld %d\n", ylXpKT3GxzM->num, ylXpKT3GxzM->math + ylXpKT3GxzM->pDmwWBnbx0o);
}

void  Max3 (struct   student *head, long  stu_num) {
    struct   student *nhGjSeJ41D;
    nhGjSeJ41D = head;
    for (; nhGjSeJ41D != NULL;)
        if (nhGjSeJ41D == max1 || nhGjSeJ41D == ylXpKT3GxzM)
            nhGjSeJ41D = nhGjSeJ41D->h6bR8uqa1;
        else {
            MJlYeOtwj = nhGjSeJ41D;
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
            break;
        }
    nhGjSeJ41D = head;
    for (; nhGjSeJ41D != NULL;)
        if ((MJlYeOtwj->math + MJlYeOtwj->pDmwWBnbx0o) < (nhGjSeJ41D->math + nhGjSeJ41D->pDmwWBnbx0o) && nhGjSeJ41D != max1 && nhGjSeJ41D != ylXpKT3GxzM) {
            MJlYeOtwj = nhGjSeJ41D;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            nhGjSeJ41D = nhGjSeJ41D->h6bR8uqa1;
        }
        else
            nhGjSeJ41D = nhGjSeJ41D->h6bR8uqa1;
    printf ("%ld %d\n", MJlYeOtwj->num, MJlYeOtwj->math + MJlYeOtwj->pDmwWBnbx0o);
}

void  main () {
    struct   student *head;
    head = creat ();
    scanf ("%ld", &stu_num);
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
    CSAvyatgc (head, stu_num);
    Max2 (head, stu_num);
    Max3 (head, stu_num);
}

