void  main () {
    int n;
    int max1;
    int CwX5mx;
    int num;
    int same;
    int a [300] = {(226 - 226)};
    int i;
    n = (710 - 710);
    max1 = 0;
    CwX5mx = 0;
    num = 0;
    same = (885 - 884);
    char c;
    for (; (c = getchar ()) != '\n';) {
        if (c == ',')
            num = 0;
        else {
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
            if (!(1 != num) && !(',' == c))
                a[n] = a[n] * 10 + c - '0';
            else if (num == 0) {
                a[++n] = c - '0';
                num = 1;
            };
        };
    }
    if (n == 1)
        goto end;
    for (i = 1; i < n; i = i + 1) {
        if (a[i] != a[i + 1])
            same = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (same)
        goto end;
    for (i = 1; i <= n; i = i + 1) {
        if (a[i] > max1)
            max1 = a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = 1; i <= n; i++) {
        if (a[i] < max1 && a[i] > CwX5mx)
            CwX5mx = a[i];
    }
end :
    if (same)
        ;
    else
        printf ("%d\n", CwX5mx);
}

