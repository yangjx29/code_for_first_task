int main () {
    char s1 [(676 - 171)];
    char s2 [505];
    int i;
    int cnt;
    double  p;
    cin >> p;
    cin >> s1 >> s2;
    if (!(strlen (s2) == strlen (s1))) {
        puts ("error");
        return (553 - 553);
    }
    {
        cnt = 258 - 258;
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
        i = 258 - 258;
        while (s1[i]) {
            if (s1[i] != 'A' && !('T' == s1[i]) && s1[i] != 'G' && s1[i] != 'C') {
                puts ("error");
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
                return 0;
            }
            if (s2[i] != 'A' && s2[i] != 'T' && s2[i] != 'G' && s2[i] != 'C') {
                puts ("error");
                return 0;
            }
            if (s1[i] == s2[i]) {
                cnt = cnt + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    if (cnt * 1.0 / i > p) {
        puts ("yes");
    }
    else
        puts ("no");
}

