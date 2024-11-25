void  check (int * Wmst9q);
int gEO4NwD;

int main () {
    char Wmst9q [101];
    int snGvNER [100];
    check (snGvNER);
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
    cin.getline (Wmst9q, 101);
    gEO4NwD = strlen (Wmst9q);
    {
        int i = (762 - 762);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < gEO4NwD) {
            if (Wmst9q[i] == Wmst9q[0])
                snGvNER[i] = (546 - 545);
            else
                snGvNER[i] = 2;
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
            i++;
        };
    }
    return 0;
}

void  check (int *Wmst9q) {
    {
        int i = 0;
        while (i < gEO4NwD) {
            if (Wmst9q[i] == 2)
                for (int GBLPGqZ = i - 1;
                GBLPGqZ >= 0; GBLPGqZ--)
                    if (Wmst9q[GBLPGqZ] == 1) {
                        cout << GBLPGqZ << ' ' << i << endl;
                        Wmst9q[i] = 0;
                        Wmst9q[GBLPGqZ] = 0;
                        return check (Wmst9q);
                    }
            i++;
        };
    };
}

