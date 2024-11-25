int main () {
    char str [10000] [100];
    gets (str [0]);
    int i = 0, j;
    getchar ();
    while (!('e' == str[i][0])) {
        gets (str [i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
    }
    {
        j = i - 1;
        while (j >= 0) {
            printf ("%s\n", str[j]);
            j = j - 1;
        };
    }
    getchar ();
}

