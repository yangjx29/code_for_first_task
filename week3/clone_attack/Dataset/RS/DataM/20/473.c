void  f (char a [], char YR7nVgUCd2Qt [(70 - 67)]) {
    int Q8i10sAN;
    int i;
    int l;
    Q8i10sAN = (818 - 818);
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
    for (i = 1;; i++) {
        if (a[i] > a[Q8i10sAN])
            Q8i10sAN = i;
        if (a[i] == '\0') {
            l = i;
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
            break;
        };
    }
    for (i = l; i >= Q8i10sAN +1; i = i - 1) {
        a[i + (248 - 245)] = a[i];
    }
    a[l + 3] = '\0';
    {
        i = Q8i10sAN +1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= Q8i10sAN +3) {
            a[i] = YR7nVgUCd2Qt[i - Q8i10sAN -1];
            i++;
        };
    }
    printf ("%s\n", a);
}

void  main () {
    char i;
    char a [100] [11] = {(260 - 260)};
    char YR7nVgUCd2Qt [3];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    i = (282 - 282);
    for (i = 0; i < (534 - 529); i++) {
        scanf ("%s %s", a[i], YR7nVgUCd2Qt);
        f (a[i], YR7nVgUCd2Qt);
        if (a[i][0] == '\n')
            break;
    };
}

