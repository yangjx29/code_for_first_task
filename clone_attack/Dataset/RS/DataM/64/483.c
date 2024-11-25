int main () {
    int JY0mJ1dZsI;
    int IKR5cvSwuWa;
    int odHC8J7SDg3;
    JY0mJ1dZsI = 0;
    IKR5cvSwuWa = 0;
    float FXfEckax7zwL;
    FXfEckax7zwL = 0;
    float uNT1KbOe0A3V [(704 - 654)];
    int X [11];
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
    int WQzKYmAj24 [11];
    int Z [11];
    int p [50];
    int c8pQemTV [50];
    cin >> odHC8J7SDg3;
    {
        int yWXFRI2GeCl = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yWXFRI2GeCl < odHC8J7SDg3) {
            cin >> X[yWXFRI2GeCl];
            cin >> WQzKYmAj24[yWXFRI2GeCl];
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
            cin >> Z[yWXFRI2GeCl];
            yWXFRI2GeCl = yWXFRI2GeCl + 1;
        };
    }
    {
        int yWXFRI2GeCl = 0;
        while (yWXFRI2GeCl < odHC8J7SDg3) {
            {
                int EOKuVjN6C = yWXFRI2GeCl + 1;
                while (odHC8J7SDg3 > EOKuVjN6C) {
                    uNT1KbOe0A3V[JY0mJ1dZsI] = sqrt ((X[yWXFRI2GeCl] - X[EOKuVjN6C]) * (X[yWXFRI2GeCl] - X[EOKuVjN6C]) + (WQzKYmAj24[yWXFRI2GeCl] - WQzKYmAj24[EOKuVjN6C]) * (WQzKYmAj24[yWXFRI2GeCl] - WQzKYmAj24[EOKuVjN6C]) + (Z[yWXFRI2GeCl] - Z[EOKuVjN6C]) * (Z[yWXFRI2GeCl] - Z[EOKuVjN6C]));
                    p[JY0mJ1dZsI] = yWXFRI2GeCl;
                    c8pQemTV[JY0mJ1dZsI] = EOKuVjN6C;
                    EOKuVjN6C = EOKuVjN6C +1;
                    JY0mJ1dZsI = JY0mJ1dZsI +1;
                };
            }
            yWXFRI2GeCl = yWXFRI2GeCl + 1;
        };
    }
    {
        int yWXFRI2GeCl = JY0mJ1dZsI -1;
        while (0 < yWXFRI2GeCl) {
            {
                int EOKuVjN6C = 0;
                while (yWXFRI2GeCl > EOKuVjN6C) {
                    if (uNT1KbOe0A3V[EOKuVjN6C] < uNT1KbOe0A3V[EOKuVjN6C +1]) {
                        FXfEckax7zwL = uNT1KbOe0A3V[EOKuVjN6C];
                        uNT1KbOe0A3V[EOKuVjN6C] = uNT1KbOe0A3V[EOKuVjN6C +1];
                        IKR5cvSwuWa = p[EOKuVjN6C];
                        p[EOKuVjN6C] = p[EOKuVjN6C +1];
                        p[EOKuVjN6C +1] = IKR5cvSwuWa;
                        IKR5cvSwuWa = c8pQemTV[EOKuVjN6C];
                        c8pQemTV[EOKuVjN6C] = c8pQemTV[EOKuVjN6C +1];
                        c8pQemTV[EOKuVjN6C +1] = IKR5cvSwuWa;
                        uNT1KbOe0A3V[EOKuVjN6C +1] = FXfEckax7zwL;
                    }
                    EOKuVjN6C = EOKuVjN6C +1;
                };
            }
            yWXFRI2GeCl = yWXFRI2GeCl - 1;
        };
    }
    {
        int k = 0;
        while (k < JY0mJ1dZsI) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", X[p[k]], WQzKYmAj24[p[k]], Z[p[k]], X[c8pQemTV[k]], WQzKYmAj24[c8pQemTV[k]], Z[c8pQemTV[k]], uNT1KbOe0A3V[k]);
            k = k + 1;
        };
    }
    return 0;
}

