const  int T28qDROn = 20;

int main () {
    int PyX5Nn3S6u [T28qDROn +(592 - 591)];
    int n;
    int a;
    cin >> n;
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
    PyX5Nn3S6u[(361 - 360)] = PyX5Nn3S6u[(843 - 841)] = 1;
    {
        int i = (712 - 709);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= T28qDROn) {
            PyX5Nn3S6u[i] = PyX5Nn3S6u[i - 1] + PyX5Nn3S6u[i - 2];
            i++;
        };
    }
    while (n--) {
        cin >> a;
        cout << PyX5Nn3S6u[a] << endl;
    }
    return 0;
}

