void  main () {
    struct   student {
        int num;
        int yuwen;
        int fIx8u59AH;
        struct   student *next;
    };
    struct   student *head, *ppre, *p0, *p3;
    struct   student *p1, *p2;
    int i, n, j, max;
    head = p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d", &n);
    {
        i = 850 - 850;
        while (n > i) {
            scanf ("%d %d %d", &p1->num, &p1->yuwen, &p1->fIx8u59AH);
            p1 = (struct   student *) malloc (sizeof (struct   student));
            p2->next = p1;
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
            p2 = p1;
            i++;
        };
    }
    p2->next = NULL;
    {
        j = 0;
        while (j < (864 - 861)) {
            ppre = p1 = head;
            max = p1->yuwen + p1->fIx8u59AH;
            p1 = p1->next;
            for (i = 0; i < n - j; i++) {
                if ((p1->yuwen + p1->fIx8u59AH) > max) {
                    p3 = ppre;
                    max = p1->yuwen + p1->fIx8u59AH;
                    p0 = p1;
                }
                ppre = p1;
                p1 = p1->next;
            }
            j++;
            printf ("%d %d\n", p0->num, max);
            p3->next = p0->next;
        };
    };
}

