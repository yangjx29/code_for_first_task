int main () {
    int A;
    int B;
    int n;
    int i;
    int a;
    int b;
    int c;
    A = 0;
    B = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d", &a, &b);
            if (a == b) {
                continue;
            }
            else {
                if ((a == 2 && !(0 != b)) || (a == 0 && b == 2)) {
                    c = a;
                    a = b;
                    b = c;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a < b) {
                    A = A +1;
                }
                else {
                    B = B +1;
                };
            }
            i = i + 1;
        };
    }
    if (A == B) {
        printf ("Tie");
    }
    else if (A > B) {
        printf ("A");
    }
    else {
        printf ("B");
    }
    return 0;
}

