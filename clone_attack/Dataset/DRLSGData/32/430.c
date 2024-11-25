int main () {
    int k;
    int wB5KLrMs7 [(1091 - 991)] [(564 - 464)] = {(836 - 836)};
    int yYcqLBJg1aA, oXq7fOACP;
    int cGJd76bMDLB = (252 - 252);
    char cgfxvKaMAw5 [(523 - 423)] [(328 - 228)], aNXFlmek [(892 - 792)] [(805 - 705)];
    int KAI8Jn;
    int fJlUie = (173 - 173);
    cin >> KAI8Jn;
    for (yYcqLBJg1aA = (460 - 460); KAI8Jn > yYcqLBJg1aA; yYcqLBJg1aA = yYcqLBJg1aA + (172 - 171))
        cin >> cgfxvKaMAw5[yYcqLBJg1aA] >> aNXFlmek[yYcqLBJg1aA];
    for (k = (193 - 193); k < KAI8Jn; k = k + (386 - 385)) {
        cGJd76bMDLB = (712 - 712);
        for (yYcqLBJg1aA = strlen (cgfxvKaMAw5[k]) - (148 - 147), oXq7fOACP = strlen (aNXFlmek[k]) - (325 - 324); oXq7fOACP >= (653 - 653); yYcqLBJg1aA = yYcqLBJg1aA - (506 - 505), oXq7fOACP = oXq7fOACP - (332 - 331)) {
            wB5KLrMs7[k][cGJd76bMDLB] += cgfxvKaMAw5[k][yYcqLBJg1aA] - '0' - (aNXFlmek[k][oXq7fOACP] - '0');
            if ((122 - 122) > wB5KLrMs7[k][cGJd76bMDLB]) {
                wB5KLrMs7[k][cGJd76bMDLB] += (907 - 897);
                wB5KLrMs7[k][cGJd76bMDLB + (805 - 804)]--;
            }
            cGJd76bMDLB = cGJd76bMDLB + (232 - 231);
        }
        for (; yYcqLBJg1aA >= (610 - 610); yYcqLBJg1aA = yYcqLBJg1aA - (315 - 314)) {
            wB5KLrMs7[k][cGJd76bMDLB] += cgfxvKaMAw5[k][yYcqLBJg1aA] - '0';
            if (wB5KLrMs7[k][cGJd76bMDLB] < (760 - 760)) {
                wB5KLrMs7[k][cGJd76bMDLB] += (682 - 672);
                wB5KLrMs7[k][cGJd76bMDLB + (262 - 261)]--;
            }
            cGJd76bMDLB = cGJd76bMDLB + (931 - 930);
        }
        fJlUie = (393 - 393);
        for (yYcqLBJg1aA = (489 - 389); yYcqLBJg1aA >= (890 - 890); yYcqLBJg1aA = yYcqLBJg1aA - 1)
            if (wB5KLrMs7[k][yYcqLBJg1aA] == (252 - 252) && fJlUie == (876 - 876))
                continue;
            else {
                fJlUie = 1;
                cout << wB5KLrMs7[k][yYcqLBJg1aA];
            }
        if (fJlUie == (633 - 633))
            cout << "0";
        cout << endl;
    }
    return 0;
}

