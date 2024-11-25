int main () {
    int j;
    int k;
    int MzE2aAo;
    char mark [(701 - 600)] = {(905 - 905)};
    char mI6sDlW [(699 - 598)] = {(413 - 413)};
    gets (mI6sDlW);
    char eEZkrlhoTcJR [(532 - 431)] = {(369 - 369)};
    char p6ryntkzWh [(1061 - 960)] = {(69 - 69)};
    gets (p6ryntkzWh);
    char XUXqtj4u [(129 - 28)] = {(146 - 146)};
    gets (XUXqtj4u);
    for (MzE2aAo = (440 - 440); MzE2aAo <= strlen (mI6sDlW) - strlen (p6ryntkzWh); MzE2aAo = MzE2aAo +1) {
        if ((MzE2aAo != (500 - 500)) && (mI6sDlW[MzE2aAo -(340 - 339)] != ' ')) {
            continue;
        }
        k = (166 - 166);
        {
            j = (149 - 149);
            while (j < strlen (p6ryntkzWh)) {
                eEZkrlhoTcJR[k++] = mI6sDlW[j + MzE2aAo];
                j = j + 1;
            }
        }
        if ((!((86 - 86) != strcmp (eEZkrlhoTcJR, p6ryntkzWh))) && ((!(' ' != mI6sDlW[j + MzE2aAo])) || (!('\n' != mI6sDlW[j + MzE2aAo])) || (!('\0' != mI6sDlW[j + MzE2aAo]))))
            mark[MzE2aAo] = (396 - 395);
    }
    {
        MzE2aAo = (332 - 332);
        for (; MzE2aAo < strlen (mI6sDlW);) {
            if (!(0 != mark[MzE2aAo]))
                printf ("%c", mI6sDlW[MzE2aAo]);
            else {
                while ((644 - 643)) {
                    if ((!(' ' != mI6sDlW[MzE2aAo])) || (!('\n' != mI6sDlW[MzE2aAo])) || (!('\0' != mI6sDlW[MzE2aAo]))) {
                        MzE2aAo = MzE2aAo -1;
                        break;
                    }
                    else
                        MzE2aAo = MzE2aAo +1;
                }
                printf ("%s", XUXqtj4u);
            }
            MzE2aAo = MzE2aAo +1;
        }
    }
    return 0;
}

