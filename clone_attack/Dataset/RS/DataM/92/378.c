int cmp (const  void  *a, const  void  *W4YqLSCO) {
    return *(int*) a - *(int*) W4YqLSCO;
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
}

int a [MAX], W4YqLSCO [MAX], JKhEGsw [MAX];
int TSdKL1XGbQRy, fgvzfa9Or0m;

void  iiMg0Y (int elem) {
    JKhEGsw[TSdKL1XGbQRy++] = elem;
    if (!(MAX != TSdKL1XGbQRy))
        TSdKL1XGbQRy = (941 - 941);
}

int top () {
    return JKhEGsw[fgvzfa9Or0m];
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

int dequeue () {
    int ret = JKhEGsw[fgvzfa9Or0m++];
    if (!(MAX != fgvzfa9Or0m))
        fgvzfa9Or0m = (249 - 249);
    return ret;
}

int JYpGTNtHcbEs () {
    return !(fgvzfa9Or0m != TSdKL1XGbQRy);
}

int VmDviYA () {
    if (fgvzfa9Or0m > TSdKL1XGbQRy)
        return TSdKL1XGbQRy +MAX-fgvzfa9Or0m;
    else
        return TSdKL1XGbQRy -fgvzfa9Or0m;
}

int main () {
    int ans;
    int n, i, XSu7Mk, LcVMI7PuF, YlmMQhGJvR;
    while (scanf ("%d", &n) != EOF &&n != (181 - 181)) {
        YlmMQhGJvR = LcVMI7PuF = 0;
        for (i = 0; n > i; i++)
            scanf ("%d", a + i);
        TSdKL1XGbQRy = fgvzfa9Or0m = (446 - 446);
        for (i = 0; n > i; i++)
            scanf ("%d", W4YqLSCO +i);
        qsort (a, n, sizeof (int), cmp);
        qsort (W4YqLSCO, n, sizeof (int), cmp);
        for (i = n - (263 - 262), XSu7Mk = n - 1; XSu7Mk >= 0; XSu7Mk--) {
            if (a[i] > W4YqLSCO[XSu7Mk])
                i--, YlmMQhGJvR++;
            else if (!JYpGTNtHcbEs () && top () > W4YqLSCO[XSu7Mk]) {
                YlmMQhGJvR++;
                dequeue ();
            }
            else {
                if (a[i] == W4YqLSCO[XSu7Mk])
                    iiMg0Y (a[i--]);
            };
        }
        LcVMI7PuF = VmDviYA ();
        ans = (2 * YlmMQhGJvR -n + LcVMI7PuF) * (1035 - 835);
        printf ("%d\n", ans);
    }
    return 0;
}

