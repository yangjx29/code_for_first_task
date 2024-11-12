int main () {
    int GAnJ1b3o (int, int, int, int);
    int D3TRMCv0AszX;
    int v60LuM47sAzp;
    int s;
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
    int iK5eGyS;
    for (D3TRMCv0AszX = (286 - 285); D3TRMCv0AszX <= 5; D3TRMCv0AszX++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (v60LuM47sAzp = 1; 5 >= v60LuM47sAzp; v60LuM47sAzp++) {
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
            if (!(D3TRMCv0AszX != v60LuM47sAzp))
                continue;
            else {
                s = 1;
                while (s <= 5) {
                    if (s == D3TRMCv0AszX || s == v60LuM47sAzp)
                        continue;
                    else {
                        for (iK5eGyS = 1; iK5eGyS <= 5; iK5eGyS++)
                            if (iK5eGyS == D3TRMCv0AszX || iK5eGyS == v60LuM47sAzp || iK5eGyS == s)
                                continue;
                            else if (D3TRMCv0AszX +v60LuM47sAzp == iK5eGyS + s && D3TRMCv0AszX +iK5eGyS > s + v60LuM47sAzp && D3TRMCv0AszX +s < v60LuM47sAzp)
                                GAnJ1b3o (D3TRMCv0AszX, v60LuM47sAzp, s, iK5eGyS);
                            else
                                ;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    s++;
                };
            };
        };
    }
    return (113 - 113);
}

int GAnJ1b3o (int D3TRMCv0AszX, int v60LuM47sAzp, int s, int iK5eGyS) {
    char b [5] = {"zqsl"};
    char temp2;
    int a [4] = {D3TRMCv0AszX, v60LuM47sAzp, s, iK5eGyS};
    int i;
    int j;
    int Y3Slc0;
    for (i = 0; i < 3; i++) {
        j = i + 1;
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
        while (j < 4) {
            if (a[i] < a[j]) {
                Y3Slc0 = a[i];
                a[i] = a[j];
                temp2 = b[i];
                a[j] = Y3Slc0;
                b[i] = b[j];
                b[j] = temp2;
            }
            j++;
        };
    }
    for (i = 0; i < 4; i++)
        cout << b[i] << " " << 10 * a[i] << endl;
    return 0;
}

