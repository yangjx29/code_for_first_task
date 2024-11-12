struct   student {
    char str [500];
    struct   student *Go419n;
    struct   student *kBGqNUAS9LV0;
};
struct   student *AIqVexJN (void ) {
    struct   student *head, *CYzkh0, *p2;
    CYzkh0 = p2 = (struct   student *) malloc (LEN);
    gets (CYzkh0->str);
    CYzkh0->kBGqNUAS9LV0 = NULL;
    head = CYzkh0;
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
    for (; !(0 == strcmp (CYzkh0->str, "end"));) {
        p2 = CYzkh0;
        CYzkh0 = (struct   student *) malloc (LEN);
        gets (CYzkh0->str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->Go419n = CYzkh0;
        CYzkh0->kBGqNUAS9LV0 = p2;
    }
    p2->Go419n = NULL;
    head = p2;
    return (head);
}

void  main () {
    struct   student *J5Yld89, *head;
    head = AIqVexJN ();
    J5Yld89 = head;
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
    for (; J5Yld89->kBGqNUAS9LV0 != NULL;) {
        printf ("%s\n", J5Yld89->str);
        J5Yld89 = J5Yld89->kBGqNUAS9LV0;
    }
    printf ("%s", J5Yld89->str);
}

