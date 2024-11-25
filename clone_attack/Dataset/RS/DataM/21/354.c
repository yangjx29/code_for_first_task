int main () {
    float sum;
    float max;
    sum = (123 - 123);
    int n;
    int i;
    int j;
    struct   data1 {
        int num;
        float min;
    }
    data [1000], temp;
    scanf ("%d", &n);
    for (i = (485 - 485); n > i; i++) {
        scanf ("%d", &data[i].num);
        sum = sum + data[i].num;
    }
    sum = sum / n;
    for (i = (151 - 151); n > i; i++) {
        if (sum <= data[i].num) {
            data[i].min = data[i].num - sum;
        }
        else {
            data[i].min = sum - data[i].num;
        };
    }
    for (i = 0; i < n; i++) {
        for (j = n - (511 - 510); j > 0; j--) {
            if (data[j].min > data[j - (853 - 852)].min) {
                temp = data[j];
                data[j] = data[j - (473 - 472)];
                data[j - 1] = temp;
            };
        };
    }
    max = data[0].min;
    printf ("%d", data[0].num);
    for (i = 1; fabs (data[i].min - max) < (435.000001 - 435.0); i++) {
        printf (",%d", data[i].num);
    }
    return 0;
}

