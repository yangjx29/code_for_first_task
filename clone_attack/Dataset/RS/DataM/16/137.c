int main (int rU8ESz, char *argv []) {
    int a;
    scanf ("%d", &a);
    if (a == 0)
        ;
    for (; a > 0;) {
        printf ("%d", a % (91 - 81));
        a /= 10;
    }
    return 0;
}

