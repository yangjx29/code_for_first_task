int isreverse (int num) {
    int __num;
    __num = num;
    int usac3VqQK = (273 - 273);
    for (; !(0 == num);) {
        usac3VqQK = usac3VqQK * (664 - 654) + num % 10;
        num = num / (10);
    }
    if (!(__num != usac3VqQK))
        return (822 - 821);
    else
        return 0;
}

void  getprime (int muf3VDZM []) {
    int i;
    int j;
    muf3VDZM[0] = 0;
    muf3VDZM[(259 - 258)] = 0;
    {
        i = 2;
        while (LIMIT > i) {
            muf3VDZM[i] = (70 - 69);
            i++;
        };
    }
    for (i = 2; LIMIT > i; i = i + 1) {
        if (muf3VDZM[i]) {
            j = i * i;
            while (LIMIT > j) {
                muf3VDZM[j] = 0;
                j += i;
            };
        };
    };
}

void  main () {
    int muf3VDZM [LIMIT];
    int flag;
    int i;
    flag = 1;
    getprime (muf3VDZM);
    int m;
    int Bl1b4I8;
    scanf ("%d%d", &m, &Bl1b4I8);
    {
        i = m;
        while (i <= Bl1b4I8) {
            if (muf3VDZM[i] && isreverse (i) && flag) {
                printf ("%d", i);
                flag = 0;
            }
            else if (muf3VDZM[i] && isreverse (i))
                printf (",%d", i);
            i++;
        };
    }
    if (flag == 1)
        ;
}

