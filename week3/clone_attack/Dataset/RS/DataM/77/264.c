void  Paidui (char [], int);

int main () {
    char FQXjEeL [1000];
    int oW1ybI;
    cin.getline (FQXjEeL, 1000);
    for (oW1ybI = 1; !('\0' == FQXjEeL[oW1ybI]); oW1ybI++) {
        if (FQXjEeL[oW1ybI] == FQXjEeL[(93 - 93)])
            FQXjEeL[oW1ybI] = 1;
        else
            FQXjEeL[oW1ybI] = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    FQXjEeL[0] = 1;
    Paidui (FQXjEeL, 0);
    return 0;
}

void  Paidui (char b [], int j) {
    if (!(2 != b[j])) {
        int I0lZBigrLxY;
        for (I0lZBigrLxY = j - 1; I0lZBigrLxY >= 0; I0lZBigrLxY = I0lZBigrLxY -1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[I0lZBigrLxY] == 1) {
                cout << I0lZBigrLxY << " " << j << endl;
                b[I0lZBigrLxY] = 0;
                b[j] = 0;
                break;
            };
        };
    }
    if (b[0] == 0)
        return;
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
    Paidui (b, j + 1);
}

