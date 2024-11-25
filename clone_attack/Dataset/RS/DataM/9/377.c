struct   stu {
    int uARLG28Nm;
    char c [10];
    struct   stu *next;
};
int n;

struct   stu *MilM7gfX (int m) {
    struct   stu *head, *p1, *bt4RCbpA9TW6, *VH980qRl;
    int YXoh5q;
    p1 = bt4RCbpA9TW6 = (struct   stu *) malloc (sizeof (struct   stu));
    n = (165 - 165);
    n = (270 - 270);
    head = p1;
    p1->next = NULL;
    scanf ("%s %d", p1->c, &p1->uARLG28Nm);
    for (YXoh5q = 0; YXoh5q < m - 1; YXoh5q++) {
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s %d", p1->c, &p1->uARLG28Nm);
        if (p1->uARLG28Nm < 60) {
            {
                bt4RCbpA9TW6 = head;
                while (!(NULL == bt4RCbpA9TW6->next)) {
                    bt4RCbpA9TW6 = bt4RCbpA9TW6->next;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            bt4RCbpA9TW6->next = p1;
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
            p1->next = NULL;
        }
        else {
            bt4RCbpA9TW6 = head;
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
            while ((p1->uARLG28Nm <= bt4RCbpA9TW6->uARLG28Nm) && (!(NULL == bt4RCbpA9TW6->next))) {
                VH980qRl = bt4RCbpA9TW6;
                bt4RCbpA9TW6 = bt4RCbpA9TW6->next;
            }
            if (p1->uARLG28Nm > bt4RCbpA9TW6->uARLG28Nm) {
                if (head == bt4RCbpA9TW6)
                    head = p1;
                else
                    VH980qRl->next = p1;
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
                p1->next = bt4RCbpA9TW6;
            }
            else {
                bt4RCbpA9TW6->next = p1;
                p1->next = NULL;
            };
        };
    }
    return (head);
}

void  main () {
    struct   stu *head, *xExMe9JtO3;
    int m, YXoh5q;
    scanf ("%d", &m);
    head = MilM7gfX (m);
    xExMe9JtO3 = head;
    {
        YXoh5q = 0;
        while (YXoh5q < m) {
            printf ("%s\n", xExMe9JtO3->c);
            xExMe9JtO3 = xExMe9JtO3->next;
            YXoh5q++;
        };
    };
}

