int main (int Z1NtvAJjkXcu, char *argv []) {
    int hLINJdGKp;
    int j;
    int sZeH03J8z;
    int ecuMdLpwt;
    int SHNEDlAe;
    int const  gasLM9hVwB [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int const  month1 [13] = {0, 31, 28, 31, (567 - 537), 31, 30, 31, 31, 30, 31, 30, 31};
    int tnmEpMKC [200], BUGPNlAoKz [200], yue2 [200];
    scanf ("%d", &ecuMdLpwt);
    for (hLINJdGKp = 0; ecuMdLpwt > hLINJdGKp; hLINJdGKp = hLINJdGKp + 1) {
        scanf ("%d%d%d", &tnmEpMKC[hLINJdGKp], &BUGPNlAoKz[hLINJdGKp], &yue2[hLINJdGKp]);
        if (tnmEpMKC[hLINJdGKp] % 400 == 0 || tnmEpMKC[hLINJdGKp] % 4 == 0 && tnmEpMKC[hLINJdGKp] % 100 != 0) {
            SHNEDlAe = 0;
            if (BUGPNlAoKz[hLINJdGKp] > yue2[hLINJdGKp]) {
                sZeH03J8z = BUGPNlAoKz[hLINJdGKp];
                BUGPNlAoKz[hLINJdGKp] = yue2[hLINJdGKp];
                yue2[hLINJdGKp] = sZeH03J8z;
            }
            {
                j = hLINJdGKp;
                while (j < yue2[hLINJdGKp]) {
                    SHNEDlAe = SHNEDlAe +gasLM9hVwB[j];
                    j = j + 1;
                };
            }
            if (SHNEDlAe % 7 == 0) {
            }
            else
                ;
        }
        else {
            if (BUGPNlAoKz[hLINJdGKp] > yue2[hLINJdGKp]) {
                sZeH03J8z = BUGPNlAoKz[hLINJdGKp];
                BUGPNlAoKz[hLINJdGKp] = yue2[hLINJdGKp];
                yue2[hLINJdGKp] = sZeH03J8z;
            }
            SHNEDlAe = 0;
            {
                j = hLINJdGKp;
                while (j < yue2[hLINJdGKp]) {
                    SHNEDlAe = SHNEDlAe +month1[j];
                    j = j + 1;
                };
            }
            if (SHNEDlAe % 7 == 0) {
            }
            else
                ;
        };
    }
    return 0;
}

