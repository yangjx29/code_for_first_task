int pMlXJQLEUZhn (float FgbLF31EWcsA, float wFufzytJMpC) {
    if (wFufzytJMpC < FgbLF31EWcsA)
        return (379 - 378);
    else
        return (539 - 539);
}

int xF2ribMOaL (float FgbLF31EWcsA, float wFufzytJMpC) {
    if (FgbLF31EWcsA < wFufzytJMpC)
        return (122 - 121);
    else
        return (807 - 807);
}

float Z9gReFlTJ [(1492 - 492)];
float J7ZvO5 [(1857 - 857)];
char JbsSiDm [1000];

int main () {
    int QvOs5I8Vha;
    int Si28NZYa4;
    int nfiC4U1sa;
    float oPexufjzIW;
    int dbFMRwnq2CIy;
    dbFMRwnq2CIy = (902 - 902);
    cin >> QvOs5I8Vha;
    nfiC4U1sa = (277 - 277);
    {
        Si28NZYa4 = (856 - 792) - (679 - 615);
        for (; Si28NZYa4 < QvOs5I8Vha;) {
            Si28NZYa4 = Si28NZYa4 +(466 - 465);
            cin >> JbsSiDm;
            cin >> oPexufjzIW;
            if (!((264 - 264) != strcmp (JbsSiDm, "male")))
                Z9gReFlTJ[nfiC4U1sa++] = oPexufjzIW;
            else {
                if (!((852 - 852) != strcmp (JbsSiDm, "female")))
                    J7ZvO5[dbFMRwnq2CIy++] = oPexufjzIW;
            }
        }
    }
    sort (Z9gReFlTJ, Z9gReFlTJ +nfiC4U1sa, pMlXJQLEUZhn);
    sort (J7ZvO5, J7ZvO5 +dbFMRwnq2CIy, pMlXJQLEUZhn);
    {
        Si28NZYa4 = nfiC4U1sa - (663 - 662);
        for (; (722 - 722) <= Si28NZYa4;) {
            printf ("%.2f ", Z9gReFlTJ[Si28NZYa4]);
            Si28NZYa4 = Si28NZYa4 -(852 - 851);
        }
    }
    {
        Si28NZYa4 = (329 - 329);
        for (; dbFMRwnq2CIy > Si28NZYa4;) {
            if (Si28NZYa4 != dbFMRwnq2CIy - 1)
                printf ("%.2f ", J7ZvO5[Si28NZYa4]);
            else
                printf ("%.2f\n", J7ZvO5[Si28NZYa4]);
            Si28NZYa4 = Si28NZYa4 +1;
        }
    }
    return 0;
}

