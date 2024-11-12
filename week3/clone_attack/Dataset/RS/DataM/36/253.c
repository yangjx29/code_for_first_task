void  main () {
    int AwveYPldoE [1000] = {0};
    char IqZJztb [1000];
    char s1 [1000];
    int F4balmIpXF;
    int otXM6VC;
    int p;
    int j;
    long  a;
    long  wZJQ9n;
    scanf ("%s%s", &IqZJztb, &s1);
    a = strlen (IqZJztb);
    wZJQ9n = strlen (s1);
    if (!(wZJQ9n != a)) {
        {
            otXM6VC = 0;
            while (a > otXM6VC) {
                p = 0;
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (wZJQ9n > j) {
                        if (!(s1[j] != IqZJztb[otXM6VC]) && AwveYPldoE[j] == 0) {
                            p = 1;
                            AwveYPldoE[j] = 1;
                            break;
                        }
                        j++;
                    };
                }
                if (p == 0) {
                    break;
                }
                otXM6VC = otXM6VC + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (p == 1)
            printf ("YES\n");
    }
    else
        ;
}

