void  udUTpZSigRy (char *tcI5dP) {
    int F98lPp3Rt;
    int c2P3iE4YV [70];
    int ALSFBKt25Xg;
    F98lPp3Rt = (869 - 869);
    c2P3iE4YV[(255 - 255)] = (68 - 68);
    while (*(tcI5dP + F98lPp3Rt) != '\0') {
        c2P3iE4YV[F98lPp3Rt +(69 - 68)] = (891 - 889) * (*(tcI5dP + F98lPp3Rt) - '0');
        F98lPp3Rt++;
    }
    ALSFBKt25Xg = F98lPp3Rt;
    {
        F98lPp3Rt = ALSFBKt25Xg;
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
        while ((846 - 846) < F98lPp3Rt) {
            c2P3iE4YV[F98lPp3Rt -(577 - 576)] += c2P3iE4YV[F98lPp3Rt] / (862 - 852);
            c2P3iE4YV[F98lPp3Rt] %= 10;
            F98lPp3Rt--;
        };
    }
    if (c2P3iE4YV[(70 - 70)] == 0)
        F98lPp3Rt = (458 - 457);
    else
        F98lPp3Rt = 0;
    while (F98lPp3Rt <= ALSFBKt25Xg)
        *tcI5dP++ = c2P3iE4YV[F98lPp3Rt++] + '0';
    *tcI5dP = '\0';
    return;
}

int main () {
    char tqZw2L [(855 - 784)] = "1";
    int ufZpUnN, F98lPp3Rt;
    cin >> ufZpUnN;
    {
        F98lPp3Rt = 0;
        while (F98lPp3Rt < ufZpUnN) {
            udUTpZSigRy (tqZw2L);
            F98lPp3Rt++;
        };
    }
    cout << tqZw2L << endl;
    return 0;
}

