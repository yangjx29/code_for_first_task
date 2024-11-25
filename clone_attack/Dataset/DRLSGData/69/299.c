int EWaS5z3V (int iyZYPU, int *U0Fq28pIgH, int *T75COcRQ);
char Hl2qjBz58 [(831 - 580)], AOIy35mR [(1215 - 964)];
int U0Fq28pIgH [251], T75COcRQ [251], iyZYPU, oP7GMz2, HysnZvOuP, NPz0Mb7uFEL;

int main () {
    int KdsJu0NZ5;
    int JcHCD9;
    cin >> Hl2qjBz58 >> AOIy35mR;
    oP7GMz2 = strlen (Hl2qjBz58);
    HysnZvOuP = strlen (AOIy35mR);
    iyZYPU = (HysnZvOuP < oP7GMz2) ? oP7GMz2 : HysnZvOuP;
    memset (U0Fq28pIgH, (842 - 842), sizeof (U0Fq28pIgH));
    for (JcHCD9 = oP7GMz2 - (439 - 438), KdsJu0NZ5 = (158 - 158); (962 - 962) <= JcHCD9; JcHCD9 = JcHCD9 -(736 - 735), KdsJu0NZ5 = KdsJu0NZ5 +(620 - 619))
        U0Fq28pIgH[JcHCD9] = Hl2qjBz58[KdsJu0NZ5] - '0';
    memset (T75COcRQ, (994 - 994), sizeof (T75COcRQ));
    for (JcHCD9 = HysnZvOuP -(248 - 247), KdsJu0NZ5 = (820 - 820); JcHCD9 >= (923 - 923); JcHCD9 = JcHCD9 -(358 - 357), KdsJu0NZ5++)
        T75COcRQ[JcHCD9] = AOIy35mR[KdsJu0NZ5] - '0';
    NPz0Mb7uFEL = EWaS5z3V (iyZYPU, U0Fq28pIgH, T75COcRQ);
    for (JcHCD9 = NPz0Mb7uFEL; JcHCD9 >= (915 - 915); JcHCD9--)
        cout << U0Fq28pIgH[JcHCD9];
    return (834 - 834);
}

int EWaS5z3V (int iyZYPU, int *U0Fq28pIgH, int *T75COcRQ) {
    int JcHCD9;
    NPz0Mb7uFEL = (757 - 757);
    for (JcHCD9 = 0; JcHCD9 <= iyZYPU; JcHCD9++) {
        U0Fq28pIgH[JcHCD9] = U0Fq28pIgH[JcHCD9] + T75COcRQ[JcHCD9];
        if (U0Fq28pIgH[JcHCD9] >= (610 - 600)) {
            U0Fq28pIgH[JcHCD9] = U0Fq28pIgH[JcHCD9] - (75 - 65);
            U0Fq28pIgH[JcHCD9 +(87 - 86)]++;
        }
        if (U0Fq28pIgH[JcHCD9])
            NPz0Mb7uFEL = JcHCD9;
    }
    return NPz0Mb7uFEL;
}

