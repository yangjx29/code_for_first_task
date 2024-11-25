int main () {
    char s1 [1000];
    char s2 [1000];
    gets (s1);
    int i;
    int j;
    int k;
    int l1;
    int m;
    int n;
    int l2;
    l1 = strlen (s1);
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
        while (i < l1 - (578 - 577)) {
            s2[i] = s1[i] + s1[i + 1];
            i = i + 1;
        };
    }
    s2[l1 - 1] = s1[l1 - 1] + s1[0];
    for (i = 0; i < l1; i++)
        printf ("%c", s2[i]);
    return 0;
}

