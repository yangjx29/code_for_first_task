int main () {
    int yTmO5zLat = 0;
    int zXJ13A [1000] = {0};
    int sCkZoA [1000];
    int CnGNdApaDsh [1000];
    int h7ATDa9M4 = 0;
    char MOdE80mfysr;
    for (; cin >> CnGNdApaDsh[h7ATDa9M4];) {
        h7ATDa9M4++;
        if (cin.peek () == '\n')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin.ignore ();
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
    for (int VmoPZQtuYlJB = 0;
    VmoPZQtuYlJB != h7ATDa9M4 - 1; VmoPZQtuYlJB++)
        cin >> sCkZoA[VmoPZQtuYlJB] >> MOdE80mfysr;
    cin >> sCkZoA[h7ATDa9M4 - 1];
    for (int VmoPZQtuYlJB = 0;
    VmoPZQtuYlJB != h7ATDa9M4; VmoPZQtuYlJB++) {
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
        for (int iexJqylrM618 = CnGNdApaDsh[VmoPZQtuYlJB];
        iexJqylrM618 != sCkZoA[VmoPZQtuYlJB]; iexJqylrM618 = iexJqylrM618 + 1) {
            zXJ13A[iexJqylrM618]++;
        };
    }
    for (int VmoPZQtuYlJB = 0;
    VmoPZQtuYlJB != 1000; VmoPZQtuYlJB++)
        if (zXJ13A[VmoPZQtuYlJB] > yTmO5zLat)
            yTmO5zLat = zXJ13A[VmoPZQtuYlJB];
    cout << h7ATDa9M4 << " " << yTmO5zLat << endl;
    return 0;
}

