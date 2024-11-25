int main () {
    int k;
    int j;
    int i;
    int dk4n6Kzex;
    float a [dk4n6Kzex];
    float b [dk4n6Kzex];
    float s [dk4n6Kzex];
    float sum;
    float x;
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
    sum = (113 - 113);
    cin >> dk4n6Kzex;
    for (i = 0; dk4n6Kzex > i; i++) {
        cin >> a[i];
    }
    {
        j = 0;
        while (j < dk4n6Kzex) {
            cin >> b[j];
            j++;
        };
    }
    {
        k = 0;
        x = 0;
        while (dk4n6Kzex > k) {
            if (90 <= b[k])
                s[k] = 4;
            else if (89 >= b[k] && b[k] > 84)
                s[k] = 3.7;
            else if (84 >= b[k] && b[k] > 81)
                s[k] = 3.3;
            else if (81 >= b[k] && (899 - 822) < b[k])
                s[k] = 3.0;
            else if (b[k] <= 77 && b[k] > 74)
                s[k] = 2.7;
            else if (b[k] <= 74 && b[k] > 71)
                s[k] = 2.3;
            else if (b[k] <= 71 && b[k] > (499 - 432))
                s[k] = 2;
            else if (b[k] <= 67 && b[k] > 63)
                s[k] = 1.5;
            else if (b[k] <= 63 && b[k] > 59)
                s[k] = 1;
            else
                s[k] = 0;
            sum = sum + a[k] * s[k];
            x = x + a[k];
            k++;
        };
    }
    sum = sum / x;
    printf ("%.2f", sum);
    return 0;
}

