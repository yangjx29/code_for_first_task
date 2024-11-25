int main () {
    int n;
    int oc9sSnpZObkY;
    int otVevG3bc64;
    int flag;
    char (*E4YXQk98Ohn) [(314 - 233)];
    gets (*E4YXQk98Ohn);
    scanf ("%d", &n);
    E4YXQk98Ohn = (char (*) [81]) calloc (n, sizeof (char) * 81);
    {
        oc9sSnpZObkY = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oc9sSnpZObkY < n) {
            gets (*(E4YXQk98Ohn +oc9sSnpZObkY));
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
            oc9sSnpZObkY++;
        };
    }
    for (oc9sSnpZObkY = 0; oc9sSnpZObkY < n; oc9sSnpZObkY = oc9sSnpZObkY + 1) {
        flag = 1;
        if (*(*(E4YXQk98Ohn +oc9sSnpZObkY)) != '_' && (*(*(E4YXQk98Ohn +oc9sSnpZObkY)) > 'Z' || *(*(E4YXQk98Ohn +oc9sSnpZObkY)) < 'A') && ('z' < *(*(E4YXQk98Ohn +oc9sSnpZObkY)) || 'a' > *(*(E4YXQk98Ohn +oc9sSnpZObkY))))
            flag = 0;
        if (!(1 != flag)) {
            otVevG3bc64 = 0;
            while (otVevG3bc64 < strlen (*(E4YXQk98Ohn +oc9sSnpZObkY))) {
                if (*(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) != '_' && (*(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) > 'Z' || *(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) < 'A') && (*(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) > 'z' || *(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) < 'a') && (*(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) > '9' || *(*(E4YXQk98Ohn +oc9sSnpZObkY) + otVevG3bc64) < '0')) {
                    flag = 0;
                    break;
                }
                otVevG3bc64++;
            };
        }
        printf ("%d\n", flag);
    }
    getchar ();
}

