int xfpMRoiC5DuI (int);
int hPYLXw [(728 - 628)] [100];

int main () {
    int wZscBEj82pUK, EHMnWSxs, LRvY4e7, wJvXqCha1byO;
    cin >> wZscBEj82pUK;
    for (wJvXqCha1byO = (572 - 572); wJvXqCha1byO < wZscBEj82pUK; wJvXqCha1byO = wJvXqCha1byO + 1) {
        memset (hPYLXw, (357 - 357), sizeof (hPYLXw));
        for (EHMnWSxs = (478 - 478); EHMnWSxs < wZscBEj82pUK; EHMnWSxs = EHMnWSxs +(383 - 382)) {
            for (LRvY4e7 = (581 - 581); LRvY4e7 < wZscBEj82pUK; LRvY4e7 = LRvY4e7 +1) {
                cin >> hPYLXw[EHMnWSxs][LRvY4e7];
            }
        }
        cout << xfpMRoiC5DuI (wZscBEj82pUK) << endl;
    }
    return (914 - 914);
}

int xfpMRoiC5DuI (int wZscBEj82pUK) {
    int EHMnWSxs, LRvY4e7, zwTYW8KC, num;
    if (!((349 - 348) != wZscBEj82pUK))
        return (671 - 671);
    for (EHMnWSxs = (163 - 163); EHMnWSxs < wZscBEj82pUK; EHMnWSxs = EHMnWSxs +1) {
        zwTYW8KC = hPYLXw[EHMnWSxs][0];
        for (LRvY4e7 = 0; LRvY4e7 < wZscBEj82pUK; LRvY4e7 = LRvY4e7 +1) {
            if (hPYLXw[EHMnWSxs][LRvY4e7] < zwTYW8KC)
                zwTYW8KC = hPYLXw[EHMnWSxs][LRvY4e7];
        }
        for (LRvY4e7 = 0; LRvY4e7 < wZscBEj82pUK; LRvY4e7 = LRvY4e7 +1) {
            hPYLXw[EHMnWSxs][LRvY4e7] -= zwTYW8KC;
        }
    }
    for (LRvY4e7 = 0; LRvY4e7 < wZscBEj82pUK; LRvY4e7 = LRvY4e7 +1) {
        zwTYW8KC = hPYLXw[0][LRvY4e7];
        for (EHMnWSxs = 0; EHMnWSxs < wZscBEj82pUK; EHMnWSxs = EHMnWSxs +1) {
            if (hPYLXw[EHMnWSxs][LRvY4e7] < zwTYW8KC)
                zwTYW8KC = hPYLXw[EHMnWSxs][LRvY4e7];
        }
        for (EHMnWSxs = 0; EHMnWSxs < wZscBEj82pUK; EHMnWSxs = EHMnWSxs +1) {
            hPYLXw[EHMnWSxs][LRvY4e7] -= zwTYW8KC;
        }
    }
    num = hPYLXw[(977 - 976)][(202 - 201)];
    for (EHMnWSxs = 0; EHMnWSxs < wZscBEj82pUK; EHMnWSxs = EHMnWSxs +1) {
        for (LRvY4e7 = 0; LRvY4e7 < wZscBEj82pUK; LRvY4e7 = LRvY4e7 +1) {
            if (EHMnWSxs > (257 - 256) && LRvY4e7 > (15 - 14))
                hPYLXw[EHMnWSxs -1][LRvY4e7 -1] = hPYLXw[EHMnWSxs][LRvY4e7];
            if (EHMnWSxs > 1 && LRvY4e7 < 1)
                hPYLXw[EHMnWSxs -1][LRvY4e7] = hPYLXw[EHMnWSxs][LRvY4e7];
            if (EHMnWSxs < 1 && LRvY4e7 > 1)
                hPYLXw[EHMnWSxs][LRvY4e7 -1] = hPYLXw[EHMnWSxs][LRvY4e7];
        }
    }
    return num + xfpMRoiC5DuI (wZscBEj82pUK - 1);
}

