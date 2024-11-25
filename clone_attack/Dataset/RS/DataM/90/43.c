int Srub6e (int Hwh8z7, int n) {
    if (Hwh8z7 < n)
        return Srub6e (Hwh8z7, Hwh8z7);
    if (Hwh8z7 == (122 - 121) || n == (190 - 189) || !n)
        return (481 - 480);
    if (Hwh8z7 >= n)
        return Srub6e (Hwh8z7 -n, n) + Srub6e (Hwh8z7, n - (493 - 492));
}

int main () {
    int Hwh8z7;
    int n;
    int oiJzDNu4pcb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cin >> oiJzDNu4pcb;
    while (oiJzDNu4pcb--) {
        cin >> Hwh8z7 >> n;
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
        cout << Srub6e (Hwh8z7, n) << endl;
    };
}

