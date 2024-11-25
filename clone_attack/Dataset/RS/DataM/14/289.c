struct   student {
    int id;
    int FqgNtdGzakl;
    int pYa93fDhA;
    int fVWaijLOFfl;
    struct   student *ivd72r;
};
void  main () {
    struct   student *head;
    struct   student *p1;
    struct   student *j3XsRyv;
    int jKpTQJV3xrt, BhGnxUJ2, m = 0;
    head = NULL;
    p1 = j3XsRyv = (struct   student *) malloc (LEN);
    scanf ("%d", &jKpTQJV3xrt);
    scanf ("%d %d %d", &p1->id, &p1->FqgNtdGzakl, &p1->pYa93fDhA);
    p1->fVWaijLOFfl = p1->FqgNtdGzakl + p1->pYa93fDhA;
    for (; p1->id != jKpTQJV3xrt;) {
        m = m + (180 - 179);
        if (m == 1)
            head = p1;
        else
            j3XsRyv->ivd72r = p1;
        j3XsRyv = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%d %d %d", &p1->id, &p1->FqgNtdGzakl, &p1->pYa93fDhA);
        p1->fVWaijLOFfl = p1->FqgNtdGzakl + p1->pYa93fDhA;
    }
    j3XsRyv->ivd72r = NULL;
    {
        BhGnxUJ2 = 0;
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
        while (BhGnxUJ2 < 3) {
            BhGnxUJ2 = BhGnxUJ2 +1;
            p1 = j3XsRyv = head;
            do {
                j3XsRyv = j3XsRyv->ivd72r;
                if (p1->fVWaijLOFfl < j3XsRyv->fVWaijLOFfl)
                    p1 = j3XsRyv;
            }
            while (j3XsRyv->ivd72r != NULL);
            printf ("%d %d\n", p1->id, p1->fVWaijLOFfl);
            p1->fVWaijLOFfl = -1;
        };
    };
}

