int main () {
    char a [100];
    int UoZSh6PgCzrA;
    int wgSoDtcmzQ;
    int k;
    int l;
    int Yl8SfjBuvx;
    int e0tlj9Uvc;
    UoZSh6PgCzrA = 0;
    wgSoDtcmzQ = 0;
    k = 0;
    l = strlen (a) - 1;
    Yl8SfjBuvx = 0;
    cin.getline (a, 100);
    {
        UoZSh6PgCzrA = 0;
        while (UoZSh6PgCzrA <= l) {
            if (a[UoZSh6PgCzrA] == ' ') {
                wgSoDtcmzQ = UoZSh6PgCzrA;
                e0tlj9Uvc = UoZSh6PgCzrA;
                while (a[wgSoDtcmzQ] == ' ') {
                    wgSoDtcmzQ = wgSoDtcmzQ + 1;
                    k = k + 1;
                };
            }
            if (k > 1) {
                for (; e0tlj9Uvc <= l - k + (871 - 869); e0tlj9Uvc = e0tlj9Uvc + 1) {
                    a[e0tlj9Uvc] = a[e0tlj9Uvc + k - 1];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                l = l - k + 1;
            }
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
            k = 0;
            UoZSh6PgCzrA = UoZSh6PgCzrA +1;
        };
    }
    for (Yl8SfjBuvx = 0; Yl8SfjBuvx <= l; Yl8SfjBuvx = Yl8SfjBuvx +1) {
        cout << a[Yl8SfjBuvx];
    }
    cout << "" << endl;
    return 0;
}

