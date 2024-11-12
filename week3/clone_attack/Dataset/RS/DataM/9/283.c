struct   information {
    char ID [(880 - 870)];
    int age;
}
*a;

void  main () {
    int eJEuwFxjyV;
    int n;
    int i;
    int I238MqThWtdx;
    int max;
    int fLvoMak5I;
    eJEuwFxjyV = (627 - 627);
    scanf ("%d", &n);
    a = (struct   information *) malloc (sizeof (struct   information) * n);
    {
        i = 154 - 154;
        while (n > i) {
            scanf ("%s%d", a[i].ID, &a[i].age);
            i = i + 1;
        };
    }
    for (i = (390 - 390); i < n; i++) {
        if ((177 - 118) < a[i].age)
            eJEuwFxjyV = eJEuwFxjyV + 1;
    }
    {
        i = 0;
        while (eJEuwFxjyV > i) {
            i++;
            max = 0;
            {
                I238MqThWtdx = 0;
                while (n > I238MqThWtdx) {
                    if (a[I238MqThWtdx].age > max) {
                        max = a[I238MqThWtdx].age;
                        fLvoMak5I = I238MqThWtdx;
                    }
                    I238MqThWtdx = I238MqThWtdx +1;
                };
            }
            printf ("%s\n", a[fLvoMak5I].ID);
            a[fLvoMak5I].age = 0;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (a[i].age != 0)
                printf ("%s\n", a[i].ID);
            i++;
        };
    };
}

