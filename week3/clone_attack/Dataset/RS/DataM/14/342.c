struct   ace {
    char id [10];
    int a;
    int b;
}
bPOdhlfU60K [3], Pog4Eq10I7Uj;

void  main () {
    int n;
    int i;
    int xyJ4neQGo [3];
    int m;
    int x2j8iZk;
    int v;
    char Bzh9J5l [10];
    scanf ("%d", &n);
    scanf ("%s %d %d", bPOdhlfU60K[(894 - 894)].id, &bPOdhlfU60K[(390 - 390)].a, &bPOdhlfU60K[(796 - 796)].b);
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
    scanf ("%s %d %d", bPOdhlfU60K[(477 - 476)].id, &bPOdhlfU60K[(38 - 37)].a, &bPOdhlfU60K[(478 - 477)].b);
    scanf ("%s %d %d", bPOdhlfU60K[(924 - 922)].id, &bPOdhlfU60K[(829 - 827)].a, &bPOdhlfU60K[(719 - 717)].b);
    xyJ4neQGo[0] = bPOdhlfU60K[0].a + bPOdhlfU60K[0].b;
    xyJ4neQGo[(967 - 966)] = bPOdhlfU60K[(269 - 268)].a + bPOdhlfU60K[1].b;
    xyJ4neQGo[2] = bPOdhlfU60K[2].a + bPOdhlfU60K[2].b;
    {
        i = 0;
        while (i < 2) {
            for (x2j8iZk = i + 1; x2j8iZk < 3; x2j8iZk++) {
                if (xyJ4neQGo[i] < xyJ4neQGo[x2j8iZk]) {
                    strcpy (Bzh9J5l, bPOdhlfU60K[i].id);
                    strcpy (bPOdhlfU60K[i].id, bPOdhlfU60K[x2j8iZk].id);
                    strcpy (bPOdhlfU60K[x2j8iZk].id, Bzh9J5l);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    v = xyJ4neQGo[i];
                    xyJ4neQGo[i] = xyJ4neQGo[x2j8iZk];
                    xyJ4neQGo[x2j8iZk] = v;
                };
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
            i++;
        };
    }
    {
        i = 0;
        while (n - 3 > i) {
            scanf ("%s %d %d", Pog4Eq10I7Uj.id, &Pog4Eq10I7Uj.a, &Pog4Eq10I7Uj.b);
            m = Pog4Eq10I7Uj.a + Pog4Eq10I7Uj.b;
            if (m > xyJ4neQGo[0]) {
                bPOdhlfU60K[2] = bPOdhlfU60K[1];
                xyJ4neQGo[2] = xyJ4neQGo[1];
                bPOdhlfU60K[1] = bPOdhlfU60K[0];
                bPOdhlfU60K[0] = Pog4Eq10I7Uj;
                xyJ4neQGo[1] = xyJ4neQGo[0];
                xyJ4neQGo[0] = m;
            }
            else if (m <= xyJ4neQGo[0] && m > xyJ4neQGo[1]) {
                bPOdhlfU60K[2] = bPOdhlfU60K[1];
                bPOdhlfU60K[1] = Pog4Eq10I7Uj;
                xyJ4neQGo[2] = xyJ4neQGo[1];
                xyJ4neQGo[1] = m;
            }
            else if (m <= xyJ4neQGo[1] && m > xyJ4neQGo[2]) {
                xyJ4neQGo[2] = m;
                bPOdhlfU60K[2] = Pog4Eq10I7Uj;
            }
            i++;
        };
    }
    printf ("%s %d\n", bPOdhlfU60K[0].id, xyJ4neQGo[0]);
    printf ("%s %d\n", bPOdhlfU60K[1].id, xyJ4neQGo[1]);
    printf ("%s %d\n", bPOdhlfU60K[2].id, xyJ4neQGo[2]);
}

