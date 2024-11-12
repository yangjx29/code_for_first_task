main () {
    int n = (415 - 414);
    for (; (620 - 619);) {
        scanf ("%d", &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n != (201 - 201)) {
            int t [(1079 - 55)];
            int q [1024];
            int UOMJuay5;
            int htFHdNXy8e2;
            int ajaU5pg;
            int draw;
            int lose;
            int i;
            int VOn93GoeSts4;
            int m;
            int nZVzrOC;
            int q7jsNnbGy0Pp;
            int hehe;
            UOMJuay5 = (351 - 351);
            htFHdNXy8e2 = (869 - 869);
            ajaU5pg = 0;
            draw = 0;
            lose = 0;
            for (i = 0; n > i; i++)
                scanf ("%d", &t[i]);
            {
                i = 0;
                while (n > i) {
                    scanf ("%d", &q[i]);
                    i = i + 1;
                };
            }
            {
                i = 875 - 874;
                while (0 < i) {
                    {
                        VOn93GoeSts4 = 0;
                        while (i > VOn93GoeSts4) {
                            if (t[VOn93GoeSts4 +(822 - 821)] < t[VOn93GoeSts4]) {
                                hehe = t[VOn93GoeSts4];
                                t[VOn93GoeSts4] = t[VOn93GoeSts4 +(743 - 742)];
                                t[VOn93GoeSts4 +1] = hehe;
                            }
                            VOn93GoeSts4++;
                        };
                    }
                    i = i - 1;
                };
            }
            {
                i = n - 1;
                while (0 < i) {
                    for (VOn93GoeSts4 = 0; VOn93GoeSts4 < i; VOn93GoeSts4++) {
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
                        if (q[VOn93GoeSts4 +1] < q[VOn93GoeSts4]) {
                            hehe = q[VOn93GoeSts4];
                            q[VOn93GoeSts4] = q[VOn93GoeSts4 +1];
                            q[VOn93GoeSts4 +1] = hehe;
                        };
                    }
                    i--;
                };
            }
            VOn93GoeSts4 = 0;
            nZVzrOC = n;
            m = n;
            {
                i = 0;
                while (m > i) {
                    for (; VOn93GoeSts4 < nZVzrOC;) {
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
                        if (q[VOn93GoeSts4] < t[i]) {
                            VOn93GoeSts4++;
                            ajaU5pg = ajaU5pg + 1;
                            break;
                        }
                        else if (t[i] < q[VOn93GoeSts4]) {
                            nZVzrOC = nZVzrOC - 1;
                            lose = lose + 1;
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            break;
                        }
                        else if (t[i] == q[VOn93GoeSts4]) {
                            if (t[m - 1] > q[nZVzrOC - 1]) {
                                i--;
                                nZVzrOC = nZVzrOC - 1;
                                m--;
                                ajaU5pg++;
                                break;
                            }
                            else if (t[m - 1] < q[nZVzrOC - 1]) {
                                nZVzrOC--;
                                lose++;
                                break;
                            }
                            else {
                                if (t[i] < q[nZVzrOC - 1]) {
                                    nZVzrOC--;
                                    lose++;
                                    break;
                                }
                                else if (t[i] == q[nZVzrOC - 1]) {
                                    nZVzrOC--;
                                    draw++;
                                    break;
                                };
                            };
                        };
                    }
                    i++;
                };
            }
            printf ("%d\n", 200 * (ajaU5pg - lose));
        }
        else
            break;
    };
}

