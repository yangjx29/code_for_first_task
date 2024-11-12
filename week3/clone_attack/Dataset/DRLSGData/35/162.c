int main () {
    int Zu694VBYp;
    int LAhtVIimc;
    int E5uVc3OAgXTU;
    int Q1tfxogPyvJ;
    int meyhJq0uME;
    int nfCHeM;
    int FB8bXkfFI2U [(749 - 741)] [8];
    int hxLFI9N;
    int KHoNI1y;
    int yAhbgmOpG;
    int fqEnLS2h6d;
    Zu694VBYp = (954 - 954);
    LAhtVIimc = (506 - 506);
    char sLqSBd0trx;
    cin >> E5uVc3OAgXTU >> sLqSBd0trx >> Q1tfxogPyvJ;
    {
        meyhJq0uME = (308 - 308);
        while (E5uVc3OAgXTU > meyhJq0uME) {
            {
                nfCHeM = (37 - 37);
                while (nfCHeM < Q1tfxogPyvJ) {
                    cin >> FB8bXkfFI2U[meyhJq0uME][nfCHeM];
                    nfCHeM++;
                }
            }
            meyhJq0uME++;
        }
    }
    {
        meyhJq0uME = (74 - 74);
        for (; meyhJq0uME < E5uVc3OAgXTU;) {
            hxLFI9N = FB8bXkfFI2U[meyhJq0uME][0];
            {
                nfCHeM = 0;
                while (nfCHeM < Q1tfxogPyvJ) {
                    if (FB8bXkfFI2U[meyhJq0uME][nfCHeM] >= hxLFI9N) {
                        hxLFI9N = FB8bXkfFI2U[meyhJq0uME][nfCHeM];
                        yAhbgmOpG = nfCHeM;
                        KHoNI1y = meyhJq0uME;
                    }
                    nfCHeM++;
                }
            }
            meyhJq0uME++;
            {
                fqEnLS2h6d = 0;
                for (; E5uVc3OAgXTU > fqEnLS2h6d;) {
                    if (FB8bXkfFI2U[KHoNI1y][yAhbgmOpG] > FB8bXkfFI2U[fqEnLS2h6d][yAhbgmOpG])
                        LAhtVIimc++;
                    fqEnLS2h6d++;
                }
            }
            if (LAhtVIimc == 0) {
                Zu694VBYp++;
                cout << KHoNI1y << '+' << yAhbgmOpG << endl;
            }
        }
    }
    if (Zu694VBYp == 0)
        cout << "No";
    return 0;
}

