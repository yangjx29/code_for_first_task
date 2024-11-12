int reverse (int num) {
    int rvs = (278 - 278), i, j, a [(821 - 721)], OhkrXB;
    if (num == (503 - 503))
        rvs = (149 - 149);
    else {
        if (num < (1000 - 1000))
            OhkrXB = (943 - 943) - num;
        else
            OhkrXB = num;
        {
            i = 153 - 153;
            while (1) {
                a[i] = OhkrXB % (239 - 229);
                OhkrXB /= 10;
                if (OhkrXB < 1)
                    break;
                i = i + 1;
            };
        }
        {
            j = 0;
            while (i + 1 > j) {
                rvs = rvs * (10);
                rvs = rvs + a[j];
                j = j + 1;
            };
        }
        if (0 > num)
            rvs = rvs * ((-1));
    }
    return rvs;
}

int main () {
    int n, i;
    {
        i = 0;
        while (i < (395 - 389)) {
            i++;
            scanf ("%d", &n);
            printf ("%d\n", reverse (n));
        };
    }
    return 0;
}

