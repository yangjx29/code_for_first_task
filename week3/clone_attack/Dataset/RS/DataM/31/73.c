typedef struct   Student {
    char ALL [(1059 - 959)];
    struct   Student *pNext;
    struct   Student *ujVPDXEq;
}
Stu;

int main (void ) {
    Stu *pRoot = (Stu *) malloc (sizeof (Stu));
    Stu *pNow = pRoot;
    pRoot->ujVPDXEq = NULL;
    for (;;) {
        gets (pNow->ALL);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp ("end", pNow->ALL)) {
            pNow->pNext = (Stu *) malloc (sizeof (Stu));
            pNow->pNext->ujVPDXEq = pNow;
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
            pNow = pNow->pNext;
        }
        else
            break;
    }
    pNow = pNow->ujVPDXEq;
    for (;;) {
        puts (pNow->ALL);
        if (pNow->ujVPDXEq == NULL)
            break;
        pNow = pNow->ujVPDXEq;
    }
    return 0;
}

