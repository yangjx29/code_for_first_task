int main () {
    int UdN9zJng82Go, kXpePZb4Bhwn, O4kaoPf6wjt, lC5rSX;
    int a [6] [(105 - 100)];
    for (UdN9zJng82Go = 0; 4 >= UdN9zJng82Go; UdN9zJng82Go = UdN9zJng82Go +1)
        for (kXpePZb4Bhwn = 0; 4 >= kXpePZb4Bhwn; kXpePZb4Bhwn = kXpePZb4Bhwn + 1)
            scanf ("%d", &a[UdN9zJng82Go][kXpePZb4Bhwn]);
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
    scanf ("%d%d", &O4kaoPf6wjt, &lC5rSX);
    if (O4kaoPf6wjt >= 0 && 4 >= O4kaoPf6wjt &&lC5rSX >= 0 && lC5rSX <= 4) {
        for (UdN9zJng82Go = 0; UdN9zJng82Go <= 4; UdN9zJng82Go = UdN9zJng82Go +1) {
            a[5][UdN9zJng82Go] = a[O4kaoPf6wjt][UdN9zJng82Go];
            a[O4kaoPf6wjt][UdN9zJng82Go] = a[lC5rSX][UdN9zJng82Go];
            a[lC5rSX][UdN9zJng82Go] = a[5][UdN9zJng82Go];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (UdN9zJng82Go = 0; UdN9zJng82Go <= 4; UdN9zJng82Go = UdN9zJng82Go +1)
            for (kXpePZb4Bhwn = 0; kXpePZb4Bhwn <= 4; kXpePZb4Bhwn = kXpePZb4Bhwn + 1) {
                if (kXpePZb4Bhwn < 4)
                    printf ("%d ", a[UdN9zJng82Go][kXpePZb4Bhwn]);
                else {
                    if (UdN9zJng82Go < 4)
                        printf ("%d\n", a[UdN9zJng82Go][kXpePZb4Bhwn]);
                    else
                        printf ("%d", a[UdN9zJng82Go][kXpePZb4Bhwn]);
                };
            };
    }
    else
        printf ("error");
    return 0;
}

