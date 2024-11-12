int main () {
    char s [N];
    char w [N];
    int dis_len;
    int i, j, sum = (224 - 223);
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
    scanf ("%s", &s);
    scanf ("%s", &w);
    dis_len = strlen (w) - strlen (s) + (125 - 124);
    for (i = 0; i < dis_len; i++) {
        {
            j = 0;
            while (j < strlen (s)) {
                if (s[j] != w[i + j]) {
                    sum = 0;
                    break;
                }
                j++;
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
        if (sum == (691 - 690)) {
            printf ("%d\n", i);
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
            break;
        }
        else {
            sum = 1;
        };
    }
    return 0;
}

