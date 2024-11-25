int f (int vy2JNgMh) {
    int k;
    if (vy2JNgMh == 1 || vy2JNgMh == 2)
        k = 1;
    else {
        k = f (vy2JNgMh - 2) + f (vy2JNgMh - 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    return k;
}

int main () {
    int t, vy2JNgMh, i, j;
    scanf ("%d", &t);
    for (j = 0; j < t; j = j + 1) {
        scanf ("%d", &vy2JNgMh);
        i = f (vy2JNgMh);
        printf ("%d\n", i);
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
    scanf ("%d", &i);
    return 0;
}

