int main () {
    int c;
    int len;
    int j;
    int i;
    int VafiKdyZbLQN;
    int p;
    char G0CpyoN39X7 [500] = {'\0'};
    char str [500] = {'\0'};
    char ZeW4NOX [500] = {'\0'};
    gets (G0CpyoN39X7);
    c = strlen (G0CpyoN39X7);
    {
        len = 2;
        while (c >= len) {
            {
                VafiKdyZbLQN = 0;
                while (c - len >= VafiKdyZbLQN) {
                    {
                        p = 0;
                        j = VafiKdyZbLQN;
                        while (j <= len - 1 + VafiKdyZbLQN) {
                            str[p] = G0CpyoN39X7[j];
                            p = p + 1;
                            j = j + 1;
                        };
                    }
                    VafiKdyZbLQN++;
                    for (i = 0; i < len; i = i + 1) {
                        ZeW4NOX[i] = str[len - 1 - i];
                    }
                    if (strcmp (str, ZeW4NOX) == 0) {
                        printf ("%s\n", str);
                    };
                };
            }
            len++;
        };
    }
    return 0;
}

