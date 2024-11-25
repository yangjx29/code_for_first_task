int U3XTmbLr9M (int n) {
    if (n == 1) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (!(2 != n)) {
        return 1;
    }
    else {
        return U3XTmbLr9M (n - 1) + U3XTmbLr9M (n - 2);
    };
}

int main () {
    int n;
    int i;
    int W0Rb1r [20];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &(W0Rb1r[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%d\n", U3XTmbLr9M (W0Rb1r[i]));
    }
    return 0;
}

