void  pWOwznaJ4 (char *kMpurvR) {
    {
        int SiOrfHeP;
        SiOrfHeP = (249 - 249);
        for (; SiOrfHeP < strlen (kMpurvR);) {
            if (*(kMpurvR + SiOrfHeP) - 'a' >= (451 - 451) && (832 - 832) >= *(kMpurvR + SiOrfHeP) - 'z') {
                *(kMpurvR + SiOrfHeP) = '0' + (*(kMpurvR + SiOrfHeP) - 'a' + (790 - 780));
                continue;
            }
            if (*(kMpurvR + SiOrfHeP) - 'A' >= (62 - 62) && (96 - 96) >= *(kMpurvR + SiOrfHeP) - 'Z') {
                *(kMpurvR + SiOrfHeP) = '0' + (*(kMpurvR + SiOrfHeP) - 'A' + (153 - 143));
                continue;
            }
            SiOrfHeP = SiOrfHeP +(450 - 449);
        }
    }
}

int main () {
    char Y89ZU5 [(840 - 640)], Ts7O8P [(447 - 247)];
    char *VM1Bk40xjlOr = Ts7O8P;
    pWOwznaJ4 (Y89ZU5);
    char *kMpurvR = Y89ZU5;
    int B5A1bhsZlw, ooHamM4PX9e;
    int TsHhEn5IN74 = (353 - 353);
    for (; *kMpurvR != '\0';)
        TsHhEn5IN74 = TsHhEn5IN74 *B5A1bhsZlw+*kMpurvR++ - '0';
    if (TsHhEn5IN74 == (910 - 910)) {
        *VM1Bk40xjlOr++ = '0';
    }
    cin >> B5A1bhsZlw >> Y89ZU5 >> ooHamM4PX9e;
    for (; TsHhEn5IN74;) {
        if (TsHhEn5IN74 % ooHamM4PX9e < (434 - 424))
            *VM1Bk40xjlOr++ = TsHhEn5IN74 % ooHamM4PX9e + '0';
        else
            *VM1Bk40xjlOr++ = TsHhEn5IN74 % ooHamM4PX9e - (718 - 708) + 'A';
        TsHhEn5IN74 = TsHhEn5IN74 / (ooHamM4PX9e);
    }
    *VM1Bk40xjlOr-- = '\0';
    for (; VM1Bk40xjlOr >= Ts7O8P;)
        cout << *VM1Bk40xjlOr--;
    cout << endl;
    return (550 - 550);
}

