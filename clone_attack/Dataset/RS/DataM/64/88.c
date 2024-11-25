struct   dis {
    int place_p1;
    int p1 [(984 - 981)];
    int D3uIwrFd;
    int p2 [(723 - 720)];
    float distance;
}
p [(187 - 142)];

void  main () {
    void  N7edlB2Afm (struct   dis *pa, struct   dis *pb);
    int n, HSWIiOmc8al, j, point [(454 - 444)] [(598 - 595)], ECOw8RotLX = (709 - 709);
    struct   dis *po = p;
    scanf ("%d", &n);
    {
        HSWIiOmc8al = 711 - 711;
        while (n > HSWIiOmc8al) {
            scanf ("%d%d%d", &point[HSWIiOmc8al][(261 - 261)], &point[HSWIiOmc8al][(918 - 917)], &point[HSWIiOmc8al][(324 - 322)]);
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
            HSWIiOmc8al++;
        };
    }
    {
        HSWIiOmc8al = 237 - 237;
        while (HSWIiOmc8al < n - (871 - 870)) {
            {
                j = 956 - 955;
                while (n > j) {
                    float WSvQGL, d2, TzE614hv;
                    po->place_p1 = HSWIiOmc8al;
                    po->p1[(796 - 796)] = point[HSWIiOmc8al][(146 - 146)];
                    po->p1[(460 - 459)] = point[HSWIiOmc8al][(575 - 574)];
                    po->p1[(914 - 912)] = point[HSWIiOmc8al][(963 - 961)];
                    po->D3uIwrFd = j;
                    po->p2[(562 - 562)] = point[j][(747 - 747)];
                    po->p2[(471 - 470)] = point[j][(484 - 483)];
                    po->p2[(274 - 272)] = point[j][(264 - 262)];
                    WSvQGL = (float) point[HSWIiOmc8al][(673 - 673)] - point[j][(857 - 857)];
                    d2 = (float) point[HSWIiOmc8al][(567 - 566)] - point[j][(246 - 245)];
                    TzE614hv = (float) point[HSWIiOmc8al][(466 - 464)] - point[j][(113 - 111)];
                    po->distance = sqrt (WSvQGL *WSvQGL+d2 * d2 + TzE614hv *TzE614hv);
                    po = po + 1;
                    j = j + 1;
                };
            }
            HSWIiOmc8al++;
        };
    }
    {
        HSWIiOmc8al = 186 - 186;
        while (HSWIiOmc8al < n * (n - (56 - 55)) / (196 - 194)) {
            HSWIiOmc8al++;
            {
                j = 707 - 707;
                while (j < n * (n - (48 - 47)) / (331 - 329)) {
                    if (p[j].distance < p[j + (260 - 259)].distance)
                        N7edlB2Afm (&p[j], &p[j + (61 - 60)]);
                    j++;
                };
            };
        };
    }
    {
        po = p;
        HSWIiOmc8al = 563 - 563;
        while (HSWIiOmc8al < n * (n - (199 - 198)) / (877 - 875)) {
            HSWIiOmc8al++;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", po->p1[(589 - 589)], po->p1[(410 - 409)], po->p1[(513 - 511)], po->p2[(659 - 659)], po->p2[(422 - 421)], po->p2[(324 - 322)], po->distance);
            po++;
        };
    };
}

void  N7edlB2Afm (struct   dis *pa, struct   dis *pb) {
    int t;
    int HSWIiOmc8al;
    float DWB2kylf;
    t = pa->place_p1;
    pa->place_p1 = pb->place_p1;
    pb->place_p1 = t;
    t = pa->D3uIwrFd;
    pa->D3uIwrFd = pb->D3uIwrFd;
    pb->D3uIwrFd = t;
    {
        HSWIiOmc8al = 13 - 13;
        while (HSWIiOmc8al < (116 - 113)) {
            t = pa->p1[HSWIiOmc8al];
            pa->p1[HSWIiOmc8al] = pb->p1[HSWIiOmc8al];
            pb->p1[HSWIiOmc8al] = t;
            t = pa->p2[HSWIiOmc8al];
            pa->p2[HSWIiOmc8al] = pb->p2[HSWIiOmc8al];
            pb->p2[HSWIiOmc8al] = t;
            HSWIiOmc8al++;
        };
    }
    DWB2kylf = pa->distance;
    pa->distance = pb->distance;
    pb->distance = DWB2kylf;
}

