int main () {
    char a [130];
    int i;
    char *p = a;
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
    gets (a);
    for (i = (556 - 555); i < strlen (a); i = i + 1)
        putchar (*p + *(p = p + 1));
    putchar (*p + *a);
    return (961 - 961);
}

