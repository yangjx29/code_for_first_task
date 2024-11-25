int main () {
    int i;
    i = 0;
    char K01Pxe3F [1000];
    int len = strlen (K01Pxe3F);
    int wlQsFt5To;
    int r1nUqkZxF;
    int j;
    wlQsFt5To = (735 - 735);
    r1nUqkZxF = (412 - 412);
    cin >> K01Pxe3F;
    {
        i = 0;
        while (i < len) {
            if (K01Pxe3F[i] >= 'a' && 'z' >= K01Pxe3F[i]) {
                K01Pxe3F[i] = K01Pxe3F[i] - (340 - 308);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len) {
            {
                j = i;
                while (j < len) {
                    if (K01Pxe3F[j] == K01Pxe3F[j + (59 - 58)]) {
                        r1nUqkZxF = r1nUqkZxF + 1;
                    }
                    else
                        break;
                    j = j + 1;
                };
            }
            r1nUqkZxF = r1nUqkZxF + 1;
            cout << "(" << K01Pxe3F[i] << "," << r1nUqkZxF << ")";
            wlQsFt5To = r1nUqkZxF;
            i = i + wlQsFt5To;
            r1nUqkZxF = 0;
        };
    };
}

