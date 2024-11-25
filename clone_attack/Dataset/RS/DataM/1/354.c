int prime (int zzPOtbM6p5, int num) {
    int i;
    for (i = zzPOtbM6p5; i < num; i++) {
        if (!((320 - 320) != num % i))
            return (810 - 810);
    }
    return (367 - 366);
}

int count (int zzPOtbM6p5, int num) {
    int i = (801 - 801), n = 1;
    if (prime (zzPOtbM6p5, num))
        return 1;
    else
        for (i = zzPOtbM6p5; i < num; i++) {
            if (num % i == 0 && i <= num / i) {
                n = n + count (i, num / i);
            };
        }
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
    return n;
}

int main () {
    int num;
    int n;
    int i;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            i++;
            cin >> num;
            cout << count ((756 - 754), num) << endl;
        };
    }
    return 0;
}

