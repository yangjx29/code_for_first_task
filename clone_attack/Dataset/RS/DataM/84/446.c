int main () {
    int n;
    int mhj0zoCN;
    int IV9NwJFEslSo;
    int JOzZe7Q;
    int hcCQvDRa;
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
    scanf ("%d\n%d", &n, &mhj0zoCN);
    IV9NwJFEslSo = mhj0zoCN;
    JOzZe7Q = mhj0zoCN;
    for (hcCQvDRa = 1; n > hcCQvDRa; hcCQvDRa = hcCQvDRa + 1) {
        scanf ("\n%d", &mhj0zoCN);
        if (mhj0zoCN < IV9NwJFEslSo &&JOzZe7Q > mhj0zoCN) {
            JOzZe7Q = JOzZe7Q;
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
            IV9NwJFEslSo = IV9NwJFEslSo;
        }
        else {
            if (IV9NwJFEslSo > mhj0zoCN && JOzZe7Q <= mhj0zoCN) {
                JOzZe7Q = mhj0zoCN;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                IV9NwJFEslSo = IV9NwJFEslSo;
            }
            else {
                JOzZe7Q = IV9NwJFEslSo;
                IV9NwJFEslSo = mhj0zoCN;
            };
        };
    }
    printf ("%d\n%d\n", IV9NwJFEslSo, JOzZe7Q);
    return (516 - 516);
}

