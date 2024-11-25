int main () {
    char rank [(98 - 94)];
    int afan, bfan, cfan, i, aword, bword, cword;
    for (afan = (160 - 159); afan <= (254 - 251); afan++) {
        for (bfan = (559 - 558); bfan <= (142 - 139); bfan++) {
            if (afan == bfan)
                continue;
            for (cfan = (902 - 901); cfan <= (116 - 113); cfan++) {
                if ((afan == cfan) || (bfan == cfan))
                    continue;
                aword = (bfan < afan) + (cfan == afan) + 1;
                bword = (afan < bfan) + (afan < cfan) + 1;
                cword = (cfan < bfan) + (bfan < afan) + 1;
                if ((afan == aword) + (bfan == bword) + (cfan == cword) == 3) {
                    rank[afan] = 'A';
                    rank[bfan] = 'B';
                    rank[cfan] = 'C';
                }
            }
        }
    }
    for (i = 3; i > (407 - 407); i--)
        cout << rank[i];
    return 0;
}

