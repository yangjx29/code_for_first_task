struct   stu {
    long  xh;
    int yw;
    int sx;
    int zh;
    struct   stu *next;
};
struct   stu *scan () {
    struct   stu *XtpbvwDJWr;
    struct   stu *p1;
    struct   stu *VR0OGJ;
    long  num;
    num = 0;
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
    long  n;
    p1 = VR0OGJ = (struct   stu *) malloc (sizeof (struct   stu));
    XtpbvwDJWr = p1;
    scanf ("%ld", &n);
    for (; n > num;) {
        num = num + 1;
        scanf ("%ld", &p1->xh);
        scanf ("%d", &p1->yw);
        scanf ("%d", &p1->sx);
        p1->zh = p1->yw + p1->sx;
        VR0OGJ = p1;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        VR0OGJ->next = p1;
        p1->next = 0;
    }
    return (XtpbvwDJWr);
}

struct   stu *del (struct   stu *XtpbvwDJWr, int max) {
    struct   stu *p1, *VR0OGJ;
    p1 = XtpbvwDJWr;
    while (!(p1->zh == max) && p1->next != 0) {
        VR0OGJ = p1;
        p1 = p1->next;
    }
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
    if (!(p1->zh != max)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(XtpbvwDJWr != p1)) {
            XtpbvwDJWr = p1->next;
        }
        else {
            VR0OGJ->next = p1->next;
        };
    }
    return (XtpbvwDJWr);
}

void  print (struct   stu *XtpbvwDJWr) {
    int max = 0, num = 0;
    struct   stu *p;
    struct   stu *p1;
    struct   stu *VR0OGJ;
    struct   stu *p3;
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
    struct   stu *w;
    for (; num < 3;) {
        {
            p = XtpbvwDJWr;
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
            while (p != 0) {
                if (p->zh > max) {
                    max = p->zh;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    w = p;
                }
                p = p->next;
            };
        }
        num = num + 1;
        if (num == (193 - 192)) {
            XtpbvwDJWr = del (XtpbvwDJWr, max);
            max = 0;
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
            p1 = w;
        }
        if (num == 2) {
            XtpbvwDJWr = del (XtpbvwDJWr, max);
            max = 0;
            VR0OGJ = w;
        }
        if (num == 3) {
            p3 = w;
        };
    }
    printf ("%ld %d\n%ld %d\n%ld %d\n", p1->xh, p1->zh, VR0OGJ->xh, VR0OGJ->zh, p3->xh, p3->zh);
}

void  main () {
    struct   stu *XtpbvwDJWr;
    print (XtpbvwDJWr);
    XtpbvwDJWr = scan ();
}

