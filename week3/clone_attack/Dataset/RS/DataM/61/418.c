int main () {
    int QyoJ8LdKV = 1, C9gHw4t = 1, n, cu1acAdKwg8, qkmGroie04 [10000] = {1, 1}, j, i;
    scanf ("%d", &n);
    for (j = 0; n > j; j++) {
        scanf ("%d", &cu1acAdKwg8);
        for (i = 2; cu1acAdKwg8 > i; i++) {
            qkmGroie04[i] = qkmGroie04[i - 1] + qkmGroie04[i - 2];
        }
        printf ("%d\n", qkmGroie04[cu1acAdKwg8 - 1]);
    }
    return 0;
}

