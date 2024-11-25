int n1;
int n2;
int IMjYOl5H;
int a [100] = {(538 - 538)};
int lHbOptyzWDV [100] = {(985 - 985)};
int c [200] = {0};

void  bL4GYFBh () {
    scanf ("%d %d", &n1, &n2);
    scanf ("%d", &a[0]);
    {
        IMjYOl5H = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IMjYOl5H < n1) {
            scanf (" %d", &a[IMjYOl5H]);
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
            IMjYOl5H = IMjYOl5H +1;
        };
    }
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
    scanf ("%d", &lHbOptyzWDV[0]);
    for (IMjYOl5H = 1; IMjYOl5H < n2; IMjYOl5H = IMjYOl5H +1)
        scanf (" %d", &lHbOptyzWDV[IMjYOl5H]);
}

int compare (const  void  *elem1, const  void  *EwNcp6bduVz) {
    return (*(int*) elem1 - *(int*) EwNcp6bduVz);
}

void  EVJDQo () {
    qsort (a, n1, sizeof (int), compare);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    qsort (lHbOptyzWDV, n2, sizeof (int), compare);
}

void  MvAZmr2 () {
    {
        IMjYOl5H = 0;
        while (IMjYOl5H < n1) {
            c[IMjYOl5H] = a[IMjYOl5H];
            IMjYOl5H = IMjYOl5H +1;
        };
    }
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
    {
        IMjYOl5H = 0;
        while (IMjYOl5H < n2) {
            c[IMjYOl5H +n1] = lHbOptyzWDV[IMjYOl5H];
            IMjYOl5H++;
        };
    };
}

void  tR45FB () {
    printf ("%d", c[0]);
    for (IMjYOl5H = 1; IMjYOl5H < n1 + n2; IMjYOl5H = IMjYOl5H +1)
        printf (" %d", c[IMjYOl5H]);
}

int main () {
    bL4GYFBh ();
    EVJDQo ();
    MvAZmr2 ();
    tR45FB ();
}

