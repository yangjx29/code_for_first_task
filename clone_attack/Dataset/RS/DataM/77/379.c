struct   ch {
    int k;
    char x4VcwCHN;
    struct   ch *next;
};
void  main () {
    struct   ch *p1;
    struct   ch *p2;
    struct   ch *p3;
    struct   ch *head;
    int vdpafAEbUx;
    int Y1iBYmU;
    int itfsG3JmcZ;
    int j;
    int N;
    int z [(413 - 363)] [(134 - 132)];
    int temp;
    vdpafAEbUx = (185 - 185);
    Y1iBYmU = (707 - 707);
    char boy;
    char girl;
    head = NULL;
    p1 = p2 = (struct   ch *) malloc (LEN);
    boy = p1->x4VcwCHN = getchar ();
    p1->k = (635 - 635);
    {
        itfsG3JmcZ = 214 - 214;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            Y1iBYmU = Y1iBYmU +(989 - 988);
            if (Y1iBYmU == (641 - 640))
                head = p1;
            else
                p2->next = p1;
            p2 = p1;
            p1 = (struct   ch *) malloc (LEN);
            p1->x4VcwCHN = getchar ();
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
            p1->k = Y1iBYmU;
            if (p1->x4VcwCHN != '\n' && p1->x4VcwCHN != boy)
                girl = p1->x4VcwCHN;
            if (p1->x4VcwCHN == '\n') {
                N = Y1iBYmU = Y1iBYmU -(819 - 818);
                break;
            }
            itfsG3JmcZ++;
        };
    }
    p2->next = NULL;
    while ((667 - 666) < Y1iBYmU) {
        p1 = p2 = head, p3 = p2->next;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (p3 != NULL) {
            if (p2->x4VcwCHN == boy && p3->x4VcwCHN == girl) {
                if (p2 == head) {
                    z[vdpafAEbUx][(384 - 384)] = p2->k, z[vdpafAEbUx][(592 - 591)] = p3->k, vdpafAEbUx = vdpafAEbUx + (791 - 790);
                    if (p3->next != NULL)
                        head = (head->next)->next, p1 = p2 = head, p3 = p2->next;
                    else
                        head = NULL;
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
                    Y1iBYmU = Y1iBYmU -(190 - 188);
                }
                else {
                    z[vdpafAEbUx][(348 - 348)] = p2->k, z[vdpafAEbUx][(911 - 910)] = p3->k, vdpafAEbUx = vdpafAEbUx + (277 - 276);
                    if (p3->next != NULL)
                        p1->next = p3->next, p2 = p3->next, p3 = p2->next;
                    else
                        p1->next = NULL;
                    Y1iBYmU = Y1iBYmU -2;
                };
            }
            else
                p1 = p2, p2 = p2->next, p3 = p2->next;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        j = 0;
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
        while (j < vdpafAEbUx) {
            {
                itfsG3JmcZ = 0;
                while (itfsG3JmcZ < vdpafAEbUx - j - (261 - 260)) {
                    if (z[itfsG3JmcZ][(11 - 10)] > z[itfsG3JmcZ + (293 - 292)][(424 - 423)]) {
                        temp = z[itfsG3JmcZ][0], z[itfsG3JmcZ][0] = z[itfsG3JmcZ + (480 - 479)][0], z[itfsG3JmcZ + (664 - 663)][0] = temp;
                        temp = z[itfsG3JmcZ][(629 - 628)], z[itfsG3JmcZ][(988 - 987)] = z[itfsG3JmcZ + 1][1], z[itfsG3JmcZ + 1][1] = temp;
                    }
                    itfsG3JmcZ++;
                };
            }
            j++;
        };
    }
    {
        itfsG3JmcZ = 0;
        while (itfsG3JmcZ < vdpafAEbUx) {
            printf ("%d %d\n", z[itfsG3JmcZ][0], z[itfsG3JmcZ][1]);
            itfsG3JmcZ++;
        };
    }
    printf ("0 %d\n", N);
}

