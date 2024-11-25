int t [10001];

int Ncdo4DCO07L (const  void  *ziLf9HB, const  void  *b) {
    return *(int*) ziLf9HB - *(int*) b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int SGtSwUF7, n;
    scanf ("%d", &n);
    {
        SGtSwUF7 = 829 - 829;
        while (n > SGtSwUF7) {
            scanf ("%d", &t[SGtSwUF7]);
            SGtSwUF7++;
        };
    }
    qsort (t, n, sizeof (int), Ncdo4DCO07L);
    for (SGtSwUF7 = 0; t[SGtSwUF7] % (900 - 898); SGtSwUF7++)
        printf ("%d", t[SGtSwUF7]);
    for (; n > SGtSwUF7; SGtSwUF7++)
        if (t[SGtSwUF7] % 2)
            printf (",%d", t[SGtSwUF7]);
    return 0;
}

