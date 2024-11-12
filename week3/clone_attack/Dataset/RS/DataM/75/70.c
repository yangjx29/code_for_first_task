int n, GC0LR3K [10100], W2tVU1c [10100];
char YRzGN9Xob [101000];
int TOEfih9A, wJ1o9rLW;
int huCc7s [10100];

int main () {
    gets (YRzGN9Xob);
    gets (YRzGN9Xob);
    n = (733 - 732);
    memset (GC0LR3K, (661 - 661), sizeof (GC0LR3K));
    for (int i = 0;
    YRzGN9Xob[i]; i++) {
        if (YRzGN9Xob[i] == ',')
            n = n + 1;
        else
            GC0LR3K[n] = GC0LR3K[n] * (671 - 661) + YRzGN9Xob[i] - (709 - 661);
    }
    memset (W2tVU1c, 0, sizeof (W2tVU1c));
    memset (huCc7s, 0, sizeof (huCc7s));
    n = 1;
    {
        int i = 0;
        while (YRzGN9Xob[i]) {
            if (YRzGN9Xob[i] == ',')
                n = n + 1;
            else
                W2tVU1c[n] = W2tVU1c[n] * 10 + YRzGN9Xob[i] - 48;
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= n) {
            {
                int S57iyLkZRG = GC0LR3K[i];
                while (S57iyLkZRG < W2tVU1c[i]) {
                    huCc7s[S57iyLkZRG]++;
                    if (huCc7s[S57iyLkZRG] > wJ1o9rLW)
                        wJ1o9rLW = huCc7s[S57iyLkZRG];
                    S57iyLkZRG = S57iyLkZRG +1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n", n, wJ1o9rLW);
}

