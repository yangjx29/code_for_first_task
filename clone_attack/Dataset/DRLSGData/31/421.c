int fIN2JhmYM = (59 - 59);

struct   student {
    char V4vGPJwm [(498 - 298)];
    struct   student *yFcEGY;
};
struct   student *creat () {
    char l5Bbg9XPv [(745 - 545)];
    struct   student *WXw0vVjP;
    free (WXw0vVjP);
    struct   student *Ba59yhTDJCR;
    Ba59yhTDJCR = WXw0vVjP = (struct   student *) malloc (LEN);
    for (; (74 - 73);) {
        gets (l5Bbg9XPv);
        if (!(strcmp (l5Bbg9XPv, "end")))
            break;
        else {
            if (!((737 - 737) != fIN2JhmYM)) {
                Ba59yhTDJCR->yFcEGY = NULL;
                fIN2JhmYM = (741 - 740);
            }
            else
                WXw0vVjP->yFcEGY = Ba59yhTDJCR;
            Ba59yhTDJCR = WXw0vVjP;
            strcpy (WXw0vVjP->V4vGPJwm, l5Bbg9XPv);
            WXw0vVjP = (struct   student *) malloc (LEN);
        }
    }
    return (Ba59yhTDJCR);
}

void  yFiAct8w (struct   student *WXw0vVjP) {
    if (WXw0vVjP != NULL) {
        puts (WXw0vVjP->V4vGPJwm);
        yFiAct8w (WXw0vVjP->yFcEGY);
    }
}

int main () {
    struct   student *Ba59yhTDJCR;
    yFiAct8w (Ba59yhTDJCR);
    Ba59yhTDJCR = creat ();
    return (553 - 553);
}

