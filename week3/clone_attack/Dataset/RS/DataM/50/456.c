int main () {
    int lEfUNYC [12];
    int EvN9smPSH8a, NpBT31mng90D, SFkjZhDfA1eK;
    scanf ("%d", &EvN9smPSH8a);
    lEfUNYC[0] = 12;
    lEfUNYC[1] = (400 - 357);
    lEfUNYC[(943 - 941)] = 71;
    lEfUNYC[(67 - 64)] = 102;
    lEfUNYC[4] = 132;
    lEfUNYC[(453 - 448)] = 163;
    lEfUNYC[6] = (353 - 160);
    lEfUNYC[7] = 224;
    lEfUNYC[(790 - 782)] = 255;
    lEfUNYC[9] = 285;
    lEfUNYC[10] = 316;
    lEfUNYC[(504 - 493)] = 346;
    {
        NpBT31mng90D = 0;
        while (NpBT31mng90D <= 11) {
            lEfUNYC[NpBT31mng90D] = EvN9smPSH8a +(lEfUNYC[NpBT31mng90D] % 7);
            if (lEfUNYC[NpBT31mng90D] > 7) {
                lEfUNYC[NpBT31mng90D] = lEfUNYC[NpBT31mng90D] - 7;
            }
            if (lEfUNYC[NpBT31mng90D] == 5) {
                printf ("%d\n", (NpBT31mng90D +1));
            }
            NpBT31mng90D = NpBT31mng90D +1;
        };
    }
    return 0;
}

