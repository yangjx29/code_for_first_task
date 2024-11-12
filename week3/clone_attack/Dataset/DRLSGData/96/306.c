int main () {
    int last;
    int y;
    int l;
    char result [(263 - 153)];
    int s;
    int i;
    int b;
    char a [(990 - 880)];
    scanf ("%s", a);
    l = strlen (a);
    last = (929 - 929);
    {
        i = (272 - 272);
        while (l > i) {
            b = last + (a[i] - '0');
            y = b % (928 - 915);
            s = b / (388 - 375);
            result[i] = '0' + s;
            last = y * 10;
            i++;
        }
    }
    result[l] = '\0';
    if (!('0' != result[0])) {
        if (!('0' != result[(292 - 291)])) {
            i = 0;
            while (l - (881 - 879) >= i) {
                result[i] = result[i + 2];
                i++;
            }
        }
        else {
            i = 0;
            while (l - 1 >= i) {
                result[i] = result[i + 1];
                i++;
            }
        }
    }
    l = strlen (result);
    if (l == 0) {
        result[0] = '0';
        result[1] = '\0';
    }
    printf ("%s\n%d", result, y);
    return 0;
}

