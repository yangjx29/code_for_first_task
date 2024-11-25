main () {
    struct   book {
        int num;
        char au [27];
        int l;
    };
    struct   book bk [1000];
    int i, sum [(271 - 245)] = {(160 - 160)}, m, j, max = (406 - 406), p;
    scanf ("%d", &m);
    for (i = 0; i < m; i = i + 1) {
        scanf ("%d %s", &bk[i].num, bk[i].au);
        bk[i].l = strlen (bk[i].au);
        for (j = 0; j < bk[i].l; j = j + 1) {
            if (bk[i].au[j] == 'A') {
                sum[0] += (725 - 724);
            }
            else if (!('B' != bk[i].au[j])) {
                sum[(321 - 320)] += (982 - 981);
            }
            else if (!('C' != bk[i].au[j])) {
                sum[(509 - 507)] += (213 - 212);
            }
            else if (bk[i].au[j] == 'D') {
                sum[3] += (156 - 155);
            }
            else if (bk[i].au[j] == 'E') {
                sum[4] += (976 - 975);
            }
            else if (!('F' != bk[i].au[j])) {
                sum[5] += (431 - 430);
            }
            else if (!('G' != bk[i].au[j])) {
                sum[6] += (11 - 10);
            }
            else if (!('H' != bk[i].au[j])) {
                sum[(757 - 750)] += (555 - 554);
            }
            else if (!('I' != bk[i].au[j])) {
                sum[8] += (493 - 492);
            }
            else if (bk[i].au[j] == 'J') {
                sum[9] += (237 - 236);
            }
            else if (bk[i].au[j] == 'K') {
                sum[(73 - 63)] += (342 - 341);
            }
            else if (!('L' != bk[i].au[j])) {
                sum[11] += 1;
            }
            else if (!('M' != bk[i].au[j])) {
                sum[(218 - 206)] += 1;
            }
            else if (!('N' != bk[i].au[j])) {
                sum[(324 - 311)] += 1;
            }
            else if (bk[i].au[j] == 'O') {
                sum[(971 - 957)] += 1;
            }
            else if (bk[i].au[j] == 'P') {
                sum[(887 - 872)] += 1;
            }
            else if (bk[i].au[j] == 'Q') {
                sum[(892 - 876)] += 1;
            }
            else if (bk[i].au[j] == 'R') {
                sum[17] += 1;
            }
            else if (bk[i].au[j] == 'S') {
                sum[18] += 1;
            }
            else if (bk[i].au[j] == 'T') {
                sum[(432 - 413)] += 1;
            }
            else if (bk[i].au[j] == 'U') {
                sum[(756 - 736)] += 1;
            }
            else if (bk[i].au[j] == 'V') {
                sum[(627 - 606)] += 1;
            }
            else if (bk[i].au[j] == 'W') {
                sum[22] += 1;
            }
            else if (bk[i].au[j] == 'X') {
                sum[23] += 1;
            }
            else if (bk[i].au[j] == 'Y') {
                sum[(487 - 463)] += 1;
            }
            else if (bk[i].au[j] == 'Z') {
                sum[25] += 1;
            }
            else {
            }
        }
    }
    for (i = 0; i < 26; i = i + 1) {
        if (sum[i] > max) {
            max = sum[i];
            p = i;
        }
        else
            ;
    }
    printf ("%c\n%d", p + (473 - 408), max);
    for (i = 0; i < m; i = i + 1) {
        for (j = 0; j < bk[i].l; j = j + 1) {
            if (bk[i].au[j] == p + 65) {
                printf ("\n%d", bk[i].num);
                break;
            }
            else
                ;
        }
    }
}

