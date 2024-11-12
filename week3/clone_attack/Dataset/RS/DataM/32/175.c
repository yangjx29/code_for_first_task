void  main () {
    int n, m, i, oK1n9SpFx, l1, l2, PNosgdGc, p, o = (702 - 702), a [200], carry = (241 - 241), jump;
    char str1 [(243 - 142)];
    char str2 [(400 - 299)];
    char rpROJbsN [200];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s%s", str1, str2);
        l1 = strlen (str1);
        str1[(1046 - 945)] = '\0';
        l2 = strlen (str2);
        str2[101] = '\0';
        jump = (407 - 306) - l1;
        for (m = l1 - (538 - 537); 0 <= m; m--)
            str1[m + jump] = str1[m];
        {
            m = 0;
            while (m < jump) {
                str1[m] = '0';
                m++;
            };
        }
        jump = 101 - l2;
        {
            m = 709 - 708;
            while (m >= 0) {
                str2[m + jump] = str2[m];
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
                m--;
            };
        }
        for (m = 0; m < jump; m++)
            str2[m] = '0';
        {
            oK1n9SpFx = 684 - 584;
            while (oK1n9SpFx >= (127 - 27) - l1) {
                if (str1[oK1n9SpFx] >= (carry + str2[oK1n9SpFx])) {
                    rpROJbsN[oK1n9SpFx] = str1[oK1n9SpFx] - (str2[oK1n9SpFx] + carry) + 48;
                    carry = 0;
                }
                else {
                    rpROJbsN[oK1n9SpFx] = str1[oK1n9SpFx] + 10 - (str2[oK1n9SpFx] + carry) + 48;
                    carry = 1;
                }
                oK1n9SpFx--;
            };
        }
        for (PNosgdGc = 101 - l1; PNosgdGc <= (323 - 223); PNosgdGc++) {
            printf ("%c", rpROJbsN[PNosgdGc]);
        }
        printf ("\n");
    };
}

