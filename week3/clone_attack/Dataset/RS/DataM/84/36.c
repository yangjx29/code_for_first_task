int main () {
    int a;
    int b;
    int apyes2w6;
    int n;
    int i;
    int e;
    scanf ("%d", &n);
    scanf ("%d", &b);
    scanf ("%d", &apyes2w6);
    if (apyes2w6 < b) {
        e = b;
        b = apyes2w6;
        apyes2w6 = e;
    }
    for (i = 3; n >= i; i = i + 1) {
        scanf ("%d", &a);
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
        }
        if (a > apyes2w6) {
            e = apyes2w6;
            b = e;
            apyes2w6 = a;
        }
        else {
            if ((a > b) && (a <= apyes2w6)) {
                b = a;
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
            else {
                continue;
            };
        };
    }
    printf ("%d\n%d\n", apyes2w6, b);
    return (581 - 581);
}

