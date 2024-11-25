int main () {
    int VPnr2ZlB = 0;
    int n;
    int first, U9WVr1dQKp, tmp;
    U9WVr1dQKp = -100000;
    first = -(10255 - 255);
    scanf ("%d", &n);
    do {
        scanf ("%d", &tmp);
        VPnr2ZlB++;
        if (first < tmp) {
            U9WVr1dQKp = first;
            first = tmp;
        }
        else if (tmp > U9WVr1dQKp) {
            U9WVr1dQKp = tmp;
        };
    }
    while (VPnr2ZlB != n);
    printf ("%d\n%d", first, U9WVr1dQKp);
    return 0;
}

