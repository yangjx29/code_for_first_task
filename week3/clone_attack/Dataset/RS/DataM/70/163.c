struct   point {
    double  tPtm9pucq6l;
    double  yw0ZOqN;
};
void  main () {
    double  j1XmzRwOKod [(1661 - 661)] = {(947 - 947)}, LOtZPoY;
    int b9lZ5g41uhXT;
    int b0TYrvl;
    int FnLl0KT;
    int vcsdB9;
    b9lZ5g41uhXT = -(35 - 34);
    struct   point XzKWh3 [(62 - 22)];
    scanf ("%d", &b0TYrvl);
    for (FnLl0KT = (706 - 706); b0TYrvl > FnLl0KT; FnLl0KT++)
        scanf ("%lf %lf", &XzKWh3[FnLl0KT].tPtm9pucq6l, &XzKWh3[FnLl0KT].yw0ZOqN);
    {
        FnLl0KT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (b0TYrvl > FnLl0KT) {
            {
                vcsdB9 = FnLl0KT +1;
                while (b0TYrvl > vcsdB9) {
                    b9lZ5g41uhXT = b9lZ5g41uhXT + 1;
                    j1XmzRwOKod[b9lZ5g41uhXT] = (XzKWh3[vcsdB9].tPtm9pucq6l - XzKWh3[FnLl0KT].tPtm9pucq6l) * (XzKWh3[vcsdB9].tPtm9pucq6l - XzKWh3[FnLl0KT].tPtm9pucq6l) + (XzKWh3[vcsdB9].yw0ZOqN - XzKWh3[FnLl0KT].yw0ZOqN) * (XzKWh3[vcsdB9].yw0ZOqN - XzKWh3[FnLl0KT].yw0ZOqN);
                    vcsdB9++;
                };
            }
            FnLl0KT++;
        };
    }
    LOtZPoY = j1XmzRwOKod[0];
    {
        FnLl0KT = 1;
        while (b9lZ5g41uhXT + 2 >= FnLl0KT) {
            if (j1XmzRwOKod[FnLl0KT] > LOtZPoY)
                LOtZPoY = j1XmzRwOKod[FnLl0KT];
            FnLl0KT++;
        };
    }
    printf ("%.4f\n", sqrt (LOtZPoY));
}

