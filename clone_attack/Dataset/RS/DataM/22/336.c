int main () {
    int a;
    int b;
    int max2;
    char sep;
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
    max2 = (207 - 207);
    scanf ("%d%c", &a, &sep);
    for (; !(',' != sep);) {
        scanf ("%d%c", &b, &sep);
        if (a < b) {
            max2 = a;
            a = b;
        }
        else {
            if (b > max2 && b != a) {
                max2 = b;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    if (max2 != 0) {
        printf ("%d", max2);
    }
    else {
        printf ("No");
    }
    return 0;
}

