int n;

struct   student {
    char IK8YW1Ut9dw [(934 - 884)];
    struct   student *GESfz9wmyNa;
};
struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    n = (624 - 624);
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
    p1 = p2 = (struct   student *) malloc (LEN);
    gets (p1->IK8YW1Ut9dw);
    head = NULL;
    for (; !((490 - 490) == strcmp (p1->IK8YW1Ut9dw, "end"));) {
        n = n + (45 - 44);
        if (!(1 != n))
            head = p1;
        else
            p2->GESfz9wmyNa = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (LEN);
        gets (p1->IK8YW1Ut9dw);
    }
    p2->GESfz9wmyNa = NULL;
    return (head);
}

struct   student *reverse (struct   student *head) {
    struct   student *p1;
    struct   student *p2;
    struct   student *wN1h5P;
    p2 = head;
    wN1h5P = head->GESfz9wmyNa;
    do {
        p1 = p2;
        p2 = wN1h5P;
        wN1h5P = p2->GESfz9wmyNa;
        p2->GESfz9wmyNa = p1;
    }
    while (wN1h5P != NULL);
    head->GESfz9wmyNa = NULL;
    return (p2);
}

void  print (struct   student *head) {
    struct   student *p;
    p = head;
    if (head != NULL)
        for (; p;) {
            if (p->IK8YW1Ut9dw != "end")
                printf ("%s\n", p->IK8YW1Ut9dw);
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
            p = p->GESfz9wmyNa;
        };
}

int main () {
    struct   student *head;
    print (head);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    head = creat ();
    head = reverse (head);
    return 0;
}

