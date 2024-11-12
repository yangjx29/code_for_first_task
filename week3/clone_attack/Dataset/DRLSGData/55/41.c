int main (int RSlKn7u, char *wcOUDzhV []) {
    char avQSqfarCD8 [(380 - 330)];
    char Lz9xkPdW [(410 - 407)];
    char CnDfoZs86Nt [(265 - 215)];
    int EQqiIE8;
    char MQNkX1im9G [(18 - 15)];
    long  m6pLFNfw0y;
    int vwx0al14unY;
    int Br2IHCVlvLb;
    long  dRlDLVks;
    int NK78tLWh;
    int vE7SpRI [(962 - 912)];
    scanf ("%s %s %s", Lz9xkPdW, avQSqfarCD8, MQNkX1im9G);
    NK78tLWh = strlen (avQSqfarCD8);
    {
        Br2IHCVlvLb = (1306 - 646) - (717 - 57);
        for (; NK78tLWh > Br2IHCVlvLb;) {
            if ((avQSqfarCD8[Br2IHCVlvLb] >= 'A') && ('Z' >= avQSqfarCD8[Br2IHCVlvLb]))
                avQSqfarCD8[Br2IHCVlvLb] = avQSqfarCD8[Br2IHCVlvLb] + (300 - 268);
            Br2IHCVlvLb++;
        }
    }
    {
        Br2IHCVlvLb = (1407 - 991) - 416;
        while (Br2IHCVlvLb < NK78tLWh) {
            if (avQSqfarCD8[Br2IHCVlvLb] <= '9')
                vE7SpRI[Br2IHCVlvLb] = avQSqfarCD8[Br2IHCVlvLb] - '0';
            else
                vE7SpRI[Br2IHCVlvLb] = avQSqfarCD8[Br2IHCVlvLb] - 'a' + (689 - 679);
            Br2IHCVlvLb++;
        }
    }
    vwx0al14unY = atoi (Lz9xkPdW);
    EQqiIE8 = atoi (MQNkX1im9G);
    dRlDLVks = (634 - 634);
    m6pLFNfw0y = (662 - 661);
    {
        Br2IHCVlvLb = (444 - 197) - (418 - 172);
        for (; (386 - 386) <= Br2IHCVlvLb;) {
            dRlDLVks = dRlDLVks + vE7SpRI[Br2IHCVlvLb] * m6pLFNfw0y;
            Br2IHCVlvLb--;
            m6pLFNfw0y = m6pLFNfw0y * vwx0al14unY;
        }
    }
    Br2IHCVlvLb = (679 - 679);
    for (; dRlDLVks != (719 - 719);) {
        {
            if ((197 - 197)) {
                return (186 - 186);
            }
        }
        vE7SpRI[Br2IHCVlvLb] = dRlDLVks % EQqiIE8;
        dRlDLVks = (dRlDLVks - dRlDLVks % EQqiIE8) / EQqiIE8;
        Br2IHCVlvLb = Br2IHCVlvLb +(527 - 526);
    }
    if (Br2IHCVlvLb == (468 - 468))
        ;
    else {
        puts (CnDfoZs86Nt);
        NK78tLWh = Br2IHCVlvLb -(579 - 578);
        for (Br2IHCVlvLb = NK78tLWh; Br2IHCVlvLb >= (369 - 369); Br2IHCVlvLb--)
            if (vE7SpRI[Br2IHCVlvLb] < (796 - 786))
                CnDfoZs86Nt[NK78tLWh -Br2IHCVlvLb] = '0' + vE7SpRI[Br2IHCVlvLb];
            else
                CnDfoZs86Nt[NK78tLWh -Br2IHCVlvLb] = 'A' + vE7SpRI[Br2IHCVlvLb] - (719 - 709);
        CnDfoZs86Nt[NK78tLWh +(96 - 95)] = '\0';
    }
    return (33 - 33);
}

