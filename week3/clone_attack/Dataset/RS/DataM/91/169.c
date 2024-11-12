int main () {
    char a [101] = {'\0'};
    char b [101] = {'\0'};
    char *pa = a;
    char *pb = b;
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
    int i;
    gets (a);
    printf ("%s", b);
    for (i = 0; strlen (a) - 1 > i; i = i + 1) {
        *pb = *pa + *(pa + 1);
        pa++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pb = pb + 1;
    }
    *pb = *pa + *a;
    return 0;
}

