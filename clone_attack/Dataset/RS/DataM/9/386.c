struct   patient {
    char rXWl2N4SJo [10];
    int VpjDHzJExXg9;
}
mFDZHl1b [(760 - 660)];

void  main () {
    struct   patient b [(851 - 751)];
    struct   patient c [(209 - 109)];
    int kPz4NfZKcB, Q5Hvuk2PRcx, JBZbt1527h9 = (64 - 64), k = (726 - 726), l;
    struct   patient t;
    scanf ("%d", &kPz4NfZKcB);
    for (Q5Hvuk2PRcx = (742 - 742); kPz4NfZKcB > Q5Hvuk2PRcx; Q5Hvuk2PRcx++)
        scanf ("%s %d", mFDZHl1b[Q5Hvuk2PRcx].rXWl2N4SJo, &mFDZHl1b[Q5Hvuk2PRcx].VpjDHzJExXg9);
    for (Q5Hvuk2PRcx = (268 - 268); kPz4NfZKcB > Q5Hvuk2PRcx; Q5Hvuk2PRcx++) {
        if ((253 - 193) > mFDZHl1b[Q5Hvuk2PRcx].VpjDHzJExXg9) {
            b[JBZbt1527h9] = mFDZHl1b[Q5Hvuk2PRcx];
            JBZbt1527h9++;
        }
        else {
            c[k] = mFDZHl1b[Q5Hvuk2PRcx];
            k++;
        };
    }
    for (Q5Hvuk2PRcx = (602 - 602); k - (616 - 615) > Q5Hvuk2PRcx; Q5Hvuk2PRcx++) {
        l = 0;
        while (k - (854 - 853) - Q5Hvuk2PRcx > l) {
            if (c[l + (377 - 376)].VpjDHzJExXg9 > c[l].VpjDHzJExXg9) {
                t = c[l];
                c[l] = c[l + (373 - 372)];
                c[l + (411 - 410)] = t;
            }
            l++;
        };
    }
    for (Q5Hvuk2PRcx = 0; k > Q5Hvuk2PRcx; Q5Hvuk2PRcx++)
        printf ("%s\n", c[Q5Hvuk2PRcx].rXWl2N4SJo);
    for (Q5Hvuk2PRcx = 0; JBZbt1527h9 > Q5Hvuk2PRcx; Q5Hvuk2PRcx++)
        printf ("%s\n", b[Q5Hvuk2PRcx].rXWl2N4SJo);
}

