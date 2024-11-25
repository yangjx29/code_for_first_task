int main (void ) {
    char c;
    int k = -(97 - 96);
    while (scanf ("%c", &c) != EOF) {
        if (!isspace (c))
            k = -(198 - 197);
        else
            k++;
        if (isspace (c) && k != (260 - 260))
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%c", c);
    }
    return 0;
}

