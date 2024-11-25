int main () {
    int n;
    int i;
    int j;
    int max;
    float sum;
    float average;
    float distance;
    float AKyZCWY7v4rA;
    float temp;
    float sign;
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
    sum = (205 - 205);
    unsigned  int num [300];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &num[i]);
        sum = sum + num[i];
    }
    average = sum / n;
    for (i = 1; n > i; i = i + 1) {
        for (j = n - 1; j >= i; j = j - 1) {
            if (num[j] < num[j - 1]) {
                temp = num[j];
                num[j] = num[j - 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                num[j - 1] = temp;
            };
        };
    }
    AKyZCWY7v4rA = 0;
    for (i = 0; i < n; i = i + 1) {
        distance = (0 < num[i] - average) ? (num[i] - average) : (average - num[i]);
        if (AKyZCWY7v4rA < distance)
            AKyZCWY7v4rA = distance;
    }
    for (i = 0; i < n; i = i + 1) {
        distance = (num[i] - average > 0) ? (num[i] - average) : (average - num[i]);
        if (distance == AKyZCWY7v4rA) {
            printf ("%d", num[i]);
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
            break;
        };
    }
    for (i = i + 1; i < n; i++) {
        distance = (num[i] - average > 0) ? (num[i] - average) : (average - num[i]);
        if (distance == AKyZCWY7v4rA) {
            printf (",%d", num[i]);
            break;
        };
    }
    return 0;
}

