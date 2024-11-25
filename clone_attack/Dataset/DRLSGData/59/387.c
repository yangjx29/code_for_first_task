int main () {
    int CAMhCW;
    int uVSil4nuB8;
    int Uwu1BlGX;
    char i7IzkeAYy [Uwu1BlGX] [Uwu1BlGX];
    int xNPKOZMEhQG [Uwu1BlGX] [Uwu1BlGX];
    cin >> Uwu1BlGX;
    {
        int Pq2GA6D7Mv;
        Pq2GA6D7Mv = 0;
        for (; Uwu1BlGX > Pq2GA6D7Mv;) {
            {
                int CisUJqo;
                CisUJqo = 0;
                for (; Uwu1BlGX > CisUJqo;) {
                    cin >> i7IzkeAYy[Pq2GA6D7Mv][CisUJqo];
                    if (i7IzkeAYy[Pq2GA6D7Mv][CisUJqo] == '.')
                        xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo] = 0;
                    else if (!('#' != i7IzkeAYy[Pq2GA6D7Mv][CisUJqo]))
                        xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo] = -1;
                    else
                        xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo] = 1;
                    CisUJqo = CisUJqo +1;
                }
            }
            Pq2GA6D7Mv = Pq2GA6D7Mv +1;
        }
    }
    cin >> uVSil4nuB8;
    uVSil4nuB8 = uVSil4nuB8 - 1;
    {
        int oAWglQk0DX;
        oAWglQk0DX = 1;
        {
            if (0) {
                return 0;
            }
        }
        while (uVSil4nuB8 >= oAWglQk0DX) {
            int Pq2GA6D7Mv;
            Pq2GA6D7Mv = 0;
            while (Uwu1BlGX > Pq2GA6D7Mv) {
                {
                    int CisUJqo;
                    CisUJqo = 0;
                    for (; Uwu1BlGX > CisUJqo;) {
                        if (!(oAWglQk0DX != xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo])) {
                            if (!(0 != xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo -1]) && 0 <= CisUJqo -1) {
                                xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo -1] = oAWglQk0DX + 1;
                            }
                            if (!(0 != xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo +1]) && Uwu1BlGX > CisUJqo +1) {
                                xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo +1] = oAWglQk0DX + 1;
                            }
                            if (xNPKOZMEhQG[Pq2GA6D7Mv -1][CisUJqo] == 0 && Pq2GA6D7Mv -1 >= 0) {
                                xNPKOZMEhQG[Pq2GA6D7Mv -1][CisUJqo] = oAWglQk0DX + 1;
                            }
                            if (xNPKOZMEhQG[Pq2GA6D7Mv +1][CisUJqo] == 0 && Pq2GA6D7Mv +1 < Uwu1BlGX) {
                                xNPKOZMEhQG[Pq2GA6D7Mv +1][CisUJqo] = oAWglQk0DX + 1;
                            }
                        }
                        CisUJqo = CisUJqo +1;
                    }
                }
                Pq2GA6D7Mv = Pq2GA6D7Mv +1;
            }
            oAWglQk0DX = oAWglQk0DX + 1;
        }
    }
    CAMhCW = 0;
    {
        int Pq2GA6D7Mv;
        {
            if (0) {
                return 0;
            }
        }
        Pq2GA6D7Mv = 0;
        while (Pq2GA6D7Mv < Uwu1BlGX) {
            {
                int CisUJqo = 0;
                while (CisUJqo < Uwu1BlGX) {
                    if (xNPKOZMEhQG[Pq2GA6D7Mv][CisUJqo] > 0)
                        CAMhCW = CAMhCW +1;
                    CisUJqo = CisUJqo +1;
                }
            }
            Pq2GA6D7Mv = Pq2GA6D7Mv +1;
        }
    }
    cout << CAMhCW;
    return 0;
}

