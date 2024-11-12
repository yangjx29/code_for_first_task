int main () {
    char *Alf8RXZwgMe4;
    int SU3k0f;
    char *q1;
    char MqFEpG [100] [1000];
    char F1drlFYm [4];
    gets (F1drlFYm);
    char *FsVFdcQJ;
    int I8bEItmqALx;
    SU3k0f = atoi (F1drlFYm);
    for (Alf8RXZwgMe4 = *MqFEpG; *(MqFEpG +SU3k0f) > Alf8RXZwgMe4; Alf8RXZwgMe4 += 1000)
        gets (Alf8RXZwgMe4);
    {
        Alf8RXZwgMe4 = *MqFEpG;
        for (; Alf8RXZwgMe4 < *(MqFEpG +SU3k0f);) {
            for (q1 = Alf8RXZwgMe4; q1 < Alf8RXZwgMe4 +strlen (Alf8RXZwgMe4); q1 = q1 + 1) {
                I8bEItmqALx = 0;
                for (FsVFdcQJ = Alf8RXZwgMe4; Alf8RXZwgMe4 +strlen (Alf8RXZwgMe4) > FsVFdcQJ; FsVFdcQJ = FsVFdcQJ +1) {
                    if (!(*FsVFdcQJ != *q1))
                        I8bEItmqALx = I8bEItmqALx +1;
                    if (!(2 != I8bEItmqALx))
                        break;
                }
                if (!(Alf8RXZwgMe4 +strlen (Alf8RXZwgMe4) != FsVFdcQJ)) {
                    printf ("%c\n", *q1);
                    break;
                }
            }
            if (!(Alf8RXZwgMe4 +strlen (Alf8RXZwgMe4) != q1))
                ;
            Alf8RXZwgMe4 += 1000;
        }
    }
    return 0;
}

