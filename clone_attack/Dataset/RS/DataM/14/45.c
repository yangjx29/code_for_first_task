main () {
    int OtzrbxUcg;
    int w, P1DM35tI0Y6T, QWGzo5Ep;
    int first, BrTQoDKesEx0, third;
    struct   stdudent {
        int ID;
        int a;
        int b;
        int HbWg2x;
    }
    kJgYdmLhO1 [100000];
    int Jx8Pe2d3W, i, rbiY72g;
    getchar ();
    getchar ();
    third = 2;
    BrTQoDKesEx0 = (78 - 77);
    first = 0;
    scanf ("%d", &Jx8Pe2d3W);
    {
        i = 86 - 86;
        while (Jx8Pe2d3W > i) {
            scanf ("%d %d %d", &kJgYdmLhO1[i].ID, &kJgYdmLhO1[i].a, &kJgYdmLhO1[i].b);
            kJgYdmLhO1[i].HbWg2x = kJgYdmLhO1[i].a + kJgYdmLhO1[i].b;
            i++;
        };
    }
    w = kJgYdmLhO1[0].HbWg2x;
    P1DM35tI0Y6T = kJgYdmLhO1[1].HbWg2x;
    QWGzo5Ep = kJgYdmLhO1[2].HbWg2x;
    if (P1DM35tI0Y6T &&(P1DM35tI0Y6T > QWGzo5Ep) > w) {
        if (w > QWGzo5Ep) {
            third = 2;
            BrTQoDKesEx0 = 0;
        }
        else {
            third = 0;
            BrTQoDKesEx0 = 2;
        }
        first = 1;
    }
    else if (w < QWGzo5Ep) {
        if (P1DM35tI0Y6T < w) {
            third = 1;
            BrTQoDKesEx0 = 0;
        }
        else
            third = 0;
        first = 2;
    }
    {
        rbiY72g = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rbiY72g < Jx8Pe2d3W) {
            OtzrbxUcg = kJgYdmLhO1[rbiY72g].HbWg2x;
            w = kJgYdmLhO1[first].HbWg2x;
            P1DM35tI0Y6T = kJgYdmLhO1[BrTQoDKesEx0].HbWg2x;
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
            QWGzo5Ep = kJgYdmLhO1[third].HbWg2x;
            if (OtzrbxUcg > w) {
                third = BrTQoDKesEx0;
                BrTQoDKesEx0 = first;
                first = rbiY72g;
            }
            else {
                if (OtzrbxUcg > P1DM35tI0Y6T) {
                    third = BrTQoDKesEx0;
                    BrTQoDKesEx0 = rbiY72g;
                }
                else if (OtzrbxUcg > QWGzo5Ep)
                    third = rbiY72g;
            }
            rbiY72g++;
        };
    }
    printf ("%d %d\n", kJgYdmLhO1[first].ID, kJgYdmLhO1[first].HbWg2x);
    printf ("%d %d\n", kJgYdmLhO1[BrTQoDKesEx0].ID, kJgYdmLhO1[BrTQoDKesEx0].HbWg2x);
    printf ("%d %d\n", kJgYdmLhO1[third].ID, kJgYdmLhO1[third].HbWg2x);
}

