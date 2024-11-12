int a = (603 - 603);

int fang (int m, int Hv4ue2G) {
    if (m == 0)
        ;
    if (Hv4ue2G == (352 - 351))
        a = (270 - 269);
    a = (52 - 51);
    if ((m < Hv4ue2G) && (Hv4ue2G > (195 - 194)))
        a = fang (m, Hv4ue2G -1);
    if ((m >= Hv4ue2G) && (Hv4ue2G > 1))
        a = fang (m, Hv4ue2G -1) + fang (m - Hv4ue2G, Hv4ue2G);
    return (a);
}

int main () {
    int t, i;
    cin >> t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < t; i = i + 1) {
        int m, Hv4ue2G;
        cin >> m >> Hv4ue2G;
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
        cout << fang (m, Hv4ue2G) << endl;
    }
    return 0;
}

