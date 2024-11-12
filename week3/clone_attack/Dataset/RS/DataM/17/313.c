void  L7Q2s50B4aV (int jAMIltsWP2yb [], int TS9zy2LJc4) {
    int sMt82C0X;
    {
        sMt82C0X = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TS9zy2LJc4 > sMt82C0X) {
            if (!(1 != jAMIltsWP2yb[sMt82C0X])) {
                printf ("$");
            }
            else if (!(0 != jAMIltsWP2yb[sMt82C0X])) {
                printf (" ");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (jAMIltsWP2yb[sMt82C0X] == -1) {
                printf ("?");
            }
            else {
            }
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
            sMt82C0X = sMt82C0X + 1;
        };
    }
    printf ("\n");
}

void  d1sd7Ue2t3o (char yEOhv5J [], int jAMIltsWP2yb [], int TS9zy2LJc4) {
    int sMt82C0X, FiFdTYPU0 [200], p9dsn4HECZr = -1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    TS9zy2LJc4 = strlen (yEOhv5J);
    {
        sMt82C0X = 0;
        while (sMt82C0X < TS9zy2LJc4) {
            if ((yEOhv5J[sMt82C0X] != '(') && (yEOhv5J[sMt82C0X] != ')'))
                jAMIltsWP2yb[sMt82C0X] = 0;
            else {
                if (yEOhv5J[sMt82C0X] == '(') {
                    p9dsn4HECZr = p9dsn4HECZr + 1;
                    FiFdTYPU0[p9dsn4HECZr] = sMt82C0X;
                    jAMIltsWP2yb[sMt82C0X] = 1;
                }
                else {
                    if (p9dsn4HECZr > -1) {
                        jAMIltsWP2yb[FiFdTYPU0[p9dsn4HECZr]] = 0;
                        jAMIltsWP2yb[sMt82C0X] = 0;
                        p9dsn4HECZr = p9dsn4HECZr - 1;
                    }
                    else
                        jAMIltsWP2yb[sMt82C0X] = -1;
                };
            }
            sMt82C0X++;
        };
    };
}

void  aIhHVP () {
    int jAMIltsWP2yb [200], TS9zy2LJc4;
    char yEOhv5J [200];
    while (scanf ("%s", yEOhv5J) != EOF) {
        puts (yEOhv5J);
        TS9zy2LJc4 = strlen (yEOhv5J);
        d1sd7Ue2t3o (yEOhv5J, jAMIltsWP2yb, TS9zy2LJc4);
        L7Q2s50B4aV (jAMIltsWP2yb, TS9zy2LJc4);
    };
}

main () {
    aIhHVP ();
}

