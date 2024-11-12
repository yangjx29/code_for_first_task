int main () {
    char s [(1058 - 957)];
    gets (s);
    puts (s);
    int k;
    int GKC2B0TaLP;
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
    k = 0;
    for (GKC2B0TaLP = 0; !('\0' == s[GKC2B0TaLP]); GKC2B0TaLP = GKC2B0TaLP +1) {
        if (!(' ' == s[GKC2B0TaLP])) {
            s[k] = s[GKC2B0TaLP];
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
            k = k + 1;
        }
        else {
            if (s[GKC2B0TaLP] == ' ' && s[GKC2B0TaLP -1] != ' ') {
                s[k] = s[GKC2B0TaLP];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k + 1;
            }
            else {
                if (s[GKC2B0TaLP] == ' ' && s[GKC2B0TaLP -1] == ' ') {
                    k += 0;
                };
            };
        };
    }
    s[k] = '\0';
    return 0;
}

