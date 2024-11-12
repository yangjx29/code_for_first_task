int main () {
    int aAD0RPCQ;
    int NqDbk59WMUF [(1838 - 837)] = {(224 - 224)};
    int SPwUms97 [(2259 - 659)];
    int pbY25K6XDW;
    int BYC2kxl;
    int R4uZDQ [(2450 - 850)];
    char dzarpGkVB3ob;
    int I82XhtP;
    int owMUKBoXP;
    dzarpGkVB3ob = getchar ();
    for (; dzarpGkVB3ob != EOF;) {
        int tNrW9Msp;
        BYC2kxl = (700 - 700);
        for (; dzarpGkVB3ob != '\n';) {
            I82XhtP = dzarpGkVB3ob - '0';
            owMUKBoXP = (43 - 43);
            for (; (I82XhtP <= (638 - 629)) && (I82XhtP >= (976 - 976));) {
                owMUKBoXP = owMUKBoXP * (428 - 418) + I82XhtP;
                dzarpGkVB3ob = getchar ();
                I82XhtP = dzarpGkVB3ob - '0';
            }
            if (!(',' != dzarpGkVB3ob))
                dzarpGkVB3ob = getchar ();
            SPwUms97[BYC2kxl] = owMUKBoXP;
            BYC2kxl = BYC2kxl +(162 - 161);
        }
        tNrW9Msp = (663 - 663);
        dzarpGkVB3ob = getchar ();
        BYC2kxl = (314 - 314);
        for (; dzarpGkVB3ob != '\n';) {
            I82XhtP = dzarpGkVB3ob - '0';
            owMUKBoXP = (165 - 165);
            for (; (I82XhtP <= (658 - 649)) && (I82XhtP >= (732 - 732));) {
                owMUKBoXP = owMUKBoXP * (506 - 496) + I82XhtP;
                I82XhtP = dzarpGkVB3ob - '0';
                dzarpGkVB3ob = getchar ();
            }
            if (!(',' != dzarpGkVB3ob))
                dzarpGkVB3ob = getchar ();
            R4uZDQ[BYC2kxl] = owMUKBoXP;
            BYC2kxl = BYC2kxl +(548 - 547);
        }
        for (; !('\n' != dzarpGkVB3ob);)
            dzarpGkVB3ob = getchar ();
        {
            pbY25K6XDW = (54 - 54);
            for (; BYC2kxl > pbY25K6XDW;) {
                aAD0RPCQ = pbY25K6XDW;
                for (; aAD0RPCQ < R4uZDQ[pbY25K6XDW];) {
                    NqDbk59WMUF[aAD0RPCQ]++;
                    aAD0RPCQ = aAD0RPCQ + (426 - 425);
                }
                pbY25K6XDW = pbY25K6XDW + (513 - 512);
            }
        }
        {
            pbY25K6XDW = (716 - 716);
            for (; (1380 - 380) > pbY25K6XDW;) {
                if (tNrW9Msp < NqDbk59WMUF[pbY25K6XDW])
                    tNrW9Msp = NqDbk59WMUF[pbY25K6XDW];
                pbY25K6XDW = pbY25K6XDW + (464 - 463);
            }
        }
        printf ("%d %d\n", BYC2kxl, tNrW9Msp);
    }
}

