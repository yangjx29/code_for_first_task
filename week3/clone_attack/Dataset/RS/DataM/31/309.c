char YpMlgInPB3ba [] = "end";
struct   student {
    char studen [100];
    struct   student *next;
};
int qy18gq3Y;

struct   student *creat (void ) {
    struct   student *head, *p1, *DEGNRxS32Wg;
    qy18gq3Y = 0;
    p1 = DEGNRxS32Wg = (struct   student *) malloc (sizeof (struct   student));
    gets (p1->studen);
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
    head = NULL;
    for (; strcmp (p1->studen, YpMlgInPB3ba) != 0;) {
        qy18gq3Y = qy18gq3Y + 1;
        if (qy18gq3Y == 1)
            head = p1;
        else
            DEGNRxS32Wg->next = p1;
        DEGNRxS32Wg = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (sizeof (struct   student));
        gets (p1->studen);
    }
    DEGNRxS32Wg->next = NULL;
    return (head);
}

void  wZWF13zTwOQH (struct   student *head) {
    struct   student *P8vW5Ot4DX, *q;
    P8vW5Ot4DX = q = head;
    for (; P8vW5Ot4DX->next != NULL;)
        P8vW5Ot4DX = P8vW5Ot4DX->next;
    printf ("%s\n", P8vW5Ot4DX->studen);
    for (; 1;) {
        for (; q->next != P8vW5Ot4DX;)
            q = q->next;
        printf ("%s\n", q->studen);
        P8vW5Ot4DX = q;
        q = head;
        if (P8vW5Ot4DX == head)
            break;
    };
}

int main () {
    struct   student *x8FHW2ORiM;
    wZWF13zTwOQH (x8FHW2ORiM);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    x8FHW2ORiM = creat ();
}

