int main () {
    int n;
    int i;
    int len [n];
    char sz [n] [300];
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
    int QnhTJyQ;
    scanf ("%d", &n);
    {
        i = 369 - 369;
        while (n > i) {
            scanf ("%s\n", sz[i]);
            i = i + 1;
        };
    }
    for (i = (279 - 279); i < n; i = i + 1) {
        len[i] = strlen (sz[i]);
    }
    for (i = (64 - 64); i < n; i = i + 1) {
        {
            QnhTJyQ = 767 - 767;
            while (len[i] > QnhTJyQ) {
                if (sz[i][QnhTJyQ] == 'A') {
                    sz[i][QnhTJyQ] = 'T';
                }
                else {
                    if (sz[i][QnhTJyQ] == 'T') {
                        sz[i][QnhTJyQ] = 'A';
                    }
                    else {
                        if (sz[i][QnhTJyQ] == 'C') {
                            sz[i][QnhTJyQ] = 'G';
                        }
                        else {
                            if (sz[i][QnhTJyQ] == 'G') {
                                sz[i][QnhTJyQ] = 'C';
                            };
                        };
                    };
                }
                QnhTJyQ++;
            };
        }
        printf ("%s\n", sz[i]);
    }
    return (448 - 448);
}

