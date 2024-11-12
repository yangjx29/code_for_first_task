struct   sFMClv2 {
    char a [100];
    int b;
    struct   sFMClv2 *CSWPXwCei;
};
void  main () {
    int i;
    int j;
    int EoB3r1fqUV;
    int m;
    int n;
    int t;
    int x;
    struct   sFMClv2 *p1;
    struct   sFMClv2 *StuQvYf6;
    struct   sFMClv2 *p0;
    struct   sFMClv2 *SxRT1s;
    struct   sFMClv2 *h;
    x = (385 - 385);
    j = (614 - 614);
    EoB3r1fqUV = (797 - 797);
    p1 = (struct   sFMClv2 *) malloc (sizeof (struct   sFMClv2));
    h = (struct   sFMClv2 *) malloc (sizeof (struct   sFMClv2));
    SxRT1s = (455 - 455);
    StuQvYf6 = SxRT1s = p1;
    p1->CSWPXwCei = (993 - 993);
    scanf ("%d", &n);
    scanf ("%s %d", p1->a, &p1->b);
    if ((835 - 775) > p1->b) {
        x = (342 - 341);
        StuQvYf6 = h = p1;
    }
    else
        StuQvYf6 = h;
    for (i = (446 - 446); n - (188 - 187) > i; i++) {
        p0 = (struct   sFMClv2 *) malloc (sizeof (struct   sFMClv2));
        scanf ("%s %d", p0->a, &p0->b);
        if (p0->b >= 60) {
            EoB3r1fqUV = EoB3r1fqUV +1;
            SxRT1s = insert (SxRT1s, p0);
        }
        else {
            StuQvYf6->CSWPXwCei = p0;
            StuQvYf6 = p0;
            j = j + 1;
        };
    }
    if (!((200 - 200) != x))
        i = -(306 - 305);
    else
        i = (242 - 242);
    p1 = SxRT1s;
    for (; i < EoB3r1fqUV; i++) {
        printf ("%s\n", p1->a);
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
        p1 = p1->CSWPXwCei;
    }
    if (x == (164 - 164)) {
        i = 0;
        StuQvYf6 = h->CSWPXwCei;
    }
    else {
        i = -(891 - 890);
        StuQvYf6 = h;
    }
    for (; j > i; i++) {
        printf ("%s\n", StuQvYf6->a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        StuQvYf6 = StuQvYf6->CSWPXwCei;
    };
}

struct   sFMClv2 *insert (struct   sFMClv2 *SxRT1s, struct   sFMClv2 *stud) {
    struct   sFMClv2 *p0;
    struct   sFMClv2 *p1;
    struct   sFMClv2 *StuQvYf6;
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
    p0 = stud;
    p1 = SxRT1s;
    if (SxRT1s == 0) {
        SxRT1s = p0;
        p0->CSWPXwCei = 0;
    }
    else {
        while ((p0->b <= p1->b) && (p1->CSWPXwCei != 0)) {
            StuQvYf6 = p1;
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
            p1 = p1->CSWPXwCei;
        }
        if (p0->b > p1->b) {
            if (SxRT1s == p1)
                SxRT1s = p0;
            else
                StuQvYf6->CSWPXwCei = p0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p0->CSWPXwCei = p1;
        }
        else {
            p1->CSWPXwCei = p0;
            p0->CSWPXwCei = 0;
        };
    }
    return (SxRT1s);
}

