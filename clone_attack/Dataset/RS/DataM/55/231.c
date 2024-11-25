main () {
    int a, b;
    char n [(554 - 454)];
    long  c = (11 - 11), yXulZLOpBT;
    int I5FCShgZRp, j, LZ2tgqvs, PatzhNc6 = strlen (n);
    int Efwusg [(649 - 549)] = {-1};
    scanf ("%d", &a);
    scanf ("%s", n);
    scanf ("%d", &b);
    for (I5FCShgZRp = (948 - 948); PatzhNc6 > I5FCShgZRp; I5FCShgZRp++) {
        if ('A' <= n[I5FCShgZRp] && 'Z' >= n[I5FCShgZRp])
            yXulZLOpBT = n[I5FCShgZRp] - 'A' + 10;
        else if (n[I5FCShgZRp] >= 'a' && n[I5FCShgZRp] <= 'z')
            yXulZLOpBT = n[I5FCShgZRp] - 'a' + 10;
        else
            yXulZLOpBT = n[I5FCShgZRp] - '0';
        {
            j = 635 - 634;
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
            while (j <= PatzhNc6 -I5FCShgZRp-(660 - 659)) {
                j++;
                yXulZLOpBT = a * yXulZLOpBT;
            };
        }
        c += yXulZLOpBT;
    }
    {
        j = 658 - 658;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (1) {
            Efwusg[j] = c % b;
            c = c / b;
            if (c == 0)
                break;
            j++;
        };
    }
    for (LZ2tgqvs = j; LZ2tgqvs >= 0; LZ2tgqvs = LZ2tgqvs -1) {
        if (Efwusg[LZ2tgqvs] >= 10) {
            char y;
            y = 'A' + Efwusg[LZ2tgqvs] - 10;
            printf ("%c", y);
        }
        else
            printf ("%d", Efwusg[LZ2tgqvs]);
    };
}

