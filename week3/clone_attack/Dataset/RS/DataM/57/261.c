int main (int argc, char *VUajOK4H []) {
    char SBpdSs [40];
    int YnEaTYLzh;
    int TlucmXiZHT;
    int HMh0f4CeS18k;
    scanf ("%d", &YnEaTYLzh);
    {
        TlucmXiZHT = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TlucmXiZHT <= YnEaTYLzh) {
            TlucmXiZHT = TlucmXiZHT +1;
            scanf ("%s", SBpdSs);
            HMh0f4CeS18k = strlen (SBpdSs);
            if (!('e' != SBpdSs[HMh0f4CeS18k -2]) && SBpdSs[HMh0f4CeS18k -1] == 'r')
                SBpdSs[HMh0f4CeS18k -2] = '\0';
            else if (!('l' != SBpdSs[HMh0f4CeS18k -2]) && SBpdSs[HMh0f4CeS18k -1] == 'y')
                SBpdSs[HMh0f4CeS18k -2] = '\0';
            else if (SBpdSs[HMh0f4CeS18k -3] == 'i' && SBpdSs[HMh0f4CeS18k -2] == 'n' && SBpdSs[HMh0f4CeS18k -1] == 'g')
                SBpdSs[HMh0f4CeS18k -3] = '\0';
            printf ("%s\n", SBpdSs);
        };
    }
    return EXIT_SUCCESS;
}

