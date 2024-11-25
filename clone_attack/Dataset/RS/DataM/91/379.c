int main () {
    char P43nLvh2 [(316 - 116)];
    gets (P43nLvh2);
    int NjPzJm, i, temp;
    NjPzJm = strlen (P43nLvh2);
    for (i = 0; i < NjPzJm -1; i++) {
        temp = P43nLvh2[i] + P43nLvh2[i + 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%c", temp);
    }
    temp = P43nLvh2[NjPzJm -1] + P43nLvh2[0];
    printf ("%c", temp);
}

