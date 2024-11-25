struct   Stu {
    int StuNo;
    int Chinese;
    int math;
    int sum;
    struct   Stu *next;
};
void  main () {
    int MJTi3xMG, i, max1, max2, max3, n1, n2, n3;
    struct   Stu *p, *head, *cIs5pVq;
    n2 = 1;
    n1 = 1;
    scanf ("%d", &MJTi3xMG);
    head = cIs5pVq = NULL;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MJTi3xMG >= i) {
            i++;
            p = (struct   Stu *) malloc (len);
            scanf ("%d%d%d", &p->StuNo, &p->Chinese, &p->math);
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
            if (!(NULL != head))
                head = cIs5pVq = p;
            else {
                cIs5pVq->next = p;
                cIs5pVq = p;
            }
            p->sum = p->Chinese + p->math;
        };
    }
    max1 = head->sum;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (MJTi3xMG >= i) {
            if (!(1 != i))
                p = head;
            else
                p = p->next;
            if ((p->sum) > max1) {
                n1 = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                max1 = p->sum;
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
            i++;
        };
    }
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
    {
        i = 1;
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
        while (MJTi3xMG >= i) {
            if (!(1 != i))
                p = head;
            else
                p = p->next;
            if (i == n1)
                p->sum = 0;
            i++;
        };
    }
    max2 = head->sum;
    {
        i = 1;
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
        while (i <= MJTi3xMG) {
            if (i == 1)
                p = head;
            else
                p = p->next;
            if ((p->sum) > max2) {
                n2 = i;
                max2 = p->sum;
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= MJTi3xMG) {
            if (i == 1)
                p = head;
            else
                p = p->next;
            if (i == n2)
                p->sum = 0;
            i++;
        };
    }
    max3 = head->sum;
    n3 = 1;
    {
        i = 1;
        while (i <= MJTi3xMG) {
            if (i == 1)
                p = head;
            else
                p = p->next;
            if ((p->sum) > max3) {
                n3 = i;
                max3 = p->sum;
            }
            i++;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", n1, max1, n2, max2, n3, max3);
}

