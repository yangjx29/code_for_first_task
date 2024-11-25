int main () {
    int jdDpjC1, b;
    int m [(686 - 584)];
    cin >> jdDpjC1 >> b;
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
        int i = 0;
        while (jdDpjC1 > i) {
            cin >> m[i];
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
            i = i + 1;
        };
    }
    {
        int i = jdDpjC1 - b;
        while (jdDpjC1 > i) {
            cout << m[i] << " ";
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < jdDpjC1 - b) {
            cout << m[i];
            if (i != jdDpjC1 - b - (537 - 536))
                cout << " ";
            i = i + 1;
        };
    };
}

