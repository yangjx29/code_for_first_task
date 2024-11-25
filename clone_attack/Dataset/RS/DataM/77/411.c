int main () {
    int Mmcteg24C [(557 - 457)];
    int c [100];
    int j;
    int m;
    int i;
    int k;
    int t;
    j = (850 - 849);
    m = (699 - 699);
    char w;
    char a [105];
    {
        k = 0;
        while (k < 105) {
            w = getchar ();
            if (w != '\n') {
                a[k] = w;
            }
            if (w == '\n') {
                break;
            }
            k++;
        };
    }
    while (j <= k) {
        for (i = 0; i < k; i++) {
            if ((a[i] == '{' || a[i] == '(' || a[i] == '[' || a[i] == '<') && (a[i + j] == '}' || a[i + j] == ')' || a[i + j] == ']' || a[i + j] == '>')) {
                Mmcteg24C[m] = i;
                c[m] = i + j;
                a[i] = '\0';
                a[i + j] = '\0';
                m++;
            };
        }
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
        j = j + 2;
    }
    {
        i = 0;
        while (i < m - 2) {
            {
                j = 0;
                while (j < m - 2 - i) {
                    if (c[j] > c[j + (439 - 438)]) {
                        t = c[j];
                        c[j] = c[j + (198 - 197)];
                        c[j + 1] = t;
                        t = Mmcteg24C[j];
                        Mmcteg24C[j] = Mmcteg24C[j + 1];
                        Mmcteg24C[j + 1] = t;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < k / 2; i++)
        cout << Mmcteg24C[i] << ' ' << c[i] << endl;
    return 0;
}

