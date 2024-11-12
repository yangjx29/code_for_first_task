struct   mdZR2K63 {
    char stu [500];
    struct   mdZR2K63 *WLWYSK;
};
int RKUjV3 = (972 - 972);

void  main () {
    struct   mdZR2K63 *creat ();
    void  print (struct   mdZR2K63 *head, int ZeR5cGEI);
    struct   mdZR2K63 *head;
    int i = 0;
    head = creat ();
    for (i = RKUjV3; 0 < i; i = i - 1)
        print (head, i);
}

struct   mdZR2K63 *creat () {
    struct   mdZR2K63 *p1;
    struct   mdZR2K63 *KL3xaXWf4Q;
    struct   mdZR2K63 *head;
    head = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p1 = KL3xaXWf4Q = (struct   mdZR2K63 *) malloc (LEN);
    gets (p1->stu);
    while (strcmp (p1->stu, "end") != 0) {
        RKUjV3 = RKUjV3 +1;
        if (RKUjV3 == 1) {
            head = p1;
        }
        else {
            KL3xaXWf4Q->WLWYSK = p1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        KL3xaXWf4Q = p1;
        p1 = (struct   mdZR2K63 *) malloc (LEN);
        gets (p1->stu);
    }
    KL3xaXWf4Q->WLWYSK = NULL;
    return (head);
}

void  print (struct   mdZR2K63 *head, int ZeR5cGEI) {
    int cZIHUQfhB;
    cZIHUQfhB = 1;
    struct   mdZR2K63 *EdHEGW6I;
    EdHEGW6I = head;
    while (cZIHUQfhB < ZeR5cGEI) {
        EdHEGW6I = EdHEGW6I->WLWYSK;
        cZIHUQfhB = cZIHUQfhB + 1;
    }
    printf ("%s\n", EdHEGW6I->stu);
}

