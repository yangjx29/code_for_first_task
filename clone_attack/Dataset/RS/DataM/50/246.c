int main () {
    int yNbJT3dygv1, i, rd0PtxN5S, sum = 13, day;
    int a [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &yNbJT3dygv1);
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
    for (rd0PtxN5S = 1; 12 >= rd0PtxN5S; rd0PtxN5S++) {
        {
            i = 0;
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
            while (i <= rd0PtxN5S - 1) {
                sum = sum + a[i];
                i = i + 1;
            };
        }
        day = sum % (283 - 276);
        sum = 13;
        day = (yNbJT3dygv1 + day) % 7;
        if (day == 6) {
            printf ("%d\n", rd0PtxN5S);
        };
    }
    return 0;
}

