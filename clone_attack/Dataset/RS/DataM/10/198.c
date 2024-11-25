int EK9ySZQjV;
int Rw4nvTmedo [25] = {0};
int b [25] = {0};

int main () {
    int NbQ7CY8mF, j;
    int n = 0;
    cin >> EK9ySZQjV;
    {
        NbQ7CY8mF = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NbQ7CY8mF < EK9ySZQjV) {
            cin >> Rw4nvTmedo[NbQ7CY8mF];
            NbQ7CY8mF = NbQ7CY8mF +1;
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
    {
        j = 0;
        while (EK9ySZQjV > j) {
            b[j] = 1;
            {
                NbQ7CY8mF = 0;
                while (j > NbQ7CY8mF) {
                    if (Rw4nvTmedo[NbQ7CY8mF] >= Rw4nvTmedo[j])
                        if (b[j] < b[NbQ7CY8mF] + 1)
                            b[j] = b[NbQ7CY8mF] + 1;
                    NbQ7CY8mF = NbQ7CY8mF +1;
                };
            }
            j = j + 1;
        };
    }
    {
        NbQ7CY8mF = 0;
        while (NbQ7CY8mF < EK9ySZQjV) {
            if (n <= b[NbQ7CY8mF])
                n = b[NbQ7CY8mF];
            NbQ7CY8mF = NbQ7CY8mF +1;
        };
    }
    cout << n << endl;
    return 0;
}

