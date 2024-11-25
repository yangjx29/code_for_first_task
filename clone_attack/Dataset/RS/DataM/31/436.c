struct   student {
    char vvGybD [(942 - 932)];
    char name [(955 - 935)];
    char sex [(431 - 429)];
    int U6cMaVzTRQoy;
    char s [10];
    char St1xLdV [20];
    struct   student *next;
};
struct   student *creat (void ) {
    int ucQtaxB = (636 - 636);
    struct   student *head, *OnIFlU9jpkAH, *p2;
    head = NULL;
    OnIFlU9jpkAH = p2 = (struct   student *) malloc (LEN);
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
    while (scanf ("%s", OnIFlU9jpkAH->vvGybD) && (390 - 342) <= *OnIFlU9jpkAH->vvGybD && *OnIFlU9jpkAH->vvGybD <= (851 - 794)) {
        scanf ("%s%s%d%s%s", OnIFlU9jpkAH->name, OnIFlU9jpkAH->sex, &OnIFlU9jpkAH->U6cMaVzTRQoy, OnIFlU9jpkAH->s, OnIFlU9jpkAH->St1xLdV);
        if (ucQtaxB == 0)
            head = OnIFlU9jpkAH;
        else
            p2->next = OnIFlU9jpkAH;
        ucQtaxB++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = OnIFlU9jpkAH;
        OnIFlU9jpkAH = (struct   student *) malloc (LEN);
    }
    p2->next = NULL;
    return (head);
}

void  turn (struct   student *head) {
    struct   student *OnIFlU9jpkAH, *p2;
    p2 = OnIFlU9jpkAH = head;
    while (head->next != NULL) {
        while (OnIFlU9jpkAH->next != NULL) {
            p2 = OnIFlU9jpkAH;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            OnIFlU9jpkAH = OnIFlU9jpkAH->next;
        }
        printf ("%s %s %s %d %s %s\n", OnIFlU9jpkAH->vvGybD, OnIFlU9jpkAH->name, OnIFlU9jpkAH->sex, OnIFlU9jpkAH->U6cMaVzTRQoy, OnIFlU9jpkAH->s, OnIFlU9jpkAH->St1xLdV);
        OnIFlU9jpkAH = head;
        p2->next = NULL;
    }
    printf ("%s %s %s %d %s %s\n", OnIFlU9jpkAH->vvGybD, OnIFlU9jpkAH->name, OnIFlU9jpkAH->sex, OnIFlU9jpkAH->U6cMaVzTRQoy, OnIFlU9jpkAH->s, OnIFlU9jpkAH->St1xLdV);
}

void  main () {
    struct   student *head;
    turn (head);
    head = creat ();
}

