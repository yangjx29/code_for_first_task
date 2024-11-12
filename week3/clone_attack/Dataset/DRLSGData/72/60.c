int main () {
    int RIrkKdce6S9D;
    int jWxe1BTiIlkj;
    int Rx0NO4;
    int pcxLmfr;
    int dWFjRcu;
    int aLc0FuZRtVW [20] [20];
    scanf ("%d %d", &RIrkKdce6S9D, &jWxe1BTiIlkj);
    {
        Rx0NO4 = 0;
        while (Rx0NO4 < RIrkKdce6S9D) {
            for (pcxLmfr = 0; pcxLmfr < jWxe1BTiIlkj; pcxLmfr++)
                scanf ("%d", &aLc0FuZRtVW[Rx0NO4][pcxLmfr]);
            Rx0NO4++;
        }
    }
    {
        Rx0NO4 = 0;
        while (Rx0NO4 < RIrkKdce6S9D) {
            for (pcxLmfr = 0; pcxLmfr < jWxe1BTiIlkj; pcxLmfr++) {
                {
                    if (0) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        return 0;
                    }
                }
                dWFjRcu = 1;
                if (Rx0NO4 > 0)
                    dWFjRcu = dWFjRcu * (aLc0FuZRtVW[Rx0NO4][pcxLmfr] >= aLc0FuZRtVW[Rx0NO4 -1][pcxLmfr]);
                if (pcxLmfr > 0)
                    dWFjRcu = dWFjRcu * (aLc0FuZRtVW[Rx0NO4][pcxLmfr] >= aLc0FuZRtVW[Rx0NO4][pcxLmfr - 1]);
                if (Rx0NO4 < RIrkKdce6S9D -1)
                    dWFjRcu = dWFjRcu * (aLc0FuZRtVW[Rx0NO4][pcxLmfr] >= aLc0FuZRtVW[Rx0NO4 +1][pcxLmfr]);
                if (pcxLmfr < jWxe1BTiIlkj - 1)
                    dWFjRcu = dWFjRcu * (aLc0FuZRtVW[Rx0NO4][pcxLmfr] >= aLc0FuZRtVW[Rx0NO4][pcxLmfr + 1]);
                if (dWFjRcu == 1)
                    printf ("%d %d\n", Rx0NO4, pcxLmfr);
            }
            Rx0NO4++;
        }
    }
    return 0;
}

