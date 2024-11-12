struct   stu {
    char OZio7Rr39fYH [20];
    int chengji;
    int T4ce5IE;
    char ganbu [(156 - 155)];
    char xibu [(68 - 67)];
    int ZtHcMQBOv92;
    int scholarship;
    struct   stu *next;
};
struct   stu *daLyZr (void ) {
    struct   stu *head;
    int Vxzab5uEGX, n;
    struct   stu *iXivxNp, *p2;
    scanf ("%d", &n);
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
    iXivxNp = p2 = (struct   stu *) malloc (LEN);
    head = NULL;
    for (Vxzab5uEGX = (632 - 632); Vxzab5uEGX < n; Vxzab5uEGX++) {
        scanf ("%s %d %d %s %s %d", iXivxNp->OZio7Rr39fYH, &iXivxNp->chengji, &iXivxNp->T4ce5IE, iXivxNp->ganbu, iXivxNp->xibu, &iXivxNp->ZtHcMQBOv92);
        if (Vxzab5uEGX == (313 - 313))
            head = iXivxNp;
        else
            p2 = iXivxNp;
        if (Vxzab5uEGX != (n - 1))
            iXivxNp = p2->next = (struct   stu *) malloc (LEN);
        else {
            p2->next = NULL;
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
    return (head);
}

struct   stu *pjUiQgMRH0 (struct   stu *head) {
    struct   stu *iXivxNp, *p2, *IoLdjv, *p4;
    int k, YqHCwLTysE = (136 - 136), GPMUqgJ0Z = 0;
    {
        p2 = head;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (p2 != NULL) {
            p2->scholarship = 0;
            p2 = p2->next;
        };
    }
    for (iXivxNp = head; iXivxNp != NULL; iXivxNp = iXivxNp->next) {
        if ((iXivxNp->chengji > 80) && (1 <= iXivxNp->ZtHcMQBOv92))
            iXivxNp->scholarship = iXivxNp->scholarship + 8000;
        if ((iXivxNp->chengji > 85) && (iXivxNp->T4ce5IE > 80))
            iXivxNp->scholarship = iXivxNp->scholarship + (4880 - 880);
        if (iXivxNp->chengji > 90)
            iXivxNp->scholarship = iXivxNp->scholarship + 2000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if ((iXivxNp->chengji > 85) && (iXivxNp->xibu[0] == 'Y'))
            iXivxNp->scholarship = iXivxNp->scholarship + (1407 - 407);
        if ((iXivxNp->T4ce5IE > 80) && (iXivxNp->ganbu[0] == 'Y'))
            iXivxNp->scholarship = iXivxNp->scholarship + 850;
    }
    {
        IoLdjv = head;
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
        while (IoLdjv != NULL) {
            k = 0;
            for (p4 = head; p4 != NULL; p4 = p4->next) {
                if (IoLdjv->scholarship < p4->scholarship)
                    k++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (k == 0) {
                printf ("%s\n%d\n", IoLdjv->OZio7Rr39fYH, IoLdjv->scholarship);
                break;
            }
            IoLdjv = IoLdjv->next;
        };
    }
    for (iXivxNp = head; iXivxNp != NULL; iXivxNp = iXivxNp->next) {
        YqHCwLTysE = YqHCwLTysE +iXivxNp->scholarship;
    }
    printf ("%d\n", YqHCwLTysE);
    return head;
}

void  main () {
    struct   stu *a;
    struct   stu *wiJZT7Q;
    a = daLyZr ();
    wiJZT7Q = pjUiQgMRH0 (a);
}

