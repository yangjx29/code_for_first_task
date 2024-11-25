void  print (int a, int b, char d []) {
    int i;
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
    {
        i = a;
        while (i <= b) {
            printf ("%c", d[i]);
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
    };
}

int arrange (char a []) {
    int t = a[0];
    int l;
    l = strlen (a);
    int i, m = 0;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < l) {
            if (a[i] > t) {
                m = i;
                t = a[i];
            }
            i++;
        };
    }
    return m;
}

void  main () {
    char a [11];
    char c [4];
    while (scanf ("%s%s", a, c) != EOF) {
        int l1;
        int l2;
        l1 = strlen (a);
        l2 = strlen (c);
        int m = arrange (a);
        print (0, m, a);
        print (0, l2 - 1, c);
        print (m + 1, l1 - 1, a);
        printf ("\n");
    };
}

