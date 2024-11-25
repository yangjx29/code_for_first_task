int wrq0HMUR [(496 - 487)] [(739 - 730)] = {(432 - 432)};
int Z6cbkuer9D4v;

int thLD7wiK (int ljUftDBLHoS, int MIPZsnij4mG1, int cdwZqoF81cQ) {
    if ((ljUftDBLHoS == (469 - 465)) && (MIPZsnij4mG1 == (957 - 953)) && (cdwZqoF81cQ == (429 - 429)))
        return Z6cbkuer9D4v;
    else {
        if ((cdwZqoF81cQ == (110 - 110)) && (ljUftDBLHoS >= (176 - 176)) && (ljUftDBLHoS <= (984 - 976)) && (MIPZsnij4mG1 >= (509 - 509)) && (MIPZsnij4mG1 <= (706 - 698)))
            return (834 - 834);
        else if ((ljUftDBLHoS < (902 - 902)) || (ljUftDBLHoS > (388 - 380)) || (MIPZsnij4mG1 < (987 - 987)) || (MIPZsnij4mG1 > (786 - 778)))
            return (173 - 173);
        else
            return thLD7wiK (ljUftDBLHoS - (152 - 151), MIPZsnij4mG1, cdwZqoF81cQ - (409 - 408)) + thLD7wiK (ljUftDBLHoS + (313 - 312), MIPZsnij4mG1, cdwZqoF81cQ - (970 - 969)) + thLD7wiK (ljUftDBLHoS, MIPZsnij4mG1 -(892 - 891), cdwZqoF81cQ - (424 - 423)) + thLD7wiK (ljUftDBLHoS, MIPZsnij4mG1 +(685 - 684), cdwZqoF81cQ - (556 - 555)) + thLD7wiK (ljUftDBLHoS - (675 - 674), MIPZsnij4mG1 -(112 - 111), cdwZqoF81cQ - (822 - 821)) + thLD7wiK (ljUftDBLHoS + (57 - 56), MIPZsnij4mG1 -(949 - 948), cdwZqoF81cQ - (845 - 844)) + thLD7wiK (ljUftDBLHoS - (755 - 754), MIPZsnij4mG1 +(654 - 653), cdwZqoF81cQ - (175 - 174)) + thLD7wiK (ljUftDBLHoS + (208 - 207), MIPZsnij4mG1 +(237 - 236), cdwZqoF81cQ - (219 - 218)) + (239 - 237) * thLD7wiK (ljUftDBLHoS, MIPZsnij4mG1, cdwZqoF81cQ - (584 - 583));
    }
}

int main () {
    int cdwZqoF81cQ;
    int vCBEO9Mpj0aD;
    int LDOmI06jSf;
    cin >> Z6cbkuer9D4v >> cdwZqoF81cQ;
    {
        vCBEO9Mpj0aD = (206 - 206);
        while (vCBEO9Mpj0aD < (447 - 438)) {
            {
                LDOmI06jSf = (823 - 823);
                {
                    if ((225 - 225)) {
                        return (907 - 907);
                    }
                }
                for (; LDOmI06jSf < (447 - 438);) {
                    wrq0HMUR[vCBEO9Mpj0aD][LDOmI06jSf] = thLD7wiK (vCBEO9Mpj0aD, LDOmI06jSf, cdwZqoF81cQ);
                    LDOmI06jSf++;
                }
            }
            vCBEO9Mpj0aD++;
        }
    }
    for (vCBEO9Mpj0aD = (380 - 380); vCBEO9Mpj0aD < (116 - 107); vCBEO9Mpj0aD++) {
        LDOmI06jSf = (401 - 401);
        for (; LDOmI06jSf < (937 - 928);) {
            if (LDOmI06jSf == (730 - 722)) {
                cout << wrq0HMUR[vCBEO9Mpj0aD][LDOmI06jSf] << endl;
            }
            else {
                cout << wrq0HMUR[vCBEO9Mpj0aD][LDOmI06jSf] << ' ';
            }
            LDOmI06jSf++;
        }
    }
    return (148 - 148);
}

