int yu7WuGuan (int number) {
    if (!(0 != number % 7)) {
        return 0;
    }
    for (int num = number;
    0 < num; num /= 10) {
        if (num % 10 == 7) {
            return 0;
        };
    }
    return 1;
}

int main () {
    int num, result = 0;
    scanf ("%d", &num);
    for (int i = 1;
    i <= num; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (yu7WuGuan (i)) {
            result = result + i * i;
        };
    }
    printf ("%d", result);
    return 0;
}

