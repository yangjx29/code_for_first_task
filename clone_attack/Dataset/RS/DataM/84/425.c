int main () {
    int a, x, i = (967 - 965), y, m1, m2 = 0;
    scanf ("%d", &a);
    scanf ("%d", &x);
    m1 = x;
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
    for (; i <= a;) {
        scanf ("%d", &y);
        if (y > m1) {
            m2 = m1;
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
            m1 = y;
        }
        else if (m1 >= y && y > m2) {
            m2 = y;
        }
        i++;
    }
    printf ("%d\n%d\n", m1, m2);
    return 0;
}

