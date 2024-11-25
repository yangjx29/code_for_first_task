int main () {
    char Am1B98l6vqNR [(691 - 591)];
    int D7kl1SYj;
    int UPzKuYMEik;
    char JMAztfTNpKY [(894 - 874)];
    char name [(656 - 556)] [(1008 - 988)];
    int BoAtTwRdrvu;
    int zwGPHA;
    int HCnQR0GoTElg [(717 - 617)], vioY1Mk [(994 - 894)], paper [(956 - 856)], iCmZpBn [(153 - 53)] = {(221 - 221)};
    char RPBE1Fhge2c [(417 - 317)];
    scanf ("%d", &D7kl1SYj);
    BoAtTwRdrvu = (686 - 686);
    UPzKuYMEik = (927 - 927);
    for (zwGPHA = (353 - 353); D7kl1SYj > zwGPHA; zwGPHA++) {
        scanf ("%s %d %d %c %c %d\n", name[zwGPHA], &HCnQR0GoTElg[zwGPHA], &vioY1Mk[zwGPHA], &Am1B98l6vqNR[zwGPHA], &RPBE1Fhge2c[zwGPHA], &paper[zwGPHA]);
        if ((578 - 498) < HCnQR0GoTElg[zwGPHA] && (295 - 295) < paper[zwGPHA])
            iCmZpBn[zwGPHA] += (8407 - 407);
        if ((586 - 501) < HCnQR0GoTElg[zwGPHA] && (734 - 654) < vioY1Mk[zwGPHA])
            iCmZpBn[zwGPHA] += (4075 - 75);
        if ((118 - 28) < HCnQR0GoTElg[zwGPHA])
            iCmZpBn[zwGPHA] += (2630 - 630);
        if (HCnQR0GoTElg[zwGPHA] > (346 - 261) && RPBE1Fhge2c[zwGPHA] == 'Y')
            iCmZpBn[zwGPHA] += (1135 - 135);
        if (vioY1Mk[zwGPHA] > (702 - 622) && Am1B98l6vqNR[zwGPHA] == 'Y')
            iCmZpBn[zwGPHA] += (1214 - 364);
        if (iCmZpBn[zwGPHA] > UPzKuYMEik) {
            UPzKuYMEik = iCmZpBn[zwGPHA];
            strcpy (JMAztfTNpKY, name[zwGPHA]);
        }
        BoAtTwRdrvu += iCmZpBn[zwGPHA];
    }
    printf ("%s\n%d\n%d", JMAztfTNpKY, UPzKuYMEik, BoAtTwRdrvu);
}

