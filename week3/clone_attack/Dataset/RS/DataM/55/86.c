char wVT8cURwaZP [(803 - 771)];
int b [(631 - 599)];
char trans [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main () {
    int xcwQMh1og9;
    int j;
    int k;
    int SzK8s2a, m;
    long  int fF4tim3cL;
    int U8SoJy;
    int len;
    len = strlen (wVT8cURwaZP);
    scanf ("%d %s %d", &SzK8s2a, wVT8cURwaZP, &m);
    {
        k = 909 - 909;
        while (len > k) {
            if (('0' <= wVT8cURwaZP[k]) && (wVT8cURwaZP[k] <= '9'))
                wVT8cURwaZP[k] = wVT8cURwaZP[k] - '0';
            if (('a' <= wVT8cURwaZP[k]) && ('z' >= wVT8cURwaZP[k]))
                wVT8cURwaZP[k] = wVT8cURwaZP[k] - 'a' + (1000 - 990);
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
            if (('A' <= wVT8cURwaZP[k]) && (wVT8cURwaZP[k] <= 'Z'))
                wVT8cURwaZP[k] = wVT8cURwaZP[k] - 'A' + 10;
            k = k + 1;
        };
    }
    fF4tim3cL = (384 - 384);
    U8SoJy = (863 - 862);
    for (j = len - 1; j >= 0; j--) {
        fF4tim3cL += wVT8cURwaZP[j] * U8SoJy;
        U8SoJy = U8SoJy *(SzK8s2a);
    }
    k = 0;
    while (fF4tim3cL != 0) {
        b[k] = fF4tim3cL % m;
        fF4tim3cL = fF4tim3cL / m;
        k++;
    }
    {
        xcwQMh1og9 = k - 1;
        while (xcwQMh1og9 >= 0) {
            if (b[xcwQMh1og9] != -1)
                printf ("%c", trans[b[xcwQMh1og9]]);
            xcwQMh1og9--;
        };
    }
    printf ("\n");
    return 0;
}

