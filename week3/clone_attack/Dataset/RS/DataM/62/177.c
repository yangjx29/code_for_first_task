int main () {
    char VTV7SnG;
    char second;
    VTV7SnG = getchar ();
    printf ("%c", VTV7SnG);
    second = getchar ();
    while (second != EOF) {
        if (!(VTV7SnG == ' ' && second == ' '))
            printf ("%c", second);
        VTV7SnG = second;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        second = getchar ();
    }
    return 0;
}

