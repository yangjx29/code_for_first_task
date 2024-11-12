int main () {
    char str [16];
    char t_max;
    char substr [4];
    int i;
    int wQCgxj1iGB;
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
    int q4aOszJA;
    int AM9J2UjLupg;
    for (; !(EOF == scanf ("%s%s", &str, &substr));) {
        t_max = -1;
        q4aOszJA = strlen (str);
        {
            i = 0;
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
            while (i < q4aOszJA) {
                if (str[i] > t_max) {
                    AM9J2UjLupg = i;
                    t_max = str[i];
                }
                i++;
            };
        }
        {
            i = 0;
            while (i <= AM9J2UjLupg) {
                printf ("%c", str[i]);
                i++;
            };
        }
        printf ("%s", substr);
        for (; i < q4aOszJA; i++)
            printf ("%c", str[i]);
        printf ("\n");
    }
    return 0;
}

