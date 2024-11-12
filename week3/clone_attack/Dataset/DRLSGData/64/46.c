double  juli (int k83yiWrDvVT, int JIMgOG, int xa8f2FSOZVk, int Fz0a2Msi3uf, int iAsolf, int RDrW2LImwJUH);

int main () {
    int N7N9zdayVI [10], O5wvJ1zb [10], z [10];
    int x1 [1000], y1 [1000], YWRzPo [1000], MDNSUQ5wHX8 [1000], y2 [1000], z2 [1000];
    int n, Ceucg0QFx = 0;
    double  Ot3JRu4a2Ul [1000];
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i++) {
        scanf ("%d", &N7N9zdayVI[i]);
        scanf ("%d", &O5wvJ1zb[i]);
        scanf ("%d", &z[i]);
    }
    {
        int k83yiWrDvVT = 0;
        while (k83yiWrDvVT < 100) {
            {
                int JIMgOG = k83yiWrDvVT + 1;
                while (JIMgOG < n) {
                    Ot3JRu4a2Ul[Ceucg0QFx] = juli (N7N9zdayVI[k83yiWrDvVT], O5wvJ1zb[k83yiWrDvVT], z[k83yiWrDvVT], N7N9zdayVI[JIMgOG], O5wvJ1zb[JIMgOG], z[JIMgOG]);
                    x1[Ceucg0QFx] = N7N9zdayVI[k83yiWrDvVT];
                    y1[Ceucg0QFx] = O5wvJ1zb[k83yiWrDvVT];
                    YWRzPo[Ceucg0QFx] = z[k83yiWrDvVT];
                    MDNSUQ5wHX8[Ceucg0QFx] = N7N9zdayVI[JIMgOG];
                    y2[Ceucg0QFx] = O5wvJ1zb[JIMgOG];
                    z2[Ceucg0QFx] = z[JIMgOG];
                    Ceucg0QFx++;
                    JIMgOG = JIMgOG +1;
                }
            }
            k83yiWrDvVT++;
        }
    }
    {
        int bGdJ8zjPH = 1;
        while (bGdJ8zjPH <= Ceucg0QFx -1) {
            double  iAsolf;
            int pFBwDUhNf7Hn;
            for (int i = 0;
            i <= Ceucg0QFx -1 - bGdJ8zjPH; i++) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (Ot3JRu4a2Ul[i] < Ot3JRu4a2Ul[i + 1]) {
                    iAsolf = Ot3JRu4a2Ul[i + 1];
                    Ot3JRu4a2Ul[i + 1] = Ot3JRu4a2Ul[i];
                    Ot3JRu4a2Ul[i] = iAsolf;
                    pFBwDUhNf7Hn = x1[i + 1];
                    x1[i + 1] = x1[i];
                    x1[i] = pFBwDUhNf7Hn;
                    pFBwDUhNf7Hn = y1[i + 1];
                    y1[i + 1] = y1[i];
                    y1[i] = pFBwDUhNf7Hn;
                    pFBwDUhNf7Hn = YWRzPo[i + 1];
                    YWRzPo[i + 1] = YWRzPo[i];
                    YWRzPo[i] = pFBwDUhNf7Hn;
                    pFBwDUhNf7Hn = MDNSUQ5wHX8[i + 1];
                    MDNSUQ5wHX8[i + 1] = MDNSUQ5wHX8[i];
                    MDNSUQ5wHX8[i] = pFBwDUhNf7Hn;
                    pFBwDUhNf7Hn = y2[i + 1];
                    y2[i + 1] = y2[i];
                    y2[i] = pFBwDUhNf7Hn;
                    pFBwDUhNf7Hn = z2[i + 1];
                    z2[i + 1] = z2[i];
                    z2[i] = pFBwDUhNf7Hn;
                }
            }
            bGdJ8zjPH++;
        }
    }
    {
        int LhwuGgl = 0;
        while (LhwuGgl < Ceucg0QFx) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x1[LhwuGgl], y1[LhwuGgl], YWRzPo[LhwuGgl], MDNSUQ5wHX8[LhwuGgl], y2[LhwuGgl], z2[LhwuGgl], Ot3JRu4a2Ul[LhwuGgl]);
            LhwuGgl++;
        }
    }
    return 0;
}

double  juli (int k83yiWrDvVT, int JIMgOG, int xa8f2FSOZVk, int Fz0a2Msi3uf, int iAsolf, int RDrW2LImwJUH) {
    double  result;
    double  l, wjn9L6mdw2MK, n;
    l = 1.0 * (Fz0a2Msi3uf -k83yiWrDvVT) * (Fz0a2Msi3uf -k83yiWrDvVT);
    wjn9L6mdw2MK = 1.0 * (iAsolf - JIMgOG) * (iAsolf - JIMgOG);
    n = 1.0 * (RDrW2LImwJUH -xa8f2FSOZVk) * (RDrW2LImwJUH -xa8f2FSOZVk);
    result = sqrt (l + wjn9L6mdw2MK + n);
    return result;
}

