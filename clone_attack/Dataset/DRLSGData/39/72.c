struct   student {
    int bYKE5l7gaBF;
    char tx8lnGKM [20];
    int ZYzj7N;
    int GopILNC;
    char af7AkL6;
    char J1EX0uDfH2J;
    int NosT2nHeKQ;
};
struct   jiangxuejin {
    int bYKE5l7gaBF;
    int Di3N2etKU869;
};
int main () {
    struct   student mZ1jD3QwEsS [100];
    struct   student mS6a07t8;
    struct   jiangxuejin everyone [100];
    struct   jiangxuejin fNlbXDvq;
    int n;
    int P3woQIrfE;
    int d9kdILCA;
    scanf ("%d", &n);
    {
        d9kdILCA = 0;
        while (n > d9kdILCA) {
            mZ1jD3QwEsS[d9kdILCA].bYKE5l7gaBF = d9kdILCA;
            scanf ("%s %d %d %c %c %d", mZ1jD3QwEsS[d9kdILCA].tx8lnGKM, &mZ1jD3QwEsS[d9kdILCA].ZYzj7N, &mZ1jD3QwEsS[d9kdILCA].GopILNC, &mZ1jD3QwEsS[d9kdILCA].af7AkL6, &mZ1jD3QwEsS[d9kdILCA].J1EX0uDfH2J, &mZ1jD3QwEsS[d9kdILCA].NosT2nHeKQ);
            d9kdILCA++;
        }
    }
    {
        d9kdILCA = 0;
        while (n > d9kdILCA) {
            everyone[d9kdILCA].bYKE5l7gaBF = d9kdILCA;
            everyone[d9kdILCA].Di3N2etKU869 = 0;
            if (80 < mZ1jD3QwEsS[d9kdILCA].ZYzj7N && 1 <= mZ1jD3QwEsS[d9kdILCA].NosT2nHeKQ) {
                everyone[d9kdILCA].Di3N2etKU869 += 8000;
            }
            if (mZ1jD3QwEsS[d9kdILCA].ZYzj7N > 85 && 80 < mZ1jD3QwEsS[d9kdILCA].GopILNC) {
                everyone[d9kdILCA].Di3N2etKU869 += 4000;
            }
            if (90 < mZ1jD3QwEsS[d9kdILCA].ZYzj7N) {
                everyone[d9kdILCA].Di3N2etKU869 += 2000;
            }
            if (mZ1jD3QwEsS[d9kdILCA].ZYzj7N > 85 && !('Y' != mZ1jD3QwEsS[d9kdILCA].J1EX0uDfH2J)) {
                everyone[d9kdILCA].Di3N2etKU869 += 1000;
            }
            if (mZ1jD3QwEsS[d9kdILCA].GopILNC > 80 && !('Y' != mZ1jD3QwEsS[d9kdILCA].af7AkL6)) {
                everyone[d9kdILCA].Di3N2etKU869 += 850;
            }
            d9kdILCA++;
        }
    }
    fNlbXDvq = everyone[0];
    mS6a07t8 = mZ1jD3QwEsS[0];
    {
        d9kdILCA = 1;
        while (d9kdILCA < n) {
            if (everyone[d9kdILCA].Di3N2etKU869 > fNlbXDvq.Di3N2etKU869) {
                mS6a07t8 = mZ1jD3QwEsS[d9kdILCA];
                fNlbXDvq = everyone[d9kdILCA];
            }
            d9kdILCA++;
        }
    }
    P3woQIrfE = 0;
    {
        d9kdILCA = 0;
        while (d9kdILCA < n) {
            P3woQIrfE += everyone[d9kdILCA].Di3N2etKU869;
            d9kdILCA++;
        }
    }
    printf ("%s\n%d\n%d", mS6a07t8.tx8lnGKM, fNlbXDvq.Di3N2etKU869, P3woQIrfE);
    return 0;
}

