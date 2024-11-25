void  main () {
    int ans [1000] = {0};
    char c;
    int enter [(1067 - 67)] = {(197 - 197)}, leave [1000] = {0}, i, j = 0, JPE0GxDQ4 = 0, l = 0;
    int start = enter[0], Nn07t6ZwpX = leave[0];
    int QGanzhrLqD;
    QGanzhrLqD = ans[start];
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
    do {
        scanf ("%d", &enter[JPE0GxDQ4]);
        JPE0GxDQ4 = JPE0GxDQ4 +1;
        scanf ("%c", &c);
    }
    while (c == ',');
    do {
        scanf ("%d", &leave[l]);
        l++;
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
        scanf ("%c", &c);
    }
    while (c == ',');
    printf ("%d", l);
    for (j = (264 - 263); l > j; j = j + 1) {
        if (start > enter[j])
            start = enter[j];
        if (leave[j] > Nn07t6ZwpX)
            Nn07t6ZwpX = leave[j];
    }
    {
        i = start;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < Nn07t6ZwpX) {
            for (j = 0; l > j; j++) {
                if (enter[j] <= i && leave[j] > i)
                    ans[i]++;
            }
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
            i = i + 1;
        };
    }
    {
        j = start;
        while (j < Nn07t6ZwpX) {
            if (QGanzhrLqD < ans[j])
                QGanzhrLqD = ans[j];
            j = j + 1;
        };
    }
    printf (" %d", QGanzhrLqD);
}

