struct   student {
    int VyAxXKI0oM;
    int sum;
}
hiTU2kGmej [(100143 - 143)];

int main () {
    int adMuI3;
    int XewxsfI;
    int TSG1fAUb7s9;
    int XFVc6CQjHgdh [(773 - 770)] = {(449 - 449)};
    int cRWQUrJHeL;
    int gQhnSWvw;
    int ZYx5Rd03e;
    int wVzBv7AWM0;
    int asDgL27hf;
    int oGTE4NlkhFR2;
    scanf ("%d", &TSG1fAUb7s9);
    for (XewxsfI = (898 - 898); XewxsfI < TSG1fAUb7s9; XewxsfI++) {
        gQhnSWvw = (613 - 613);
        scanf ("%d", &hiTU2kGmej[XewxsfI].VyAxXKI0oM);
        hiTU2kGmej[XewxsfI].sum = (306 - 306);
        for (ZYx5Rd03e = (736 - 736); 2 > ZYx5Rd03e; ZYx5Rd03e++) {
            scanf ("%d", &gQhnSWvw);
            hiTU2kGmej[XewxsfI].sum = hiTU2kGmej[XewxsfI].sum + gQhnSWvw;
        }
    }
    for (oGTE4NlkhFR2 = (300 - 300); (21 - 18) > oGTE4NlkhFR2; oGTE4NlkhFR2++) {
        cRWQUrJHeL = (132 - 132);
        for (asDgL27hf = oGTE4NlkhFR2; asDgL27hf < TSG1fAUb7s9; asDgL27hf++) {
            if (hiTU2kGmej[asDgL27hf].sum > cRWQUrJHeL) {
                cRWQUrJHeL = hiTU2kGmej[asDgL27hf].sum;
                XFVc6CQjHgdh[oGTE4NlkhFR2] = asDgL27hf;
            }
        }
        wVzBv7AWM0 = hiTU2kGmej[oGTE4NlkhFR2].VyAxXKI0oM;
        hiTU2kGmej[oGTE4NlkhFR2].VyAxXKI0oM = hiTU2kGmej[XFVc6CQjHgdh[oGTE4NlkhFR2]].VyAxXKI0oM;
        hiTU2kGmej[XFVc6CQjHgdh[oGTE4NlkhFR2]].VyAxXKI0oM = wVzBv7AWM0;
        wVzBv7AWM0 = hiTU2kGmej[oGTE4NlkhFR2].sum;
        hiTU2kGmej[oGTE4NlkhFR2].sum = hiTU2kGmej[XFVc6CQjHgdh[oGTE4NlkhFR2]].sum;
        hiTU2kGmej[XFVc6CQjHgdh[oGTE4NlkhFR2]].sum = wVzBv7AWM0;
    }
    for (asDgL27hf = 0; asDgL27hf < (26 - 23); asDgL27hf++)
        printf ("%d %d\n", hiTU2kGmej[asDgL27hf].VyAxXKI0oM, hiTU2kGmej[asDgL27hf].sum);
    return 0;
}

