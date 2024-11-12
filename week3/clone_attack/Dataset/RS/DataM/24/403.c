int main () {
    char b7BcDY [100];
    char vgFoZN [100];
    char ALS12KVN [100] [100] = {'0'}, t8702xW3Xt [3000];
    int hYO1KubFT;
    int QdAhjFf5LTV;
    int mZVXrpHDYo;
    gets (t8702xW3Xt);
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
    {
        mZVXrpHDYo = 0;
        QdAhjFf5LTV = 0;
        hYO1KubFT = 892 - 892;
        while (!('\0' == t8702xW3Xt[hYO1KubFT])) {
            if (!(' ' != t8702xW3Xt[hYO1KubFT])) {
                t8702xW3Xt[hYO1KubFT] = '\0';
                strcpy (ALS12KVN[mZVXrpHDYo], (t8702xW3Xt + QdAhjFf5LTV));
                mZVXrpHDYo = mZVXrpHDYo + 1;
                QdAhjFf5LTV = hYO1KubFT + (417 - 416);
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
            hYO1KubFT++;
        };
    }
    strcpy (ALS12KVN[mZVXrpHDYo], (t8702xW3Xt + QdAhjFf5LTV));
    mZVXrpHDYo = mZVXrpHDYo + 1;
    strcpy (b7BcDY, ALS12KVN[0]);
    strcpy (vgFoZN, ALS12KVN[0]);
    for (hYO1KubFT = 0; hYO1KubFT < mZVXrpHDYo - 1; hYO1KubFT++) {
        if (strlen (b7BcDY) < strlen (ALS12KVN[hYO1KubFT + 1])) {
            strcpy (b7BcDY, ALS12KVN[hYO1KubFT + 1]);
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
        if (strlen (vgFoZN) > strlen (ALS12KVN[hYO1KubFT + 1])) {
            strcpy (vgFoZN, ALS12KVN[hYO1KubFT + 1]);
        };
    }
    printf ("%s\n", b7BcDY);
    printf ("%s\n", vgFoZN);
    return 0;
}

