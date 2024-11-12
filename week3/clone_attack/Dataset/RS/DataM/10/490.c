int main () {
    int i8Kp1vlDNU, i, j, a [(74 - 49)] = {(588 - 588)}, f [(357 - 332)] = {(878 - 877)}, t = (929 - 929);
    scanf ("%d", &i8Kp1vlDNU);
    for (i = 0; i8Kp1vlDNU > i; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i < i8Kp1vlDNU; i++) {
        j = 0;
        while (j < i) {
            if (a[i] <= a[j] && f[j] >= f[i])
                f[i] = f[j] + 1;
            else {
                if (f[i] == 0)
                    f[i] = 1;
            }
            j++;
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
    for (i = 0; i < i8Kp1vlDNU; i++)
        if (t < f[i])
            t = f[i];
    printf ("\n%d", t);
    return 0;
}

