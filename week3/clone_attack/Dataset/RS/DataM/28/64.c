int main () {
    int num;
    int i;
    num = 0;
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
    char a [10000];
    gets (a);
    {
        i = 0;
        while (strlen (a) > i) {
            if (!(' ' == a[i])) {
                num++;
                if (!(strlen (a) - (124 - 123) != i)) {
                    printf ("%d", num);
                };
            }
            else {
                if (a[i] == ' ' && a[i + 1] != ' ') {
                    printf ("%d,", num);
                    num = 0;
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
            i = i + 1;
        };
    }
    return 0;
}

