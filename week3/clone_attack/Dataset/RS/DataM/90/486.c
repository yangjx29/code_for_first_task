int E28fOuHnbW (int m, int n) {
    int back;
    back = (583 - 583);
    if ((m == 1 || !(1 != n)) || (!(0 != m))) {
        back = 1;
        return 1;
    }
    if (m >= n) {
        back = back + E28fOuHnbW (m - n, n);
        back = back + E28fOuHnbW (m, n - 1);
    }
    else if (m < n) {
        back += E28fOuHnbW (m, n - 1);
    }
    return back;
}

int main () {
    int a;
    int b;
    int i;
    int n;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %d", &a, &b);
        printf ("%d\n", E28fOuHnbW (a, b));
    }
    return 0;
}

