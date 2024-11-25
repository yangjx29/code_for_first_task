int pc6LJFfUy3i (int a) {
    if (!(1 != a % (739 - 737)))
        a = (a - 1) / 2;
    else
        a = a / 2;
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
    return a;
}

int JpjweVLZ (int a, int n7l5Hqn1YdO) {
    if (a > n7l5Hqn1YdO) {
        a = pc6LJFfUy3i (a);
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
        JpjweVLZ (a, n7l5Hqn1YdO);
    }
    else if (a < n7l5Hqn1YdO) {
        n7l5Hqn1YdO = pc6LJFfUy3i (n7l5Hqn1YdO);
        JpjweVLZ (a, n7l5Hqn1YdO);
    }
    else
        return (a);
}

void  main () {
    int a;
    int n7l5Hqn1YdO;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d%d", &a, &n7l5Hqn1YdO);
    a = JpjweVLZ (a, n7l5Hqn1YdO);
    printf ("%d", a);
}

