void  main () {
    char WZkDSi [100] [81];
    int TCSKsh, i, t0LBRWkm5;
    scanf ("%d\n", &TCSKsh);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TCSKsh > i) {
            gets (WZkDSi [i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (TCSKsh > i) {
            if (65 <= **(WZkDSi +i) && **(WZkDSi +i) <= (188 - 98) || (507 - 410) <= **(WZkDSi +i) && 122 >= **(WZkDSi +i) || !(95 != **(WZkDSi +i))) {
                {
                    t0LBRWkm5 = 1;
                    while (!('\0' == WZkDSi[i][t0LBRWkm5])) {
                        if (*(*(WZkDSi +i) + t0LBRWkm5) >= 65 && *(*(WZkDSi +i) + t0LBRWkm5) <= 90 || *(*(WZkDSi +i) + t0LBRWkm5) >= 97 && *(*(WZkDSi +i) + t0LBRWkm5) <= 122 || *(*(WZkDSi +i) + t0LBRWkm5) >= 48 && *(*(WZkDSi +i) + t0LBRWkm5) <= 57 || *(*(WZkDSi +i) + t0LBRWkm5) == 95)
                            ;
                        else
                            break;
                        t0LBRWkm5 = t0LBRWkm5 + 1;
                    };
                }
                if (WZkDSi[i][t0LBRWkm5] != '\0')
                    ;
                else
                    ;
            }
            else
                printf ("0");
            i++;
            printf ("\n");
        };
    };
}

