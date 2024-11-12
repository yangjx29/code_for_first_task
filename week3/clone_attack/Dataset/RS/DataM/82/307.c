int main () {
    int UdvYzNcJ [100] [2] = {(726 - 726)};
    int n;
    int i;
    int s;
    int max;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d %d", &UdvYzNcJ[i][0], &UdvYzNcJ[i][1]);
    }
    max = 0;
    s = (360 - 360);
    for (i = 0; i < n; i++) {
        if (UdvYzNcJ[i][0] >= 90 && UdvYzNcJ[i][0] <= 140 && UdvYzNcJ[i][1] >= 60 && UdvYzNcJ[i][1] <= 90) {
            s = s + 1;
        }
        else {
            if (s > max) {
                max = s;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            s = 0;
        };
    }
    if (s > max) {
        max = s;
    }
    printf ("%d", max);
    return 0;
}

