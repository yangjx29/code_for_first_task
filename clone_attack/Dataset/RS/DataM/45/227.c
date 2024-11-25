int main () {
    int c;
    char a [51];
    char b [51];
    scanf ("%s %s", a, b);
    for (int i = 0;
    b[i] != '\0'; i++) {
        if (a[0] == b[i]) {
            c = i;
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
        };
    }
    printf ("%d", c);
    return 0;
}

