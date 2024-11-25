struct   patient {
    char DHb3D7lMB8Wp [10];
    int mUAtKv;
    struct   patient *WULDevNnzjqK;
};
struct   patient *creat (void ) {
    int pSqOplJ1mM8;
    struct   patient *head;
    struct   patient *p1, *Z8oyKY6b;
    p1 = (struct   patient *) malloc (LEN);
    head = p1;
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
    Z8oyKY6b = NULL;
    scanf ("%d", &pSqOplJ1mM8);
    while (0 < pSqOplJ1mM8) {
        pSqOplJ1mM8 = pSqOplJ1mM8 - 1;
        Z8oyKY6b = p1;
        scanf ("%s %d", &p1->DHb3D7lMB8Wp, &p1->mUAtKv);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   patient *) malloc (LEN);
        Z8oyKY6b->WULDevNnzjqK = p1;
    }
    Z8oyKY6b->WULDevNnzjqK = NULL;
    return (head);
}

struct   patient *sGNeAU (struct   patient *head) {
    struct   patient *uR3tui;
    struct   patient *tail;
    struct   patient *Z05aLZpb;
    struct   patient *miDW3ta;
    struct   patient *HvgpCVDsoxI9;
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
    uR3tui = NULL;
    while (!(NULL == head)) {
        for (HvgpCVDsoxI9 = head, miDW3ta = head; !(NULL == HvgpCVDsoxI9->WULDevNnzjqK); HvgpCVDsoxI9 = HvgpCVDsoxI9->WULDevNnzjqK) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (HvgpCVDsoxI9->WULDevNnzjqK->mUAtKv > miDW3ta->mUAtKv && HvgpCVDsoxI9->WULDevNnzjqK->mUAtKv >= 60) {
                Z05aLZpb = HvgpCVDsoxI9;
                miDW3ta = HvgpCVDsoxI9->WULDevNnzjqK;
            };
        }
        if (uR3tui == NULL) {
            uR3tui = miDW3ta;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            tail = miDW3ta;
        }
        else {
            tail->WULDevNnzjqK = miDW3ta;
            tail = miDW3ta;
        }
        if (miDW3ta == head) {
            head = head->WULDevNnzjqK;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
            Z05aLZpb->WULDevNnzjqK = miDW3ta->WULDevNnzjqK;
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
            };
        };
    }
    if (uR3tui != NULL) {
        tail->WULDevNnzjqK = NULL;
    }
    head = uR3tui;
    return head;
}

void  YSNGBmZEo (struct   patient *head) {
    struct   patient *HvgpCVDsoxI9;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    HvgpCVDsoxI9 = head;
    while (HvgpCVDsoxI9 != NULL) {
        printf ("%s\n", HvgpCVDsoxI9->DHb3D7lMB8Wp);
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
        HvgpCVDsoxI9 = HvgpCVDsoxI9->WULDevNnzjqK;
    };
}

int main () {
    int n, SS47IZ, za6k23goXrKR;
    struct   patient *head;
    YSNGBmZEo (head);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    head = creat ();
    head = sGNeAU (head);
}

