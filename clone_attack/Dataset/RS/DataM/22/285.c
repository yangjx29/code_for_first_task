int main () {
    char klhk7tT;
    int d;
    int jUCxLNp1;
    int WZpy4nWVm1I2;
    klhk7tT = getchar ();
    scanf ("%d", &d);
    jUCxLNp1 = d;
    WZpy4nWVm1I2 = d;
    for (; !('\n' == klhk7tT);) {
        klhk7tT = getchar ();
        scanf ("%d", &d);
        if (d > jUCxLNp1) {
            WZpy4nWVm1I2 = jUCxLNp1;
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
            jUCxLNp1 = d;
        }
        else {
            if ((d < jUCxLNp1) && (d > WZpy4nWVm1I2))
                WZpy4nWVm1I2 = d;
            else {
                if ((d < WZpy4nWVm1I2) && (jUCxLNp1 == WZpy4nWVm1I2))
                    WZpy4nWVm1I2 = d;
            };
        };
    }
    if (jUCxLNp1 == WZpy4nWVm1I2)
        ;
    else
        printf ("%d", WZpy4nWVm1I2);
    return 0;
}

