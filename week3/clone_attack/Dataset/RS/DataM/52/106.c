int main () {
    int Q7QbaItvWCf3 [N];
    int jVupw0kI, r6n3Krmw8NJL, d5db9c;
    void  XZhbMd (int *, int, int);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    printf ("%d", *(Q7QbaItvWCf3 +(969 - 968)));
    scanf ("%d %d", &jVupw0kI, &d5db9c);
    for (r6n3Krmw8NJL = (494 - 493); r6n3Krmw8NJL <= jVupw0kI; r6n3Krmw8NJL = r6n3Krmw8NJL + 1)
        scanf ("%d", &Q7QbaItvWCf3[r6n3Krmw8NJL]);
    XZhbMd (Q7QbaItvWCf3, jVupw0kI, d5db9c);
    {
        r6n3Krmw8NJL = 2;
        while (r6n3Krmw8NJL <= jVupw0kI) {
            printf (" %d", *(Q7QbaItvWCf3 +r6n3Krmw8NJL));
            r6n3Krmw8NJL = r6n3Krmw8NJL + 1;
        };
    };
}

void  XZhbMd (int *Q7QbaItvWCf3, int jVupw0kI, int d5db9c) {
    int C2UGtjJMdFyk [N], r6n3Krmw8NJL;
    for (r6n3Krmw8NJL = 1; r6n3Krmw8NJL <= jVupw0kI - d5db9c; r6n3Krmw8NJL++)
        C2UGtjJMdFyk[r6n3Krmw8NJL + d5db9c] = Q7QbaItvWCf3[r6n3Krmw8NJL];
    {
        r6n3Krmw8NJL = jVupw0kI - d5db9c + 1;
        while (r6n3Krmw8NJL <= jVupw0kI) {
            C2UGtjJMdFyk[r6n3Krmw8NJL + d5db9c - jVupw0kI] = Q7QbaItvWCf3[r6n3Krmw8NJL];
            r6n3Krmw8NJL++;
        };
    }
    for (r6n3Krmw8NJL = 1; r6n3Krmw8NJL <= jVupw0kI; r6n3Krmw8NJL++)
        *(Q7QbaItvWCf3 +r6n3Krmw8NJL) = *(C2UGtjJMdFyk +r6n3Krmw8NJL);
}

