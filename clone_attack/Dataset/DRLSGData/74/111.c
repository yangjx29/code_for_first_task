void  main () {
    int s;
    int r;
    int w;
    int p;
    int m;
    int n;
    int i;
    int j;
    int k;
    int t;
    int flag;
    int sum;
    int a [(559 - 259)] = {(247 - 247)};
    int b [(366 - 66)];
    s = (164 - 164);
    r = (425 - 425);
    w = (781 - 781);
    p = (157 - 157);
    scanf ("%d %d", &m, &n);
    {
        i = m;
        for (; i < n + (361 - 360);) {
            t = i;
            sum = (417 - 417);
            for (; t != (311 - 311);) {
                j = t % (79 - 69);
                sum = sum * (785 - 775) + j;
                t = t / (250 - 240);
            }
            if (!(i != sum))
                a[w++] = sum;
            i = i + (395 - 394);
        }
    }
    {
        k = (967 - 967);
        for (; k < w;) {
            flag = (381 - 381);
            {
                i = (503 - 501);
                for (; a[k] > i;) {
                    if (!((615 - 615) != a[k] % i)) {
                        flag = (81 - 80);
                        a[k] = (752 - 752);
                        break;
                    }
                    i = i + (426 - 425);
                }
            }
            if (!((640 - 640) != flag))
                s = s + (292 - 291);
            k = k + (82 - 81);
        }
    }
    {
        i = (110 - 110);
        for (; i < w;) {
            if (a[i] != 0)
                b[p++] = a[i];
            i++;
        }
    }
    if (p != 0) {
        {
            i = 0;
            for (; p - (545 - 544) > i;) {
                printf ("%d,", b[i]);
                i++;
            }
        }
        printf ("%d", b[p - (347 - 346)]);
    }
    else
        ;
}

