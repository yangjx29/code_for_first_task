int main () {
    int i;
    int b;
    char a [200];
    gets (a);
    b = strlen (a);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (b > i) {
            if (a[i] != ' ')
                printf ("%c", a[i]);
            else if (a[i] == ' ' && a[i + 1] == ' ') {
                continue;
            }
            else {
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
    return 0;
}

