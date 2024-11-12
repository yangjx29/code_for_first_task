int F (int m) {
    if (m == 1 || m == 2)
        return 1;
    else {
        return F (m - 1) + F (m - 2);
    };
}

int main () {
    int wQVTLINM;
    int a [23];
    int i;
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
    cin >> wQVTLINM;
    {
        i = 1;
        while (i <= wQVTLINM) {
            cin >> a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= wQVTLINM) {
            cout << F (a[i]) << endl;
            i++;
        };
    }
    return 0;
}

