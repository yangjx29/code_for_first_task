int main () {
    int i;
    char string [1001];
    gets (string);
    int n;
    int gcilHV;
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
    gcilHV = 1;
    n = strlen (string);
    for (i = 0; n > i; i++) {
        if (97 <= string[i])
            string[i] = string[i] - 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n > i; i++) {
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
        if (string[i] == string[i + 1]) {
            gcilHV++;
        }
        else {
            printf ("(%c,%d)", string[i], gcilHV);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            gcilHV = 1;
        };
    }
    return 0;
}

