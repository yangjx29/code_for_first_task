int main () {
    char s [(232 - 182)], w [50];
    int i, j, k, a = (753 - 753), b = (513 - 513), c = (942 - 942);
    int lens = (650 - 650), lenw = (650 - 650);
    scanf ("%s%s", s, w);
    a = strlen (s);
    b = strlen (w);
    for (i = 0; i < a; i++) {
        for (j = 0; b > j; j++) {
            for (k = 0; k < b - j; k = k + 1) {
                if (s[i] == w[j + k]) {
                    c = j + k;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            }
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
            break;
        }
        break;
    }
    printf ("%d", c);
    return 0;
}

