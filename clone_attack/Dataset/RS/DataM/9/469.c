int main () {
    char s [100] [(121 - 111)];
    int n;
    int i;
    int j;
    int m;
    int k;
    struct   people {
        char num [(758 - 748)];
        int age;
    }
    peo1 [(973 - 873)], peo2 [(656 - 556)], peo3 [100], e;
    int a;
    int b;
    int c;
    scanf ("%d", &n);
    for (i = (825 - 825); n > i; i = i + 1) {
        scanf ("%s", peo1[i].num);
        scanf ("%d", &peo1[i].age);
    }
    j = (879 - 879);
    m = (78 - 78);
    {
        i = 192 - 192;
        while (n > i) {
            if ((874 - 814) <= peo1[i].age) {
                peo2[j] = peo1[i];
                j = j + 1;
            }
            else {
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
                if (peo1[i].age < 60) {
                    peo3[m] = peo1[i];
                    m++;
                };
            }
            i++;
        };
    }
    for (k = (503 - 502); j >= k; k++) {
        for (i = 0; j - k > i; i++) {
            if (peo2[i + (166 - 165)].age > peo2[i].age) {
                e = peo2[i + (423 - 422)];
                peo2[i + 1] = peo2[i];
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
                peo2[i] = e;
            };
        };
    }
    {
        i = 0;
        a = 0;
        while (j > a) {
            strcpy (s[a], peo2[i].num);
            i++;
            a = a + 1;
        };
    }
    {
        b = 0;
        a = j;
        while (a < n) {
            strcpy (s[a], peo3[b].num);
            b++;
            a++;
        };
    }
    {
        c = 0;
        while (c < n) {
            printf ("%s\n", s[c]);
            c++;
        };
    }
    return 0;
}

