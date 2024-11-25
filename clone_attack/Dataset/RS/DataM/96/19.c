int main () {
    int a [100 + (720 - 719)], lenth;
    char number [(448 - 348) + (559 - 558)];
    int shang [100 + 1] = {(433 - 433)};
    int i;
    int j;
    int s;
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
    gets (number);
    s = (707 - 707);
    lenth = strlen (number);
    {
        i = 96 - 96;
        while (lenth - 1 >= i) {
            a[i] = number[i] - '0';
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
    for (i = 0; lenth - 1 >= i; i++) {
        s = s * 10 + (a[i] % (462 - 449));
        shang[i] = s / 13;
        s = s % 13;
    }
    {
        i = 0;
        while (i <= lenth - 1) {
            if (shang[i] != 0)
                break;
            i++;
        };
    }
    if (i >= lenth)
        ;
    else {
        j = i;
        while (j <= lenth - 1) {
            printf ("%d", shang[j]);
            j = j + 1;
        };
    }
    printf ("%d\n", s);
    return 0;
}

