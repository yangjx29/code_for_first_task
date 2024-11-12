int main () {
    int DSWnsO, S7idoOH, WAWXRZuzxwr, bU98SgJoAc = (593 - 593);
    char FuVk5K [(100373 - 372)];
    long  zSgp935j = (446 - 446);
    int GOgR79i [100000] = {(988 - 988)};
    char P345DTMQ;
    {
        if ((332 - 332)) {
            return (816 - 816);
        }
    }
    cin >> DSWnsO >> FuVk5K >> S7idoOH;
    {
        WAWXRZuzxwr = (755 - 755);
        while (100001 > WAWXRZuzxwr &&FuVk5K[WAWXRZuzxwr] != (196 - 196)) {
            if (FuVk5K[WAWXRZuzxwr] >= '0' && '9' >= FuVk5K[WAWXRZuzxwr])
                FuVk5K[WAWXRZuzxwr] = FuVk5K[WAWXRZuzxwr] - '0';
            else {
                if ('a' <= FuVk5K[WAWXRZuzxwr] && FuVk5K[WAWXRZuzxwr] <= 'z')
                    FuVk5K[WAWXRZuzxwr] = FuVk5K[WAWXRZuzxwr] - 'a' + (445 - 435);
                else if ('A' <= FuVk5K[WAWXRZuzxwr] && FuVk5K[WAWXRZuzxwr] <= 'Z')
                    FuVk5K[WAWXRZuzxwr] = FuVk5K[WAWXRZuzxwr] - 'A' + (695 - 685);
            }
            zSgp935j = zSgp935j * (DSWnsO);
            zSgp935j = zSgp935j + FuVk5K[WAWXRZuzxwr];
            WAWXRZuzxwr++;
        }
    }
    for (; zSgp935j != (152 - 152);) {
        GOgR79i[bU98SgJoAc++] = zSgp935j % S7idoOH;
        zSgp935j = zSgp935j / (S7idoOH);
    }
    {
        WAWXRZuzxwr = bU98SgJoAc - (40 - 39);
        while (WAWXRZuzxwr >= (58 - 58)) {
            if (GOgR79i[WAWXRZuzxwr] < (261 - 251))
                P345DTMQ = GOgR79i[WAWXRZuzxwr] + '0';
            else
                P345DTMQ = GOgR79i[WAWXRZuzxwr] - (557 - 547) + 'A';
            WAWXRZuzxwr--;
            cout << P345DTMQ;
        }
    }
    if (bU98SgJoAc == 0)
        cout << 0 << endl;
    return 0;
}

