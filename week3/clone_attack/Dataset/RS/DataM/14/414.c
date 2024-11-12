struct   stu {
    int e7NKqWviC;
    int fDdOxHAwnst;
    int ie7zZc1;
    int kvIacgZWsBmh;
    struct   stu *next;
};
struct   stu *creat (long  eHdCj5vZxi0) {
    long  IT70zCxDyf;
    struct   stu *YAVrkE9;
    struct   stu *S3ZWfydE;
    struct   stu *head;
    YAVrkE9 = (struct   stu *) malloc (LEN);
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
    head = S3ZWfydE = YAVrkE9;
    scanf ("%d %d %d", &YAVrkE9->e7NKqWviC, &YAVrkE9->fDdOxHAwnst, &YAVrkE9->ie7zZc1), YAVrkE9->kvIacgZWsBmh = YAVrkE9->ie7zZc1 + YAVrkE9->fDdOxHAwnst;
    for (IT70zCxDyf = (406 - 405); eHdCj5vZxi0 > IT70zCxDyf; IT70zCxDyf++) {
        YAVrkE9 = (struct   stu *) malloc (LEN);
        scanf ("%d %d %d", &YAVrkE9->e7NKqWviC, &YAVrkE9->fDdOxHAwnst, &YAVrkE9->ie7zZc1), YAVrkE9->kvIacgZWsBmh = YAVrkE9->ie7zZc1 + YAVrkE9->fDdOxHAwnst;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        S3ZWfydE->next = YAVrkE9, S3ZWfydE = YAVrkE9;
    }
    YAVrkE9->next = NULL;
    return (head);
}

int main () {
    long  IT70zCxDyf;
    long  eHdCj5vZxi0;
    struct   stu *xiJ936pOVQ, *YAVrkE9, *q1, *q2, *q3;
    int QYGNxgMJVPtS, Xb6tUkaD, yu5BghrS38;
    scanf ("%ld", &eHdCj5vZxi0);
    xiJ936pOVQ = creat (eHdCj5vZxi0);
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
    {
        YAVrkE9 = xiJ936pOVQ;
        QYGNxgMJVPtS = YAVrkE9->kvIacgZWsBmh;
        while (!(NULL == YAVrkE9)) {
            if (QYGNxgMJVPtS < YAVrkE9->kvIacgZWsBmh)
                QYGNxgMJVPtS = YAVrkE9->kvIacgZWsBmh, q1 = YAVrkE9;
            YAVrkE9 = YAVrkE9->next;
        };
    }
    printf ("%d %d", q1->e7NKqWviC, q1->kvIacgZWsBmh);
    {
        YAVrkE9 = xiJ936pOVQ;
        Xb6tUkaD = YAVrkE9->kvIacgZWsBmh;
        while (!(NULL == YAVrkE9)) {
            if (YAVrkE9->kvIacgZWsBmh > Xb6tUkaD &&YAVrkE9 != q1)
                Xb6tUkaD = YAVrkE9->kvIacgZWsBmh, q2 = YAVrkE9;
            YAVrkE9 = YAVrkE9->next;
        };
    }
    printf ("\n%d %d", q2->e7NKqWviC, q2->kvIacgZWsBmh);
    {
        YAVrkE9 = xiJ936pOVQ;
        yu5BghrS38 = YAVrkE9->kvIacgZWsBmh;
        while (YAVrkE9 != NULL) {
            if (YAVrkE9->kvIacgZWsBmh > yu5BghrS38 && YAVrkE9 != q1 && YAVrkE9 != q2)
                yu5BghrS38 = YAVrkE9->kvIacgZWsBmh, q3 = YAVrkE9;
            YAVrkE9 = YAVrkE9->next;
        };
    }
    printf ("\n%d %d", q3->e7NKqWviC, q3->kvIacgZWsBmh);
}

