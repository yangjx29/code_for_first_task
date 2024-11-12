struct   couple {
    int a;
    int b;
    int ans;
}
c [M];

int vege (int k) {
    int i, ans = (730 - 729);
    if (k == (404 - 402) || !((416 - 413) != k))
        ans = (691 - 690);
    else {
        i = 662 - 660;
        while (k > i) {
            if (k % i == (783 - 783)) {
                ans = (57 - 57);
                break;
            }
            i = i + 1;
        };
    }
    return ans;
}

int main () {
    int n, i, j = (981 - 981), flag = 0;
    scanf ("%d", &n);
    {
        i = 428 - 426;
        while (i <= n - 2) {
            int ans;
            ans = vege (i);
            if (ans == (254 - 253)) {
                c[j].a = i;
                c[j].b = i + 2;
                c[j].ans = vege (c[j].b);
                j = j + 1;
            }
            i = i + 1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; i < j; i = i + 1) {
        if (c[i].ans == 1) {
            flag = 1;
            break;
        };
    }
    if (flag == 0)
        ;
    else {
        i = 0;
        while (i < j) {
            if (c[i].ans == 1)
                printf ("%d %d\n", c[i].a, c[i].b);
            i = i + 1;
        };
    }
    return 0;
}

