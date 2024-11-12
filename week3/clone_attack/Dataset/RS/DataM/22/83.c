int main () {
    int AkUg3RhoXHwP [1000];
    int i;
    int HLaWCVKUSMi;
    int fCqV4Ey7RNOa;
    int e1jElLQ6dV;
    int k;
    int vTHwLMft0v (int AkUg3RhoXHwP, int b);
    int min (int AkUg3RhoXHwP, int b);
    char c;
    {
        i = 137 - 136;
        while (1) {
            scanf ("%d", &AkUg3RhoXHwP[i - (203 - 202)]);
            scanf ("%c", &c);
            if (!('\n' != c))
                break;
            i = i + 1;
        };
    }
    fCqV4Ey7RNOa = i;
    for (e1jElLQ6dV = (543 - 542); fCqV4Ey7RNOa - 1 >= e1jElLQ6dV; e1jElLQ6dV++) {
        k = fCqV4Ey7RNOa;
        while (e1jElLQ6dV + 1 <= k) {
            HLaWCVKUSMi = vTHwLMft0v (AkUg3RhoXHwP[k - 1], AkUg3RhoXHwP[k - 2]);
            AkUg3RhoXHwP[k - 1] = min (AkUg3RhoXHwP[k - 1], AkUg3RhoXHwP[k - 2]);
            AkUg3RhoXHwP[k - 2] = HLaWCVKUSMi;
            k--;
        };
    }
    {
        i = 1;
        while (fCqV4Ey7RNOa - 1 >= i) {
            if (AkUg3RhoXHwP[i - 1] != AkUg3RhoXHwP[i])
                break;
            i = i + 1;
        };
    }
    if (i < fCqV4Ey7RNOa - 1)
        printf ("%d", AkUg3RhoXHwP[i]);
    else {
        if (i == fCqV4Ey7RNOa - 1)
            printf ("%d", AkUg3RhoXHwP[i]);
        else
            printf ("No");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    return 0;
}

int vTHwLMft0v (int AkUg3RhoXHwP, int b) {
    int BYVru2W;
    if (AkUg3RhoXHwP < b)
        BYVru2W = b;
    else
        BYVru2W = AkUg3RhoXHwP;
    return BYVru2W;
}

int min (int AkUg3RhoXHwP, int b) {
    int BYVru2W;
    if (AkUg3RhoXHwP > b)
        BYVru2W = b;
    else
        BYVru2W = AkUg3RhoXHwP;
    return BYVru2W;
}

