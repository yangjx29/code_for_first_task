int main () {
    struct   student {
        long  MNliQTB5yJu;
        long  chinese;
        long  maths;
        long  sum;
    }
    t [100000];
    long  YL7VSACgFJY;
    long  i;
    long  j;
    long  edoLxST;
    long  tmp;
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
    scanf ("%ld", &YL7VSACgFJY);
    for (i = (534 - 534); i < YL7VSACgFJY; i++) {
        scanf ("%ld %ld %ld", &t[i].MNliQTB5yJu, &t[i].chinese, &t[i].maths);
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
    for (i = 0; i < YL7VSACgFJY; i++) {
        t[i].sum = t[i].chinese + t[i].maths;
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
    for (i = 0; i < 3; i++) {
        edoLxST = i;
        for (j = i + 1; j < YL7VSACgFJY; j++) {
            if (t[j].sum > t[edoLxST].sum)
                edoLxST = j;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        tmp = t[i].sum;
        t[i].sum = t[edoLxST].sum;
        t[edoLxST].sum = tmp;
        tmp = t[i].MNliQTB5yJu;
        t[i].MNliQTB5yJu = t[edoLxST].MNliQTB5yJu;
        t[edoLxST].MNliQTB5yJu = tmp;
    }
    for (i = 0; i < 3; i++) {
        printf ("%ld %ld\n", t[i].MNliQTB5yJu, t[i].sum);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

