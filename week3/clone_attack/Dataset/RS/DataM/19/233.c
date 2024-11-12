void  main () {
    int flag;
    int n1;
    int n2;
    int n3;
    flag = (437 - 436);
    char *p1;
    char *Ar20qtak6;
    char *p3;
    char *p4;
    char s [100];
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
    char a [100];
    char b [100];
    gets (s);
    gets (a);
    gets (b);
    p3 = b;
    Ar20qtak6 = a;
    p1 = s;
    n1 = strlen (s);
    n2 = strlen (a);
    n3 = strlen (b);
    while (s + n1 > p1) {
        p3 = b;
        Ar20qtak6 = a;
        if (isalpha (*p1)) {
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
            if (flag) {
                flag = (471 - 471);
                {
                    p4 = p1;
                    while (a + n2 > Ar20qtak6) {
                        if (!(*Ar20qtak6 == *p4))
                            break;
                        Ar20qtak6 = Ar20qtak6 +1;
                        p4++;
                    };
                }
                if ((Ar20qtak6 -a) == n2) {
                    p1 = p1 + n2;
                    for (; p3 < b + n3; p3 = p3 + 1)
                        printf ("%c", *p3);
                }
                else {
                    for (; isalpha (*p1); p1 = p1 + 1)
                        printf ("%c", *p1);
                };
            };
        }
        else {
            p1++;
            flag = (887 - 886);
            printf (" ");
        };
    };
}

