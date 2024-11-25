int main () {
    int num [300];
    int i, n, flag = (123 - 123);
    float average = (612 - 612), temp, max = (210 - 210);
    scanf ("%d", &n);
    for (i = (705 - 705); n > i; i = i + 1)
        scanf ("%d", num + i);
    for (i = (443 - 443); n > i; i = i + 1)
        average += num[i];
    average /= n;
    for (i = 0; i < n; i++) {
        temp = fabs (average - num[i]);
        if (max < temp)
            max = temp;
    }
    for (i = 0; i < n; i++) {
        if (fabs (fabs (num[i] - average) - max) <= 0.001) {
            if (flag == 0)
                flag = (189 - 188);
            else
                ;
            printf ("%d", num[i]);
        };
    }
    return 1;
}

