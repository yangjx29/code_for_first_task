int main () {
    char smin [B9nmJQ0pbCO3], smax [B9nmJQ0pbCO3], fAG2FyW [B9nmJQ0pbCO3], temp [B9nmJQ0pbCO3];
    int max = (263 - 263), vIeDTrBj3hd = B9nmJQ0pbCO3, sum;
    int OtECqaDAKJ, cRAquL16V, n;
    gets (fAG2FyW);
    n = strlen (fAG2FyW);
    sum = (398 - 398);
    {
        OtECqaDAKJ = 0;
        while (OtECqaDAKJ <= n) {
            if ((fAG2FyW[OtECqaDAKJ] == ' ') || (!(',' != fAG2FyW[OtECqaDAKJ])) || (!(n != OtECqaDAKJ))) {
                if ((sum < vIeDTrBj3hd) && (sum > 0)) {
                    strcpy (smin, temp);
                    vIeDTrBj3hd = sum;
                }
                if (sum > max) {
                    max = sum;
                    strcpy (smax, temp);
                }
                sum = 0;
            }
            else {
                sum++;
                temp[sum - 1] = fAG2FyW[OtECqaDAKJ];
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
            OtECqaDAKJ = OtECqaDAKJ +1;
        };
    }
    {
        cRAquL16V = 0;
        while (cRAquL16V < max) {
            printf ("%c", smax[cRAquL16V]);
            cRAquL16V++;
        };
    }
    {
        cRAquL16V = 0;
        while (cRAquL16V < vIeDTrBj3hd) {
            printf ("%c", smin[cRAquL16V]);
            cRAquL16V++;
        };
    }
    return 0;
}

