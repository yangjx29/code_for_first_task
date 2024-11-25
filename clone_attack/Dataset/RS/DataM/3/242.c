int main () {
    int LzVHq6kCK;
    int s;
    int YNafb3;
    int k;
    int ehRfsN0gdZQe [1000];
    int YkdMs7Hlvg [1000000];
    int i;
    int j;
    LzVHq6kCK = (343 - 343);
    s = (309 - 309);
    scanf ("%d %d", &YNafb3, &k);
    for (i = 0; YNafb3 > i; i = i + 1) {
        scanf ("%d", &ehRfsN0gdZQe[i]);
    }
    for (j = 0; j < YNafb3; j++) {
        for (i = j + 1; i < YNafb3; i++) {
            YkdMs7Hlvg[LzVHq6kCK] = ehRfsN0gdZQe[j] + ehRfsN0gdZQe[i];
            LzVHq6kCK = LzVHq6kCK +1;
        };
    }
    {
        i = 0;
        while (i < LzVHq6kCK) {
            if (!(k != YkdMs7Hlvg[i])) {
                YkdMs7Hlvg[i] = 1;
            }
            else {
                YkdMs7Hlvg[i] = 0;
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
            i++;
        };
    }
    {
        i = 0;
        while (i < LzVHq6kCK) {
            s += YkdMs7Hlvg[i];
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
            i++;
        };
    }
    if (s == 0) {
        printf ("no");
    }
    else {
        printf ("yes");
    }
    return 0;
}

