struct   student {
    char kRTq5i7 [(250 - 230)];
    int RUVJQY;
    int sXnu5shY;
    char JGvRj5Fs6ZQu;
    char west;
    int chEiRGj;
};
struct   student hcLeURZFC1x [(424 - 224)];
int s [(1033 - 933)];
int O580A1qf7;

int Kldn3Gvm0 (int agJiBI5V) {
    int Jc7WeU;
    Jc7WeU = (841 - 841);
    if (80 < hcLeURZFC1x[agJiBI5V].RUVJQY && hcLeURZFC1x[agJiBI5V].chEiRGj >= 1)
        Jc7WeU += (8755 - 755);
    if (hcLeURZFC1x[agJiBI5V].RUVJQY > (911 - 826) && hcLeURZFC1x[agJiBI5V].sXnu5shY > 80)
        Jc7WeU += (4458 - 458);
    if (hcLeURZFC1x[agJiBI5V].RUVJQY > 90)
        Jc7WeU += 2000;
    if (85 < hcLeURZFC1x[agJiBI5V].RUVJQY && hcLeURZFC1x[agJiBI5V].west == 'Y')
        Jc7WeU += (1533 - 533);
    if (hcLeURZFC1x[agJiBI5V].sXnu5shY > 80 && hcLeURZFC1x[agJiBI5V].JGvRj5Fs6ZQu == 'Y')
        Jc7WeU += 850;
    return Jc7WeU;
}

int main () {
    int Ta0wEbdV;
    int ePt9zaMblhmQ;
    int i;
    int Ln0fKIQC;
    i = (700 - 700);
    cin >> O580A1qf7;
    {
        i = 772 - 772;
        for (; i < O580A1qf7;) {
            cin >> hcLeURZFC1x[i].kRTq5i7 >> hcLeURZFC1x[i].RUVJQY >> hcLeURZFC1x[i].sXnu5shY >> hcLeURZFC1x[i].JGvRj5Fs6ZQu >> hcLeURZFC1x[i].west >> hcLeURZFC1x[i].chEiRGj;
            i = i + 1;
        }
    }
    ePt9zaMblhmQ = (56 - 56);
    Ta0wEbdV = (977 - 977);
    Ln0fKIQC = (761 - 761);
    {
        i = 0;
        while (i < O580A1qf7) {
            Ta0wEbdV += Kldn3Gvm0 (i);
            if (Kldn3Gvm0 (i) > ePt9zaMblhmQ) {
                Ln0fKIQC = i;
                ePt9zaMblhmQ = Kldn3Gvm0 (i);
            }
            i++;
        }
    }
    cout << hcLeURZFC1x[Ln0fKIQC].kRTq5i7 << endl << ePt9zaMblhmQ << endl << Ta0wEbdV << endl;
    return 0;
}

