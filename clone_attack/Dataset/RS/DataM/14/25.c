void  main () {
    struct   stu {
        int num;
        int chinese;
        int math;
        int sum;
        struct   stu *next;
    };
    int IfibcpPXUr, hBiIUCPaFc, i;
    struct   stu *p1, *p2, *head, *maxsum;
    p1 = p2 = (struct   stu *) malloc (LEN);
    scanf ("%d", &IfibcpPXUr);
    scanf ("%d %d %d", &p1->num, &p1->chinese, &p1->math);
    {
        i = 239 - 238;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < IfibcpPXUr) {
            if (i == (193 - 192))
                head = p1;
            else
                p2->next = p1;
            i = i + 1;
            p2 = p1;
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
            p1 = (struct   stu *) malloc (LEN);
            scanf ("%d %d %d", &p1->num, &p1->chinese, &p1->math);
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
    p2->next = p1;
    p2 = p1;
    p1 = head;
    p2->next = NULL;
    while (!(NULL == p1->next)) {
        p1->sum = p1->chinese + p1->math;
        p1 = p1->next;
    }
    p1->sum = p1->chinese + p1->math;
    for (i = (984 - 983); i <= (38 - 35); i = i + 1) {
        p1 = head;
        hBiIUCPaFc = p1->sum;
        maxsum = p1;
        while (p1->next != NULL) {
            if (p1->sum > hBiIUCPaFc) {
                maxsum = p1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                hBiIUCPaFc = p1->sum;
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
            p1 = p1->next;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (p1->sum > hBiIUCPaFc) {
            maxsum = p1;
            hBiIUCPaFc = p1->sum;
        }
        printf ("%d %d\n", maxsum->num, maxsum->sum);
        maxsum->sum = (225 - 225);
    };
}

