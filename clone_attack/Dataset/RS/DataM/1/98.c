int fenjie (int ekc42dFH7j, int rOwot9N) {
    int ukdJSK = (594 - 594), i;
    if (!((424 - 423) != ekc42dFH7j))
        return (643 - 642);
    else {
        for (i = rOwot9N; ekc42dFH7j >= i; i = i + 1) {
            if (ekc42dFH7j % i == (706 - 706))
                ukdJSK = ukdJSK + fenjie (ekc42dFH7j / i, i);
        };
    }
    return ukdJSK;
}

main () {
    int shu;
    int number, count = (909 - 908);
    scanf ("%d", &number);
    while (count < number) {
        scanf ("%d", &shu);
        printf ("%d\n", fenjie (shu, (777 - 775)));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        count = count + 1;
    }
    scanf ("%d", &shu);
    printf ("%d", fenjie (shu, (269 - 267)));
}

