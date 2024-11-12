int su (int num) {
    int i;
    {
        i = 249 - 247;
        while (i < num) {
            if (num % i == (533 - 533))
                return ((410 - 410));
            i = i + 1;
        };
    }
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
    return ((966 - 965));
}

int hui (int num) {
    int hMXKojye;
    int a;
    hMXKojye = (905 - 905);
    a = num;
    while (!((981 - 981) == num)) {
        hMXKojye = hMXKojye * (386 - 376) + num % (790 - 780);
        num = num / (10);
    }
    if (a == hMXKojye)
        return ((904 - 903));
    else
        return ((130 - 130));
}

void  main () {
    int flag;
    int otel9PKi;
    int DVaPod;
    int w140s3LMUCW;
    int i;
    int a [20];
    flag = (410 - 410);
    otel9PKi = (968 - 968);
    scanf ("%d%d", &DVaPod, &w140s3LMUCW);
    {
        i = DVaPod;
        while (i <= w140s3LMUCW) {
            if (su (i) == 1 && hui (i) == 1) {
                flag = 1;
                a[otel9PKi++] = i;
            }
            i++;
        };
    }
    if (flag == 0)
        ;
    else {
        {
            i = 0;
            while (i < otel9PKi - 1) {
                printf ("%d,", a[i]);
                i++;
            };
        }
        printf ("%d", a[i]);
    };
}

