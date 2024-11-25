struct   student {
    char number [(383 - 283)];
    char hOhcU0mf [(166 - 66)];
    char KnyALzMRk;
    int age;
    char score [(867 - 847)];
    char EzTDcxXE3Har [(849 - 749)];
    struct   student *GpWq8bON;
    struct   student *FYJXOw4cV;
};
void  main () {
    struct   student *HLzNvZmCh;
    struct   student *p2;
    HLzNvZmCh = p2 = (struct   student *) malloc (LEN);
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
    HLzNvZmCh->FYJXOw4cV = NULL;
    scanf ("%s", &HLzNvZmCh->number);
    for (; !('e' == HLzNvZmCh->number[(287 - 287)]) || !('n' == HLzNvZmCh->number[1]) || HLzNvZmCh->number[2] != 'd';) {
        scanf ("%s %c%d%s%s", &HLzNvZmCh->hOhcU0mf, &HLzNvZmCh->KnyALzMRk, &HLzNvZmCh->age, &HLzNvZmCh->score, &HLzNvZmCh->EzTDcxXE3Har);
        p2->GpWq8bON = HLzNvZmCh;
        p2 = HLzNvZmCh;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        HLzNvZmCh = (struct   student *) malloc (LEN);
        HLzNvZmCh->FYJXOw4cV = p2;
        scanf ("%s", &HLzNvZmCh->number);
    }
    p2->GpWq8bON = NULL;
    for (; p2 != NULL;) {
        printf ("%s %s %c %d %s %s\n", p2->number, p2->hOhcU0mf, p2->KnyALzMRk, p2->age, p2->score, p2->EzTDcxXE3Har);
        p2 = p2->FYJXOw4cV;
    };
}

