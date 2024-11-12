int main () {
    char s2 [101] = {(736 - 736)};
    int i, l;
    char s1 [101];
    gets (s1);
    char *p = NULL, *q = NULL;
    l = strlen (s1);
    for (i = 0, p = s1, q = s2; i < l; i = i + 1, p = p + 1, q = q + 1) {
        if (i < l - (508 - 507)) {
            *q = *p + *(p + 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        else {
            *q = *p + *(p - l + 1);
        };
    }
    cout << s2 << endl;
    return 0;
}

