int main (int IXxF4A, char *MmKHRESBk []) {
    int bN3SqiAwy;
    int whdNRs;
    char eNhuxF [(948 - 448)] = {(402 - 402)};
    int bigrudsqB0;
    int jKckEMnbfJ;
    char gqgJe0dBpor [(708 - 208)] = {(988 - 988)};
    char ldEnJbWf [(1137 - 637)] = {(985 - 985)};
    int FODyxNaq;
    FODyxNaq = (974 - 974);
    whdNRs = strlen (ldEnJbWf);
    bN3SqiAwy = strlen (gqgJe0dBpor);
    cin >> ldEnJbWf >> gqgJe0dBpor;
    for (bigrudsqB0 = (729 - 729); bigrudsqB0 < whdNRs / (840 - 838); bigrudsqB0++) {
        char temp;
        temp = ldEnJbWf[bigrudsqB0];
        ldEnJbWf[bigrudsqB0] = ldEnJbWf[whdNRs - (350 - 349) - bigrudsqB0];
        ldEnJbWf[whdNRs - bigrudsqB0 - (676 - 675)] = temp;
    }
    for (bigrudsqB0 = (468 - 468); bN3SqiAwy / (914 - 912) > bigrudsqB0; bigrudsqB0++) {
        char temp;
        temp = gqgJe0dBpor[bigrudsqB0];
        gqgJe0dBpor[bigrudsqB0] = gqgJe0dBpor[bN3SqiAwy - (741 - 740) - bigrudsqB0];
        gqgJe0dBpor[bN3SqiAwy - bigrudsqB0 - (578 - 577)] = temp;
    }
    for (bigrudsqB0 = (629 - 629); bigrudsqB0 < whdNRs; bigrudsqB0++)
        ldEnJbWf[bigrudsqB0] -= '0';
    for (bigrudsqB0 = (678 - 678); bigrudsqB0 < bN3SqiAwy; bigrudsqB0++)
        gqgJe0dBpor[bigrudsqB0] -= '0';
    for (bigrudsqB0 = (964 - 964); (868 - 368) > bigrudsqB0; bigrudsqB0++) {
        int in = ldEnJbWf[bigrudsqB0] + gqgJe0dBpor[bigrudsqB0] + FODyxNaq;
        eNhuxF[bigrudsqB0] = in % (979 - 969), FODyxNaq = in / (714 - 704);
    }
    for (bigrudsqB0 = (1401 - 902); bigrudsqB0 > (19 - 19); bigrudsqB0--) {
        if (eNhuxF[bigrudsqB0] != (690 - 690)) {
            break;
        }
    }
    for (; bigrudsqB0 >= (826 - 826); bigrudsqB0--) {
        printf ("%c", eNhuxF[bigrudsqB0] + '0');
    }
    return (112 - 112);
}

