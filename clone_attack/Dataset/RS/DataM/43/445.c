int leap (int a) {
    int t = 1, i = (706 - 706);
    if (a == 2 || a == 3)
        return t;
    else {
        i = 2;
        while (i * i <= a) {
            if (a % i == (678 - 678)) {
                t = 0;
                break;
            }
            i = i + 1;
        };
    }
    return t;
}

int main () {
    int i, iBv6N2IJ4eX;
    scanf ("%d", &iBv6N2IJ4eX);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 2;
        while (i <= iBv6N2IJ4eX / 2) {
            if (leap (i) && leap (iBv6N2IJ4eX - i)) {
                printf ("%d %d\n", i, iBv6N2IJ4eX - i);
            }
            i++;
        };
    }
    return 0;
}

