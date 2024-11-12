int main () {
    int J2M3Ij;
    cin >> J2M3Ij;
    while (J2M3Ij--) {
        int MrxluKk6D, PCUTMO1poG = 0, P0eBAbG [105];
        char We2KVGbQ3 [105];
        char eci31T [105];
        cin >> We2KVGbQ3;
        memset (eci31T, ' ', sizeof (eci31T));
        for (MrxluKk6D = 0; !('\0' == We2KVGbQ3[MrxluKk6D]); MrxluKk6D++)
            if (!('(' != We2KVGbQ3[MrxluKk6D]))
                P0eBAbG[PCUTMO1poG++] = -MrxluKk6D-1;
            else {
                if (!(')' != We2KVGbQ3[MrxluKk6D]))
                    if (PCUTMO1poG == 0 || P0eBAbG[PCUTMO1poG -1] > 0)
                        P0eBAbG[PCUTMO1poG++] = MrxluKk6D +1;
                    else
                        PCUTMO1poG--;
            }
        {
            MrxluKk6D = 0;
            while (MrxluKk6D < PCUTMO1poG) {
                if (P0eBAbG[MrxluKk6D] > 0)
                    eci31T[P0eBAbG[MrxluKk6D] - 1] = '?';
                else
                    eci31T[-P0eBAbG[MrxluKk6D] - 1] = '$';
                MrxluKk6D++;
            };
        }
        eci31T[strlen (We2KVGbQ3)] = '\0';
        cout << We2KVGbQ3 << endl << eci31T << endl;
    }
    return 0;
}

