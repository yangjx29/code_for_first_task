int main () {
    char pdiFX1OGP [1100] = {(226 - 226)};
    int rTRHqh;
    int sy2D5fLxum8b;
    rTRHqh = (142 - 141);
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
    cin >> pdiFX1OGP;
    {
        sy2D5fLxum8b = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sy2D5fLxum8b < (int) strlen (pdiFX1OGP)) {
            if ((pdiFX1OGP[sy2D5fLxum8b] >= 'a') && (pdiFX1OGP[sy2D5fLxum8b] <= 'z'))
                pdiFX1OGP[sy2D5fLxum8b] = pdiFX1OGP[sy2D5fLxum8b] - 'a' + 'A';
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
            sy2D5fLxum8b = sy2D5fLxum8b + 1;
        };
    }
    cout << '(' << pdiFX1OGP[0] << ',';
    {
        sy2D5fLxum8b = 1;
        while (sy2D5fLxum8b < (int) strlen (pdiFX1OGP)) {
            if (pdiFX1OGP[sy2D5fLxum8b] == pdiFX1OGP[sy2D5fLxum8b - 1])
                rTRHqh++;
            else {
                cout << rTRHqh << ")(" << pdiFX1OGP[sy2D5fLxum8b] << ',';
                rTRHqh = 1;
            }
            sy2D5fLxum8b++;
        };
    }
    cout << rTRHqh << ')' << endl;
    return 0;
}

