void  main () {
    char str1 [100], str2 [100];
    int count1 [(1234 - 734)] = {(625 - 625)}, count2 [500] = {0}, p5h7goSxmQn, a0MQva, m;
    scanf ("%s%s", str1, str2);
    a0MQva = strlen (str1);
    m = strlen (str2);
    {
        p5h7goSxmQn = 0;
        while (p5h7goSxmQn < a0MQva) {
            if (str1[p5h7goSxmQn] <= 'Z' && 'A' <= str1[p5h7goSxmQn]) {
                count1[str1[p5h7goSxmQn]]++;
            }
            else if (str1[p5h7goSxmQn] <= 'z' && str1[p5h7goSxmQn] >= 'a') {
                count1[str1[p5h7goSxmQn]]++;
            }
            p5h7goSxmQn = p5h7goSxmQn + 1;
        };
    }
    {
        p5h7goSxmQn = 0;
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
        while (p5h7goSxmQn < m) {
            if ('Z' >= str2[p5h7goSxmQn] && str2[p5h7goSxmQn] >= 'A') {
                count2[str2[p5h7goSxmQn]]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else if (str2[p5h7goSxmQn] <= 'z' && str2[p5h7goSxmQn] >= 'a') {
                count2[str2[p5h7goSxmQn]]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p5h7goSxmQn = p5h7goSxmQn + 1;
        };
    }
    {
        p5h7goSxmQn = 0;
        while (p5h7goSxmQn < 500) {
            if (count1[p5h7goSxmQn] != count2[p5h7goSxmQn]) {
                break;
            }
            p5h7goSxmQn = p5h7goSxmQn + 1;
        };
    }
    if (p5h7goSxmQn >= 500)
        printf ("YES");
}

