int main () {
    int n;
    int LQeYl3HDx;
    void  m (int a, int b);
    scanf ("%d%d", &n, &LQeYl3HDx);
    m (n, LQeYl3HDx);
    return 0;
}

void  m (int a, int b) {
    int m;
    int i;
    int m2xYNA;
    int LQeYl3HDx;
    int sum;
    m = 0;
    for (m2xYNA = 1; m < a - 1; m2xYNA++) {
        LQeYl3HDx = 0;
        sum = m2xYNA * (a - 1);
        while (LQeYl3HDx < a) {
            if ((sum * a / (a - 1) + b) % (a - 1) == 0) {
                LQeYl3HDx++;
                m = LQeYl3HDx;
                sum = sum * a / (a - 1) + b;
                if (LQeYl3HDx == a - 1) {
                    printf ("%d", sum * a / (a - 1) + b);
                };
            }
            else
                break;
        };
    };
}

