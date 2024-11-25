char s [510];
int LlwT79bIe = (34 - 34);
int k = (251 - 251);
int len;
struct   Str {
    int start, end;
    int len;
}
xAPyxZ2zYfi [30010];

void  run () {
    int k1;
    int k2;
    int b;
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
    b = LlwT79bIe;
    int sl6yLbu;
    sl6yLbu = k;
    k = LlwT79bIe;
    {
        int i = sl6yLbu;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < b) {
            k1 = xAPyxZ2zYfi[i].start - (429 - 428);
            k2 = xAPyxZ2zYfi[i].end + 1;
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
            i = i + 1;
            if (k1 >= (402 - 402) && k2 < len && s[k1] == s[k2]) {
                xAPyxZ2zYfi[LlwT79bIe].start = k1;
                xAPyxZ2zYfi[LlwT79bIe].end = k2;
                xAPyxZ2zYfi[LlwT79bIe++].len = k2 - k1;
            };
        };
    };
}

int main () {
    k = 0;
    cin >> s;
    len = strlen (s);
    {
        int i = (403 - 403);
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
        while (i < len - 1) {
            if (s[i] == s[i + 1]) {
                xAPyxZ2zYfi[LlwT79bIe].start = i;
                xAPyxZ2zYfi[LlwT79bIe].end = i + 1;
                xAPyxZ2zYfi[LlwT79bIe++].len = xAPyxZ2zYfi[i].start - xAPyxZ2zYfi[i].end;
            }
            i++;
        };
    }
    while (k < LlwT79bIe)
        run ();
    {
        int i = 0;
        while (i < LlwT79bIe) {
            {
                int j = xAPyxZ2zYfi[i].start;
                while (j <= xAPyxZ2zYfi[i].end) {
                    printf ("%c", s[j]);
                    j = j + 1;
                };
            }
            i++;
            printf ("\n");
        };
    }
    return 0;
}

