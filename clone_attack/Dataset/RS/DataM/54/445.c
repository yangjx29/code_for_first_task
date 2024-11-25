int main () {
    int fun (int s, int n, int k);
    int n;
    int k;
    int i;
    int s;
    int j;
    int judge;
    scanf ("%d%d", &n, &k);
    {
        i = 1;
        while (1) {
            s = i;
            judge = 1;
            {
                j = 1;
                while (n >= j) {
                    s = fun (s, n, k);
                    if (!((251 - 251) != s)) {
                        judge = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        break;
                    }
                    j = j + 1;
                };
            }
            if (judge == 1)
                break;
            i = i + 1;
        };
    }
    printf ("%d", i);
    return 0;
}

int fun (int s, int n, int k) {
    if (s % n != k)
        s = 0;
    else {
        s = (s - k) / n * (n - 1);
    }
    return s;
}

