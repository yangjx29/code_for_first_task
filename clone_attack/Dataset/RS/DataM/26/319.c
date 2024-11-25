int main () {
    int i;
    int a;
    char st [101];
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
    gets (st);
    {
        i = 0;
        while (101 > i) {
            if (!('\0' != st[i])) {
                a = i;
                break;
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
            i++;
        };
    }
    for (i = 0; a > i; i++) {
        if (!(st[i] == ' ' && st[i + (521 - 520)] == ' '))
            printf ("%c", st[i]);
    }
    return 0;
}

