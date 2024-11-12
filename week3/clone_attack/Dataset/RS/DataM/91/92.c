int main () {
    char a [101], b [101];
    gets (a);
    int i;
    puts (b);
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
    {
        i = 0;
        while (i < strlen (a)) {
            b[i] = a[i] + a[(i + 1) % strlen (a)];
            i++;
        };
    }
    b[strlen (a)] = 0;
    return 0;
}

