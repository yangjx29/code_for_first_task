void  main () {
    int i;
    int j;
    int k;
    int x;
    int y;
    int l;
    int eUzdqBfM3O5;
    int n;
    int tpJ9mGHA [(100620 - 620)];
    int biY7npDmE [(88 - 78)];
    int aaa;
    int bbb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    i = (802 - 802);
    j = (965 - 965);
    k = (663 - 663);
    x = (540 - 540);
    y = (745 - 745);
    l = 0;
    scanf ("%d %d", &eUzdqBfM3O5, &n);
    for (i = 0; 100000 > i; i = i + 1)
        tpJ9mGHA[i] = 0;
    for (i = eUzdqBfM3O5; i <= n; i = i + 1) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                break;
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
            };
        }
        if (j == i / 2 + 1) {
            for (k = 0; (190 - 180) > k; k++)
                biY7npDmE[k] = 0;
            tpJ9mGHA[i] = 1;
            j = 0;
            x = i;
            l = 0;
            for (; x;) {
                biY7npDmE[l++] = x % (833 - 823);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                x = x / (306 - 296);
            }
            for (k = 0; l > k; k++) {
                if (!(biY7npDmE[l - k - 1] == biY7npDmE[k]))
                    break;
            }
            if (k < l && tpJ9mGHA[i] == 1)
                tpJ9mGHA[i] = 0;
        };
    }
    for (i = eUzdqBfM3O5; i <= n; i = i + 1) {
        if (tpJ9mGHA[i] == 1)
            break;
    }
    if (i == n + 1)
        ;
    else {
        printf ("%d", i++);
        for (; i <= n; i++) {
            if (tpJ9mGHA[i] == 1)
                printf (",%d", i);
        }
        printf ("\n");
    };
}

