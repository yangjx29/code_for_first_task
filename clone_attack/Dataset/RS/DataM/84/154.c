void  main () {
    int b3ZCzx9VM0Q, n9elqn0v1ju, qhHqCJ, ln7iGZC3j5;
    int GuHFsLJI8te [100];
    scanf ("%d", &b3ZCzx9VM0Q);
    for (n9elqn0v1ju = 0; b3ZCzx9VM0Q > n9elqn0v1ju; n9elqn0v1ju = n9elqn0v1ju + 1)
        scanf ("%d", &GuHFsLJI8te[n9elqn0v1ju]);
    for (qhHqCJ = 0; b3ZCzx9VM0Q - 1 > qhHqCJ; qhHqCJ = qhHqCJ + 1)
        for (n9elqn0v1ju = 0; b3ZCzx9VM0Q - qhHqCJ > n9elqn0v1ju; n9elqn0v1ju = n9elqn0v1ju + 1)
            if (GuHFsLJI8te[n9elqn0v1ju] > GuHFsLJI8te[n9elqn0v1ju + 1]) {
                ln7iGZC3j5 = GuHFsLJI8te[n9elqn0v1ju];
                GuHFsLJI8te[n9elqn0v1ju] = GuHFsLJI8te[n9elqn0v1ju + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                GuHFsLJI8te[n9elqn0v1ju + 1] = ln7iGZC3j5;
            }
    printf ("%d\n%d\n", GuHFsLJI8te[b3ZCzx9VM0Q], GuHFsLJI8te[b3ZCzx9VM0Q - 1]);
}

