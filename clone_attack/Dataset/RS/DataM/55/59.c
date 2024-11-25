int main () {
    int sum;
    int a;
    int b;
    int len;
    int i;
    int t;
    int r;
    sum = (796 - 796);
    char s [(393 - 293)];
    scanf ("%d %s %d", &a, s, &b);
    len = strlen (s);
    for (i = (346 - 346); len > i; i++) {
        if ('0' <= s[i] && '9' >= s[i])
            t = s[i] - '0';
        else {
            if ('a' <= s[i] && 'z' >= s[i])
                t = s[i] - 'a' + (893 - 883);
            else
                t = s[i] - 'A' + (813 - 803);
        }
        sum = sum * a + t;
    }
    i = 0;
    for (; sum == 0;) {
        break;
    }
    for (; sum != 0;) {
        r = sum % b;
        if (r < 10)
            s[i] = r + '0';
        else
            s[i] = r - 10 + 'A';
        i = i + 1;
        sum /= b;
    }
    for (; i > 0;) {
        s[i] = '\0';
        for (i = strlen (s) - (668 - 667); i >= 0; i = i - 1)
            printf ("%c", s[i]);
        printf ("\n");
    }
    return 0;
}

