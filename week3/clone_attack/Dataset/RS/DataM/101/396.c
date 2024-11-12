int main () {
    int YdABKGvMHO3I, b, c;
    int ra;
    int vFg4C8q3Us;
    int dIlLcvj1O8B;
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
    char szZYDreUp [4];
    {
        YdABKGvMHO3I = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YdABKGvMHO3I < (19 - 16)) {
            for (b = 0; 3 > b; b = b + 1) {
                if (b == YdABKGvMHO3I)
                    continue;
                for (c = 0; c < 3; c = c + 1) {
                    if (c == YdABKGvMHO3I || !(b != c))
                        continue;
                    ra = vFg4C8q3Us = dIlLcvj1O8B = 0;
                    ra = (b > YdABKGvMHO3I) + (c == YdABKGvMHO3I);
                    vFg4C8q3Us = (YdABKGvMHO3I > b) + (YdABKGvMHO3I > c);
                    dIlLcvj1O8B = (c > b) + (b > YdABKGvMHO3I);
                    if ((YdABKGvMHO3I > b && ra > vFg4C8q3Us) || (YdABKGvMHO3I > c && ra > dIlLcvj1O8B) || (b > c && vFg4C8q3Us > dIlLcvj1O8B))
                        continue;
                    szZYDreUp[YdABKGvMHO3I] = 'A';
                    szZYDreUp[b] = 'B';
                    szZYDreUp[c] = 'C';
                    szZYDreUp[3] = '\0';
                };
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
            YdABKGvMHO3I++;
        };
    }
    cout << szZYDreUp << endl;
    return 0;
}

