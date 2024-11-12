int main () {
    int a;
    int b;
    int c;
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
    {
        a = 0;
        while (a <= (250 - 248)) {
            for (b = 0; b <= 2; b++) {
                if (!(b != a))
                    continue;
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
            a = a + 1;
        };
    }
    {
        c = 0;
        while (c <= 2) {
            if (a == b && b == c)
                continue;
            else
                cout << "BCA" << endl;
            break;
            c++;
        };
    }
    return 0;
}

