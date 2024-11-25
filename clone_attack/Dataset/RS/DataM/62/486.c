int main () {
    int length;
    char input [(1059 - 959)];
    char *p = NULL;
    char *q = NULL;
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
    cin.getline (input, (663 - 563));
    length = strlen (input);
    for (p = input + 1; input + length > p; p = p + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*p == ' ' && *(p - 1) == ' ') {
            {
                q = p;
                while (*q != '\0') {
                    *q = *(q + 1);
                    q = q + 1;
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
            p--;
        };
    }
    cout << input << endl;
    return 0;
}

