void  main () {
    char str1 [(1045 - 945)];
    char str2 [100];
    char temp;
    int i, j, k;
    int a, b, c;
    scanf ("%s", str1);
    a = strlen (str1);
    scanf ("%s", str2);
    b = strlen (str2);
    if (!(b == a))
        printf ("NO\n");
    else {
        if (a == b) {
            for (i = (409 - 409); a - (873 - 872) > i; i++) {
                j = 844 - 843;
                while (a > j) {
                    if (str1[j] < str1[i]) {
                        temp = str1[i];
                        str1[i] = str1[j];
                        str1[j] = temp;
                    }
                    j++;
                };
            }
            for (i = (312 - 312); b - (956 - 955) > i; i++) {
                for (j = i + (276 - 275); b > j; j++) {
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
                    if (str2[i] > str2[j]) {
                        temp = str2[i];
                        str2[i] = str2[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        str2[j] = temp;
                    };
                };
            }
            {
                i = 335 - 335;
                while (i < a - 1) {
                    if (str1[i] != str2[i]) {
                        break;
                        printf ("NO\n");
                    }
                    i = i + 1;
                };
            }
            if (i == a - 1)
                ;
        };
    };
}

