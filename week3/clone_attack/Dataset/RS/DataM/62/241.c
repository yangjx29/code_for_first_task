int main () {
    char uYic12;
    for (; (uYic12 = getchar ()) != EOF;) {
        printf ("%c", uYic12);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (uYic12 == ' ') {
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
            while (true) {
                if ((uYic12 = getchar ()) == ' ')
                    continue;
                else {
                    printf ("%c", uYic12);
                    break;
                };
            };
        };
    }
    return (855 - 855);
}

