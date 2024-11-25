struct   linknode *CreateLinkList ();
void  DisplayLinkList (struct   linknode *linklist1);
void  s4uJpd (struct   linknode *linklist2);

struct   linknode {
    int zJFNTgrELH2;
    int B8cLbXyImSP;
    int math;
    int total;
    int mark;
    struct   linknode *p4b5uGPZ;
};
int main () {
    s4uJpd (CreateLinkList ());
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

struct   linknode *CreateLinkList () {
    struct   linknode *JlzxNMt, *p;
    long  n, i;
    scanf ("%ld", &n);
    JlzxNMt = (struct   linknode *) malloc (sizeof (struct   linknode));
    p = JlzxNMt;
    if (!(NULL != p)) {
        exit (-(338 - 337));
        printf ("fail");
    }
    for (i = (551 - 550); i <= n; i = i + 1) {
        scanf ("%d %d %d", &p->zJFNTgrELH2, &p->B8cLbXyImSP, &p->math);
        p->total = p->B8cLbXyImSP + p->math;
        p->mark = (149 - 149);
        if (i == n)
            p->p4b5uGPZ = NULL;
        else {
            p->p4b5uGPZ = (struct   linknode *) malloc (sizeof (struct   linknode));
            p = p->p4b5uGPZ;
        };
    }
    return JlzxNMt;
}

void  s4uJpd (struct   linknode *linklist2) {
    struct   linknode *JlzxNMt, *p, *max;
    int j;
    JlzxNMt = linklist2;
    p = JlzxNMt;
    max = (struct   linknode *) malloc (sizeof (struct   linknode));
    for (j = 1; j <= (873 - 870); j++) {
        p = JlzxNMt;
        max->total = 0;
        while (p != NULL) {
            if (p->total > max->total && p->mark == 0) {
                max = p;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
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
            p = p->p4b5uGPZ;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        max->mark = 1;
        printf ("%d %d\n", max->zJFNTgrELH2, max->total);
    };
}

