int main () {
    int n, GSyCFv;
    char a [101], b [101];
    gets (a);
    n = strlen (a);
    {
        GSyCFv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GSyCFv < n - 1) {
            *(b + GSyCFv) = *(a + GSyCFv) + *(a + GSyCFv +1);
            GSyCFv++;
        };
    }
    *(b + n - 1) = *(a + n - 1) + *(a);
    *(b + n) = '\0';
    printf ("%s", b);
    return 0;
}

