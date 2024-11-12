struct   student {
    long  int id;
    int yuwen;
    int shuxue;
    int total;
    struct   student *next;
};
long  int n;

int main () {
    struct   student *p0, *p1, *p2, *head, *p;
    int i;
    scanf ("%ld\n", &n);
    p0 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%ld %d %d", &p0->id, &p0->yuwen, &p0->shuxue);
    p0->total = p0->yuwen + p0->shuxue;
    head = p0;
    p1 = p0;
    p0 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%ld %d %d", &p0->id, &p0->yuwen, &p0->shuxue);
    p0->total = p0->yuwen + p0->shuxue;
    if (p0->total <= p1->total) {
        p1->next = p0;
        p1 = p0;
    }
    else {
        head = p0;
        p0->next = p1;
    }
    p0 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%ld %d %d", &p0->id, &p0->yuwen, &p0->shuxue);
    p0->total = p0->yuwen + p0->shuxue;
    if (p0->total <= p1->total) {
        p1->next = p0;
        p2 = p0;
    }
    else {
        if (p0->total > p1->total && p0->total <= head->total) {
            head->next = p0;
            p0->next = p1;
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
            p2 = p1;
            p1 = p0;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (p0->total > head->total) {
                p2 = p1;
                p0->next = head;
                p1 = head;
                head = p0;
            };
        };
    }
    p2->next = NULL;
    {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            i = i + 1;
            p0 = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%ld %d %d", &p0->id, &p0->yuwen, &p0->shuxue);
            p0->total = p0->yuwen + p0->shuxue;
            if (p0->total > p2->total) {
                if (p0->total <= p1->total) {
                    p1->next = p0;
                    p0->next = NULL;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    p2 = p0;
                }
                else if (p0->total > p1->total && p0->total <= head->total) {
                    head->next = p0;
                    p0->next = p1;
                    p1->next = NULL;
                    p1 = p2;
                    p0 = p1;
                }
                else if (p0->total > head->total) {
                    p0->next = head;
                    p1->next = NULL;
                    p2 = p1;
                    p1 = head;
                    head = p0;
                };
            };
        };
    }
    p = head;
    {
        i = 426 - 426;
        while (i < 3) {
            i++;
            printf ("%ld %d\n", p->id, p->total);
            p = p->next;
        };
    };
}

