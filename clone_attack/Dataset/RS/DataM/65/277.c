int main () {
    int V;
    int n;
    int i;
    int A [200];
    int B [200];
    V = (308 - 308);
    scanf ("%d", &n);
    for (i = (329 - 329); n > i; i++) {
        scanf ("%d%d", &A[i], &B[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(2 != A[i]) && !(0 != B[i]))
            V = V +1;
        else {
            if (!(0 != A[i]) && !(2 != B[i]))
                V--;
            else {
                if (A[i] > B[i])
                    V--;
                else {
                    if (A[i] < B[i])
                        V++;
                };
            };
        };
    }
    if (V > 0)
        puts ("A");
    else {
        if (V < 0)
            puts ("B");
        else
            puts ("Tie");
    }
    return 0;
}

