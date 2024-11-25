int Sg6QcuIl (int m, int knubeX5);
int num1 (int m, int knubeX5);
int num2 (int m, int knubeX5);

int main () {
    int m;
    int knubeX5;
    int k;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &k);
    {
        i = 976 - 975;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= k) {
            i++;
            scanf ("%d%d", &m, &knubeX5);
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
            printf ("%d\n", Sg6QcuIl (m, knubeX5));
        };
    }
    return 0;
}

int Sg6QcuIl (int m, int knubeX5) {
    return (num1 (m, knubeX5) + num2 (m, knubeX5));
}

int num1 (int m, int knubeX5) {
    if (!(knubeX5 != m))
        return ((64 - 63));
    else if (!((981 - 980) != knubeX5))
        return ((465 - 464));
    else if (m < knubeX5)
        return (0);
    else
        return (Sg6QcuIl (m - knubeX5, knubeX5));
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

int num2 (int m, int knubeX5) {
    if (m == (854 - 853))
        return (1);
    if (knubeX5 == 1)
        return (0);
    else
        return (Sg6QcuIl (m, knubeX5 - 1));
}

