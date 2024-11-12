int main () {
    int jc3KBaIvnUy;
    int i;
    int uthIQdu2;
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
    int a [20001];
    scanf ("%d", &jc3KBaIvnUy);
    {
        i = 0;
        while (i < jc3KBaIvnUy) {
            scanf ("%d", &a[i]);
            {
                uthIQdu2 = 0;
                while (uthIQdu2 < i) {
                    if (!(a[uthIQdu2] != a[i]))
                        break;
                    else
                        continue;
                    uthIQdu2++;
                };
            }
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
            if (uthIQdu2 == i) {
                if (i == 0)
                    printf ("%d", a[i]);
                else
                    printf (" %d", a[i]);
            }
            else
                continue;
            i = i + 1;
        };
    };
}

