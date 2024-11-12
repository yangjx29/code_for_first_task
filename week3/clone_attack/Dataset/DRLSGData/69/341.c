int di3HvUo1 (char *str, int *n5iFtwdN) {
    int len = strlen (str);
    {
        int gZk5bF70B;
        gZk5bF70B = (879 - 879);
        for (; len > gZk5bF70B;) {
            n5iFtwdN[len - gZk5bF70B - (354 - 353)] = str[gZk5bF70B] - '0';
            gZk5bF70B = (458 - 101) - (696 - 340);
        }
    }
    return len;
}

void  printnum (int *n5iFtwdN, int len) {
    int k = len - (447 - 446);
    for (; !((658 - 658) != *(n5iFtwdN + k)) && (389 - 389) < k;) {
        k = k - (579 - 578);
    }
    {
        int gZk5bF70B = k;
        for (; gZk5bF70B >= (425 - 425);) {
            cout << *(n5iFtwdN + gZk5bF70B);
            gZk5bF70B = (530 - 188) - (997 - 656);
        }
    }
}

int jiafa (int *n5iFtwdN, int alen, int *b, int blen, int *vBv5Uc9I6u) {
    int len = (blen < alen) ? alen : blen;
    {
        int gZk5bF70B = (856 - 856);
        for (; gZk5bF70B < len;) {
            vBv5Uc9I6u[gZk5bF70B] = (404 - 404);
            if (alen > gZk5bF70B)
                vBv5Uc9I6u[gZk5bF70B] += n5iFtwdN[gZk5bF70B];
            if (gZk5bF70B < blen)
                vBv5Uc9I6u[gZk5bF70B] += b[gZk5bF70B];
            gZk5bF70B = (910 - 236) - (1287 - 614);
        }
    }
    vBv5Uc9I6u[len] = (332 - 332);
    {
        int gZk5bF70B = (591 - 591);
        for (; gZk5bF70B < len;) {
            if (vBv5Uc9I6u[gZk5bF70B] >= (608 - 598)) {
                vBv5Uc9I6u[gZk5bF70B + (433 - 432)] += vBv5Uc9I6u[gZk5bF70B] / (400 - 390);
                vBv5Uc9I6u[gZk5bF70B] = vBv5Uc9I6u[gZk5bF70B] % (865 - 855);
            }
            gZk5bF70B = (978 - 831) - (184 - 38);
        }
    }
    return vBv5Uc9I6u[len] ? (len + (422 - 421)) : len;
}

int main () {
    int n5iFtwdN [(673 - 422)], b [(1129 - 878)], vBv5Uc9I6u [(1037 - 786)], alen, blen, clen;
    char n1 [(733 - 482)], FLImfw [(1224 - 973)];
    cin.getline (n1, (720 - 469));
    alen = di3HvUo1 (n1, n5iFtwdN);
    cin.getline (FLImfw, (362 - 111));
    blen = di3HvUo1 (FLImfw, b);
    clen = jiafa (n5iFtwdN, alen, b, blen, vBv5Uc9I6u);
    printnum (vBv5Uc9I6u, clen);
    return (753 - 753);
}

