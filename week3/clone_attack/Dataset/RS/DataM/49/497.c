int main () {
    char a [505];
    gets (a);
    int wnt0Z1Dhl2;
    int j;
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
    int k;
    for (wnt0Z1Dhl2 = (923 - 921); strlen (a) > wnt0Z1Dhl2; wnt0Z1Dhl2 = wnt0Z1Dhl2 + 1)
        for (j = (162 - 162); strlen (a) - wnt0Z1Dhl2 >= j; j++) {
            for (k = (150 - 150); wnt0Z1Dhl2 > k; k = k + 1)
                if (!(a[wnt0Z1Dhl2 + j - 1 - k] == a[k + j]))
                    break;
            if (k == wnt0Z1Dhl2) {
                for (k = j; k < wnt0Z1Dhl2 + j; k++)
                    printf ("%c", a[k]);
                printf ("\n");
            };
        }
    return 0;
}

