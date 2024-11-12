int main () {
    char s [(525 - 504)];
    char x [99];
    int QOQxNTeIJo;
    int j;
    int n;
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
    scanf ("%d", &n);
    for (QOQxNTeIJo = 0; QOQxNTeIJo < n; QOQxNTeIJo = QOQxNTeIJo +1) {
        scanf ("%s", &s);
        for (j = 0; s[j]; j = j + 1) {
            if (!((s[j] == '_') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9' && j > 0))) {
                x[QOQxNTeIJo] = 0;
                break;
            }
            else
                x[QOQxNTeIJo] = 1;
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
            };
        };
    }
    {
        QOQxNTeIJo = 0;
        while (QOQxNTeIJo < n) {
            if (x[QOQxNTeIJo] == 0)
                printf ("no\n");
            if (x[QOQxNTeIJo] == 1)
                printf ("yes\n");
            QOQxNTeIJo = QOQxNTeIJo +1;
        };
    }
    return 0;
}

