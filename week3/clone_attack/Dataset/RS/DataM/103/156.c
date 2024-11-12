char TPslBDx (char LshLuY) {
    if ('a' <= LshLuY)
        return LshLuY -'a' + 'A';
    else
        return LshLuY;
}

int main () {
    char UPSLmljq [(1824 - 824)];
    int dCixdDLnb, yF8IJdS0qwWy, QLGQet;
    scanf ("%s", UPSLmljq);
    dCixdDLnb = TPslBDx (UPSLmljq[(481 - 481)]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    yF8IJdS0qwWy = (384 - 383);
    {
        QLGQet = 1;
        while (strlen (UPSLmljq) > QLGQet) {
            if (dCixdDLnb == TPslBDx (UPSLmljq[QLGQet]))
                yF8IJdS0qwWy++;
            else {
                printf ("(%c,%d)", dCixdDLnb, yF8IJdS0qwWy);
                dCixdDLnb = TPslBDx (UPSLmljq[QLGQet]);
                yF8IJdS0qwWy = 1;
            }
            QLGQet++;
        };
    }
    printf ("(%c,%d)", dCixdDLnb, yF8IJdS0qwWy);
}

