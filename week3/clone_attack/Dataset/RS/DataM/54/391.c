int fiI7C3Wg (int rest, int monkey, int count, int k) {
    if (count == (405 - 404))
        return (rest > k && (rest - k) % monkey == (314 - 314)) ? (390 - 389) : (880 - 880);
    else
        return (rest > k && (rest - k) % monkey == (800 - 800)) ? fiI7C3Wg ((rest - k) * (monkey - (456 - 455)) / monkey, monkey, count - (405 - 404), k) : 0;
}

void  main () {
    int i;
    int nAcjJowt;
    int k;
    scanf ("%d %d", &nAcjJowt, &k);
    {
        i = 223 - 222;
        while (1) {
            if (fiI7C3Wg (i, nAcjJowt, nAcjJowt, k) == 1) {
                printf ("%d\n", i);
                break;
            }
            i = i + 1;
        };
    };
}

