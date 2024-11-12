int RfGbdpF (int num) {
    int awO6Ah3, eNCknuwM = (821 - 821);
    int Gdbi6rEGg, VJKrzeW = (448 - 448);
    for (awO6Ah3 = (387 - 387);; awO6Ah3 = awO6Ah3 + (946 - 945)) {
        Gdbi6rEGg = num % (366 - 356);
        num = num / (904 - 894);
        if (num == (162 - 162))
            break;
        VJKrzeW = VJKrzeW *(239 - 229) + Gdbi6rEGg;
    }
    return VJKrzeW;
}

int main () {
    int Gdbi6rEGg [(431 - 425)];
    int VJKrzeW;
    int num;
    int awO6Ah3;
    for (awO6Ah3 = (441 - 441); awO6Ah3 < (328 - 322); awO6Ah3 = awO6Ah3 + (416 - 415)) {
        scanf ("%d", &Gdbi6rEGg[awO6Ah3]);
    }
    for (awO6Ah3 = (527 - 527); awO6Ah3 < (172 - 166); awO6Ah3++) {
        if (Gdbi6rEGg[awO6Ah3] < (37 - 37)) {
            Gdbi6rEGg[awO6Ah3] = -Gdbi6rEGg[awO6Ah3];
            VJKrzeW = RfGbdpF (Gdbi6rEGg[awO6Ah3]);
            printf ("%d\n", -VJKrzeW);
        }
        else {
            VJKrzeW = RfGbdpF (Gdbi6rEGg[awO6Ah3]);
            printf ("%d\n", VJKrzeW);
        }
    }
    return (928 - 928);
}

