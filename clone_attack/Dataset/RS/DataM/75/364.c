int main () {
    char fF3tGdi;
    int com0YV6z;
    int NqBcjA6J9KX;
    int A9sMih [1001];
    int OCkg5wL6qzW [1001];
    int KzsNdZDUFt [1001];
    com0YV6z = 1;
    NqBcjA6J9KX = 0;
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
    while (cin >> A9sMih[com0YV6z]) {
        fF3tGdi = cin.get ();
        if (fF3tGdi != ',')
            break;
        com0YV6z = com0YV6z + 1;
    }
    {
        int D6PtKzLYpUDN = 0;
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
        while (1001 > D6PtKzLYpUDN) {
            OCkg5wL6qzW[D6PtKzLYpUDN] = 0;
            D6PtKzLYpUDN = D6PtKzLYpUDN +1;
        };
    }
    cin >> KzsNdZDUFt[1];
    {
        int D6PtKzLYpUDN = 2;
        while (com0YV6z >= D6PtKzLYpUDN) {
            cin.get ();
            cin >> KzsNdZDUFt[D6PtKzLYpUDN];
            D6PtKzLYpUDN = D6PtKzLYpUDN +1;
        };
    }
    cout << com0YV6z << " ";
    {
        int D6PtKzLYpUDN = 1;
        while (D6PtKzLYpUDN <= com0YV6z) {
            for (int gMqikNRlx = A9sMih[D6PtKzLYpUDN];
            gMqikNRlx < KzsNdZDUFt[D6PtKzLYpUDN]; gMqikNRlx = gMqikNRlx + 1)
                OCkg5wL6qzW[gMqikNRlx]++;
            D6PtKzLYpUDN = D6PtKzLYpUDN +1;
        };
    }
    {
        int D6PtKzLYpUDN = 1;
        while (D6PtKzLYpUDN <= 1000) {
            if (NqBcjA6J9KX < OCkg5wL6qzW[D6PtKzLYpUDN])
                NqBcjA6J9KX = OCkg5wL6qzW[D6PtKzLYpUDN];
            D6PtKzLYpUDN = D6PtKzLYpUDN +1;
        };
    }
    cout << NqBcjA6J9KX << endl;
    return 0;
}

