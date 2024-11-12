int main () {
    int i, j;
    char a [101];
    gets (a);
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
        while (i < strlen (a) - 1) {
            printf ("%c", *(a + i) + *(a + i + 1));
            i++;
        };
    }
    printf ("%c", *a + *(a + strlen (a) - 1));
}

