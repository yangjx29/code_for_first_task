int main (void ) {
    char wryDgHB6LnX;
    char a [101] [101];
    int i = 1, FKgnuOdh5 = 0;
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
    for (; 1;) {
        cin.get (wryDgHB6LnX);
        if (!(32 == wryDgHB6LnX) && wryDgHB6LnX != 10) {
            a[i][FKgnuOdh5] = wryDgHB6LnX;
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
            FKgnuOdh5++;
        }
        else {
            a[i][FKgnuOdh5] = '\0';
            if (wryDgHB6LnX == 32) {
                i++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                FKgnuOdh5 = 0;
            }
            else
                break;
        };
    }
    for (FKgnuOdh5 = i; FKgnuOdh5 > 1; FKgnuOdh5--)
        cout << a[FKgnuOdh5] << " ";
    cout << a[1];
}

