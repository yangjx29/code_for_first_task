struct   arr {
    char vbFcoPAOj0J [(639 - 619)];
    char name [50];
    char sex;
    int UGv9jbwX2PV;
    float score;
    char address [50];
    struct   arr *next;
};
int k0Ud7s;

struct   arr *create (void ) {
    struct   arr *jKHn5MQOA;
    struct   arr *p1, *GnzWEuogsc2;
    jKHn5MQOA = NULL;
    p1 = GnzWEuogsc2 = (struct   arr *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &p1->vbFcoPAOj0J, &p1->name, &p1->sex, &p1->UGv9jbwX2PV, &p1->score, &p1->address);
    k0Ud7s = 0;
    for (; strcmp (p1->vbFcoPAOj0J, "end") != 0;) {
        k0Ud7s = k0Ud7s + (524 - 523);
        if (k0Ud7s == 1)
            jKHn5MQOA = p1;
        else
            GnzWEuogsc2->next = p1;
        GnzWEuogsc2 = p1;
        p1 = (struct   arr *) malloc (LEN);
        scanf ("%s", &p1->vbFcoPAOj0J);
        if (strcmp (p1->vbFcoPAOj0J, "end") == 0)
            break;
        scanf ("%s %c %d %f %s", &p1->name, &p1->sex, &p1->UGv9jbwX2PV, &p1->score, &p1->address);
    }
    GnzWEuogsc2->next = NULL;
    return (jKHn5MQOA);
}

struct   arr *qTq4AG (struct   arr *jKHn5MQOA) {
    struct   arr *p1;
    struct   arr *GnzWEuogsc2;
    struct   arr *jUefAhB;
    p1 = GnzWEuogsc2 = jKHn5MQOA;
    if (p1 != NULL &&p1->next != NULL) {
        p1 = p1->next;
        GnzWEuogsc2->next = NULL;
        for (; p1 != NULL &&p1->next != NULL;) {
            jUefAhB = p1;
            p1 = p1->next;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jUefAhB->next = GnzWEuogsc2;
            GnzWEuogsc2 = jUefAhB;
        }
        jKHn5MQOA = p1;
        p1->next = GnzWEuogsc2;
    }
    return (jKHn5MQOA);
}

void  pUHLWBOIA (struct   arr *jKHn5MQOA) {
    struct   arr *p1;
    int b;
    p1 = jKHn5MQOA;
    for (; p1 != NULL;) {
        b = (int) p1->score;
        if (p1->score - b == (460.0 - 460.0))
            printf ("%s %s %c %d %d %s\n", p1->vbFcoPAOj0J, p1->name, p1->sex, p1->UGv9jbwX2PV, b, p1->address);
        else
            printf ("%s %s %c %d %.1f %s\n", p1->vbFcoPAOj0J, p1->name, p1->sex, p1->UGv9jbwX2PV, p1->score, p1->address);
        p1 = p1->next;
    };
}

void  freelist (struct   arr *jKHn5MQOA) {
    struct   arr *xy6EfjhM1 = jKHn5MQOA;
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
    for (; xy6EfjhM1 != NULL;) {
        free (xy6EfjhM1);
        jKHn5MQOA = jKHn5MQOA->next;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        xy6EfjhM1 = jKHn5MQOA;
    };
}

void  main () {
    struct   arr *jKHn5MQOA;
    pUHLWBOIA (jKHn5MQOA);
    freelist (jKHn5MQOA);
    jKHn5MQOA = create ();
    jKHn5MQOA = qTq4AG (jKHn5MQOA);
}

