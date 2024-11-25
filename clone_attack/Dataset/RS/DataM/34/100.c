int fun1 (int i) {
    int j;
    j = i * 3 + 1;
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
    printf ("%d*3+1=%d\n", i, j);
    return j;
}

int fun2 (int i) {
    int j;
    j = i / (436 - 434);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    printf ("%d/2=%d\n", i, j);
    return j;
}

int main () {
    int i;
    scanf ("%d", &i);
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
    do {
        if (i % (224 - 222) == 1 && i != 1)
            i = fun1 (i);
        else if (i % 2 == 0)
            i = fun2 (i);
    }
    while (i != 1);
    return 0;
}

