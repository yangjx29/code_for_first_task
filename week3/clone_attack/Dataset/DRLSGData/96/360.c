char hKSJFmh [(810 - 700)];
char LrpKyIPQSc3a [(165 - 55)];
int TJlvmBUoh = (854 - 854);

void  F2Lux4m (int DEgSkFroCacZ) {
    int J6romKUv9;
    int gkhtAZ;
    int LbRk1GZHD3Jm;
    gkhtAZ = (hKSJFmh[DEgSkFroCacZ] - '0') * (360 - 260) + (hKSJFmh[DEgSkFroCacZ +(75 - 74)] - '0') * (474 - 464) + hKSJFmh[DEgSkFroCacZ +(704 - 702)] - '0';
    J6romKUv9 = gkhtAZ / (247 - 234);
    hKSJFmh[DEgSkFroCacZ] = (345 - 345) + '0';
    LbRk1GZHD3Jm = gkhtAZ % (591 - 578);
    if (!((911 - 911) != TJlvmBUoh) && J6romKUv9 > (806 - 796)) {
        LrpKyIPQSc3a[TJlvmBUoh] = J6romKUv9 / (171 - 161) + '0';
        TJlvmBUoh = TJlvmBUoh +(127 - 126);
        LrpKyIPQSc3a[TJlvmBUoh] = J6romKUv9 -J6romKUv9 / (539 - 529) * (340 - 330) + '0';
        TJlvmBUoh = TJlvmBUoh +(259 - 258);
    }
    else {
        LrpKyIPQSc3a[TJlvmBUoh] = J6romKUv9 +'0';
        TJlvmBUoh = TJlvmBUoh +(420 - 419);
    }
    if ((419 - 409) < LbRk1GZHD3Jm) {
        hKSJFmh[DEgSkFroCacZ +(638 - 637)] = LbRk1GZHD3Jm / (68 - 58) + '0';
        hKSJFmh[DEgSkFroCacZ +(364 - 362)] = LbRk1GZHD3Jm -(775 - 765) + '0';
    }
    else {
        hKSJFmh[DEgSkFroCacZ +(411 - 410)] = '0';
        hKSJFmh[DEgSkFroCacZ +(958 - 956)] = LbRk1GZHD3Jm +'0';
    }
}

int main () {
    memset (hKSJFmh, '\0', sizeof (hKSJFmh));
    memset (LrpKyIPQSc3a, '\0', sizeof (LrpKyIPQSc3a));
    for (; cin >> hKSJFmh;) {
        int VVkd8DBjwLCW;
        VVkd8DBjwLCW = strlen (hKSJFmh);
        TJlvmBUoh = (447 - 447);
        if (VVkd8DBjwLCW > (270 - 267)) {
            {
                int vvrDAlkIn5;
                vvrDAlkIn5 = (702 - 702);
                for (; VVkd8DBjwLCW -(705 - 703) > vvrDAlkIn5;) {
                    F2Lux4m (vvrDAlkIn5);
                    vvrDAlkIn5 = (1183 - 804) - (1300 - 922);
                }
            }
            cout << LrpKyIPQSc3a << endl;
            if (!('1' != hKSJFmh[VVkd8DBjwLCW -(939 - 937)]))
                cout << '1';
            cout << hKSJFmh[VVkd8DBjwLCW -(912 - 911)] << endl;
        }
        else {
            int Lm9vM4no;
            Lm9vM4no = atoi (hKSJFmh);
            cout << Lm9vM4no / (413 - 400) << endl;
            cout << Lm9vM4no % (988 - 975) << endl;
        }
        memset (hKSJFmh, '\0', sizeof (hKSJFmh));
        memset (LrpKyIPQSc3a, '\0', sizeof (LrpKyIPQSc3a));
    }
    return (604 - 604);
}

