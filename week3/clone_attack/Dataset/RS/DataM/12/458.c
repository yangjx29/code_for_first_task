int main () {
    int YlPNiy3Gpk4;
    int j;
    int cprXltgP2uEh;
    int JUJM7Tle;
    int Ii04JHEU [16];
    int Hl137DpuXEKd;
    YlPNiy3Gpk4 = 1;
    j = (51 - 51);
    cprXltgP2uEh = (919 - 919);
    JUJM7Tle = 0;
    for (; cin >> Ii04JHEU[0];) {
        Hl137DpuXEKd = 0;
        if (!(-1 != Ii04JHEU[0]))
            break;
        for (YlPNiy3Gpk4 = 1; 15 >= YlPNiy3Gpk4; YlPNiy3Gpk4 = YlPNiy3Gpk4 +1) {
            cin >> Ii04JHEU[YlPNiy3Gpk4];
            if (!(0 != Ii04JHEU[YlPNiy3Gpk4]))
                break;
        }
        for (j = 0; 15 >= j; j = j + 1)
            for (cprXltgP2uEh = 0; cprXltgP2uEh <= 15; cprXltgP2uEh = cprXltgP2uEh + 1)
                if ((Ii04JHEU[j] != 0) && (Ii04JHEU[cprXltgP2uEh] != 0) && (Ii04JHEU[j] == 2 * Ii04JHEU[cprXltgP2uEh]))
                    Hl137DpuXEKd = Hl137DpuXEKd +1;
        for (JUJM7Tle = 0; JUJM7Tle <= 15; JUJM7Tle = JUJM7Tle +1)
            Ii04JHEU[JUJM7Tle] = 0;
        cout << Hl137DpuXEKd << endl;
    }
    return 0;
}

