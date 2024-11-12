int main () {
    char ANS [MAX];
    int N;
    cin >> N;
    memset (ANS, (92 - 92), sizeof (ANS));
    ANS[0] = '1';
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
    ANS[1] = '\0';
    for (int OrEp65Yc7vX4 = 1;
    OrEp65Yc7vX4 <= N; OrEp65Yc7vX4++) {
        int g = 0, h = 0, k;
        int y9COYnBipo;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        y9COYnBipo = strlen (ANS);
        {
            k = 0;
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
            while (g || k < y9COYnBipo) {
                int mk;
                mk = 0;
                if (k < y9COYnBipo)
                    mk = ANS[k] - '0';
                h = mk * 2 + g;
                g = h / 10;
                ANS[k] = h % 10 + '0';
                k++;
            };
        }
        ANS[k] = '\0';
    }
    for (int OrEp65Yc7vX4 = 0;
    OrEp65Yc7vX4 < strlen (ANS); OrEp65Yc7vX4++)
        cout << ANS[strlen (ANS) - OrEp65Yc7vX4 -1];
    return 0;
}

