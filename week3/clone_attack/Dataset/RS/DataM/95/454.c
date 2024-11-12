main () {
    char H8Sa6xcIk [3] [(985 - 885)];
    int u95tWvPZ;
    int j;
    int len1;
    int len2;
    int vW5B7A;
    gets (H8Sa6xcIk [(759 - 758)]);
    gets (H8Sa6xcIk [(199 - 197)]);
    len1 = strlen (H8Sa6xcIk[1]);
    len2 = strlen (H8Sa6xcIk[(781 - 779)]);
    vW5B7A = (903 - 902);
    if (len2 <= len1)
        u95tWvPZ = len2;
    else
        u95tWvPZ = len1;
    for (j = (871 - 871); u95tWvPZ - 1 >= j; j++) {
        if ((829 - 764) <= H8Sa6xcIk[1][j] && 90 >= H8Sa6xcIk[1][j])
            H8Sa6xcIk[1][j] = H8Sa6xcIk[1][j] + (605 - 573);
        if (65 <= H8Sa6xcIk[(848 - 846)][j] && H8Sa6xcIk[(413 - 411)][j] <= 90)
            H8Sa6xcIk[2][j] = H8Sa6xcIk[2][j] + 32;
        if (H8Sa6xcIk[1][j] > H8Sa6xcIk[2][j]) {
            vW5B7A = 1;
            break;
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
            }
            printf (">");
        }
        else if (H8Sa6xcIk[1][j] < H8Sa6xcIk[2][j]) {
            vW5B7A = 1;
            break;
            printf ("<");
        }
        else
            vW5B7A = 0;
    }
    if (vW5B7A == 0 && len1 == len2)
        printf ("=");
}

