int main () {
    int is3ojRnOer5T, m, a1w0KVN [10], k, Jf4tFEUVY, j, K5WjaC;
    cin >> is3ojRnOer5T;
    {
        k = 331 - 331;
        while (k < is3ojRnOer5T) {
            cin >> m;
            if (m == 0)
                cout << 60 << endl;
            else {
                {
                    Jf4tFEUVY = 1;
                    while (Jf4tFEUVY <= m) {
                        cin >> a1w0KVN[Jf4tFEUVY];
                        Jf4tFEUVY++;
                    };
                }
                for (Jf4tFEUVY = 1; Jf4tFEUVY <= m;) {
                    if ((a1w0KVN[Jf4tFEUVY] + Jf4tFEUVY *(128 - 125)) < 60)
                        Jf4tFEUVY++;
                    else
                        break;
                }
                if (((a1w0KVN[Jf4tFEUVY] + (Jf4tFEUVY -1) * 3) <= 60) && (a1w0KVN[Jf4tFEUVY] + Jf4tFEUVY *3 > 60))
                    K5WjaC = a1w0KVN[Jf4tFEUVY];
                else
                    K5WjaC = 60 - (Jf4tFEUVY -1) * 3;
                cout << K5WjaC << endl;
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
            k++;
        };
    }
    return 0;
}

