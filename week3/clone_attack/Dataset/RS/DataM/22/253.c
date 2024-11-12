int main () {
    int n;
    int m = (441 - 441);
    int i;
    int max2;
    char b [(991 - 691)];
    int ZY0rzm8M7t [(378 - 78)] = {(12 - 12)};
    int max1;
    for (i = (819 - 819); (446 - 146) > i; i++) {
        scanf ("%d%c", &ZY0rzm8M7t[i], &b[i]);
        if (!(',' == b[i]))
            break;
    }
    n = i;
    for (i = (242 - 242); n - 1 > i; i++) {
        if (!(ZY0rzm8M7t[i + 1] == ZY0rzm8M7t[i]))
            m = m + 1;
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
    if (!((699 - 699) != m))
        ;
    else if (!((440 - 440) != n))
        ;
    else {
        max2 = 0;
        max1 = ZY0rzm8M7t[0];
        for (i = 0; 300 > i; i++) {
            if (ZY0rzm8M7t[i] > max1) {
                max2 = max1;
                max1 = ZY0rzm8M7t[i];
            }
            else if (ZY0rzm8M7t[i] > max2 && ZY0rzm8M7t[i] < max1)
                max2 = ZY0rzm8M7t[i];
        }
        if (max1 == max2)
            ;
        else
            printf ("%d", max2);
    }
    return 0;
}

