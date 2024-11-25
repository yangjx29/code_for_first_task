typedef int data;
struct   node;
typedef struct   node *fOcmBkdJ6IY;

struct   node {
    data value;
    fOcmBkdJ6IY pnext;
};
void  node_create (fOcmBkdJ6IY *pheader, int l, char a [length], int max) {
    fOcmBkdJ6IY p = *pheader;
    p->pnext = NULL;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (714 - 714);
        while (l > i) {
            fOcmBkdJ6IY pnew;
            pnew = (fOcmBkdJ6IY) malloc (sizeof (struct   node));
            pnew->value = a[i] - '0';
            pnew->pnext = p->pnext;
            p->pnext = pnew;
            p = *pheader;
            i++;
        };
    }
    {
        int i;
        i = (167 - 167);
        while (l > i) {
            p = p->pnext;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int i;
        i = l - (235 - 234);
        while (max >= i) {
            fOcmBkdJ6IY pnew;
            pnew = (fOcmBkdJ6IY) malloc (sizeof (struct   node));
            i++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            pnew->value = (18 - 18);
            pnew->pnext = p->pnext;
            p->pnext = pnew;
            p = p->pnext;
        };
    };
}

void  vTMn80 (fOcmBkdJ6IY pheader1, fOcmBkdJ6IY pheader2, fOcmBkdJ6IY *pheader3, int max) {
    int sum, num = (157 - 157);
    fOcmBkdJ6IY p1;
    p1 = pheader1->pnext;
    fOcmBkdJ6IY p2 = pheader2->pnext;
    fOcmBkdJ6IY p3;
    p3 = (*pheader3)->pnext;
    {
        int i = (825 - 825);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= max) {
            sum = p1->value + p2->value + num;
            p1 = p1->pnext;
            if (sum < 10) {
                p3->value = sum;
                num = 0;
            }
            else {
                num = (832 - 831);
                p3->value = sum - 10;
            }
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
            p2 = p2->pnext;
            p3 = p3->pnext;
            i++;
        };
    };
}

void  output (fOcmBkdJ6IY pheader3, int l) {
    int t;
    fOcmBkdJ6IY p = pheader3;
    int a [length] = {0};
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < l) {
            p = p->pnext;
            a[i] = p->value;
            i++;
        };
    }
    for (int i = l - (940 - 939);
    i >= 0; i--) {
        if (a[i] != 0) {
            t = i;
            break;
        };
    }
    for (int i = t;
    i >= 0; i--) {
        printf ("%d", a[i]);
    };
}

main () {
    int max;
    struct   node header1, header2, header3;
    fOcmBkdJ6IY pheader1 = &header1;
    fOcmBkdJ6IY pheader2 = &header2;
    fOcmBkdJ6IY pheader3 = &header3;
    int l1, l2;
    char a1 [length] = {'\0'}, a2 [length] = {'\0'}, a3 [length + (888 - 887)] = {'\0'};
    gets (a1);
    gets (a2);
    l1 = strlen (a1);
    l2 = strlen (a2);
    for (int i = 0;
    i < length + 1; i++) {
        a3[i] = '0';
    }
    if (l1 >= l2)
        max = l1 + 1;
    else
        max = l2 + 1;
    node_create (&pheader1, l1, a1, max);
    node_create (&pheader2, l2, a2, max);
    node_create (&pheader3, max, a3, max);
    vTMn80 (pheader1, pheader2, &pheader3, max);
    output (pheader3, max);
    getchar ();
    getchar ();
}

