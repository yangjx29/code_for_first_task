struct   student {
    char HXkRBYy5ALH [10];
    char ttxB9LOji [100];
    char sex;
    int QwtXLFO;
    char LObHoPQ8Z9 [100];
    char ROAKrSG [100];
    struct   student *MKFWn6kRB;
};
int BrS7ctYz3TfK = 0;

struct   student *wYumKiOtjWF () {
    struct   student *head;
    struct   student *p1;
    struct   student *GA8fidBOn1K;
    head = NULL;
    p1 = GA8fidBOn1K = (struct   student *) malloc (LEN);
    scanf ("%s %s %c%d%s%s", &p1->HXkRBYy5ALH, &p1->ttxB9LOji, &p1->sex, &p1->QwtXLFO, &p1->LObHoPQ8Z9, &p1->ROAKrSG);
    for (; p1->HXkRBYy5ALH[0] != 'e';) {
        BrS7ctYz3TfK = BrS7ctYz3TfK +1;
        if (BrS7ctYz3TfK == 1)
            head = p1;
        else
            GA8fidBOn1K->MKFWn6kRB = p1;
        GA8fidBOn1K = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c%d%s%s", &p1->HXkRBYy5ALH, &p1->ttxB9LOji, &p1->sex, &p1->QwtXLFO, &p1->LObHoPQ8Z9, &p1->ROAKrSG);
    }
    GA8fidBOn1K->MKFWn6kRB = NULL;
    return (head);
}

void  id3q7xXblYZ (struct   student *head, int m) {
    struct   student *p1;
    p1 = head;
    if (!(NULL == head))
        do {
            printf ("%s %s %c %d %s %s\n", p1->HXkRBYy5ALH, p1->ttxB9LOji, p1->sex, p1->QwtXLFO, p1->LObHoPQ8Z9, p1->ROAKrSG);
            p1 = p1->MKFWn6kRB;
        }
        while (p1 != NULL);
}

struct   student *turnback (struct   student *head) {
    int kaWbg9DFuO;
    struct   student *p1;
    struct   student *GA8fidBOn1K;
    struct   student *vvFUutldg;
    struct   student *p;
    for (kaWbg9DFuO = BrS7ctYz3TfK; kaWbg9DFuO >= 0; kaWbg9DFuO = kaWbg9DFuO - 1) {
        GA8fidBOn1K = p1 = head;
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
        for (; p1->MKFWn6kRB != NULL;) {
            GA8fidBOn1K = p1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p1 = p1->MKFWn6kRB;
        }
        if (kaWbg9DFuO == BrS7ctYz3TfK)
            p = vvFUutldg = p1;
        else {
            p = p->MKFWn6kRB = p1;
            GA8fidBOn1K->MKFWn6kRB = NULL;
        };
    }
    return (vvFUutldg);
}

int main () {
    struct   student *head;
    struct   student *newhead;
    head = wYumKiOtjWF ();
    newhead = turnback (head);
    id3q7xXblYZ (newhead, BrS7ctYz3TfK);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

