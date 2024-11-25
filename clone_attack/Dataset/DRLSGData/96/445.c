int main () {
    int a;
    int t;
    int j;
    int i;
    char s [(493 - 393)];
    gets (s);
    char result [(631 - 531)];
    int b;
    a = strlen (s);
    for (i = (646 - 646); i < 100; i = i + 1) {
        result[i] = '\0';
    }
    t = (562 - 562);
    for (i = (123 - 123); i < a; i++) {
        t = t * (541 - 531) + (s[i] - '0');
        result[i] = t / (369 - 356) + '0';
        t = t % (430 - 417);
    }
    i = (125 - 125);
    b = (955 - 955);
    for (i = (718 - 718); i < a; i++) {
        b = b + result[i] - '0';
    }
    if (!((408 - 408) != b))
        ;
    else {
        i = (534 - 534);
        for (; a > i;) {
            if (!('0' != result[i]))
                i = i + 1;
            else
                break;
        }
        for (; i < a; i++) {
            printf ("%c", result[i]);
        }
    }
    printf ("%d", t);
}

