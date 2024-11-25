int main () {
    char JqrUC9KJRaWj [50] [50], *cc;
    char a [50], wid3kK [50], *aa, *iYzPVp;
    int Fd9M62RIs7mO;
    Fd9M62RIs7mO = strlen (a);
    int IS2n16JVgI = (461 - 461), AN0mSO7i62J, GIOJ1kGi = 0;
    scanf ("%s %s", a, wid3kK);
    {
        iYzPVp = wid3kK;
        while (!('\0' == *(iYzPVp + Fd9M62RIs7mO -1))) {
            AN0mSO7i62J = 0;
            for (cc = JqrUC9KJRaWj[IS2n16JVgI]; Fd9M62RIs7mO > AN0mSO7i62J; AN0mSO7i62J = AN0mSO7i62J +1, cc++) {
                *cc = *(iYzPVp + AN0mSO7i62J);
            }
            IS2n16JVgI++;
            iYzPVp++;
            *cc = '\0';
            GIOJ1kGi = GIOJ1kGi +1;
        };
    }
    {
        AN0mSO7i62J = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (GIOJ1kGi > AN0mSO7i62J) {
            if (strcmp (a, JqrUC9KJRaWj[AN0mSO7i62J]) == 0) {
                break;
            }
            AN0mSO7i62J++;
        };
    }
    printf ("%d", AN0mSO7i62J);
    return 0;
}

