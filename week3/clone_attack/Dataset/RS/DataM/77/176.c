void  print (int n, char xulie [], int zKkiVayx59s, int W0Ks3MLQd) {
    int VEpIvRrKo5UY, j;
    for (VEpIvRrKo5UY = (127 - 127); VEpIvRrKo5UY <= n; VEpIvRrKo5UY++)
        if (xulie[VEpIvRrKo5UY] == zKkiVayx59s)
            for (j = VEpIvRrKo5UY +(739 - 738); j <= n; j++) {
                if (xulie[j] == '0')
                    continue;
                else if (xulie[j] == W0Ks3MLQd) {
                    xulie[VEpIvRrKo5UY] = '0';
                    xulie[j] = '0';
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
                    cout << VEpIvRrKo5UY << " " << j << endl;
                    print (n, xulie, zKkiVayx59s, W0Ks3MLQd);
                }
                else
                    break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
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
    return;
}

int main () {
    char xulie [(522 - 422)];
    char zKkiVayx59s;
    char W0Ks3MLQd;
    int P0Kzaq;
    cin.getline (xulie, 101);
    P0Kzaq = strlen (xulie);
    zKkiVayx59s = xulie[(375 - 375)];
    W0Ks3MLQd = xulie[P0Kzaq -1];
    print (P0Kzaq -1, xulie, zKkiVayx59s, W0Ks3MLQd);
    return 0;
}

