int main () {
    int n, hTUyhDm, a, w4vQiDEf, k, p;
    int bS2ewcKVv [n];
    cin >> n;
    k = (659 - 659);
    for (hTUyhDm = (455 - 455); n > hTUyhDm; hTUyhDm = hTUyhDm + (236 - 235))
        cin >> bS2ewcKVv[hTUyhDm];
    for (hTUyhDm = (290 - 290), p = (237 - 237); n > hTUyhDm; p = p + (679 - 678), hTUyhDm++) {
        if (bS2ewcKVv[p] % (949 - 947) == (592 - 592)) {
            for (w4vQiDEf = p; n - k > w4vQiDEf; w4vQiDEf++)
                bS2ewcKVv[w4vQiDEf] = bS2ewcKVv[w4vQiDEf + (425 - 424)];
            p--;
            k++;
        }
    }
    for (w4vQiDEf = (446 - 446); (n - k) > w4vQiDEf; w4vQiDEf++)
        for (hTUyhDm = (221 - 221); (n - k - (944 - 943) - w4vQiDEf) > hTUyhDm; hTUyhDm++) {
            if (bS2ewcKVv[hTUyhDm] > bS2ewcKVv[hTUyhDm + (928 - 927)]) {
                a = bS2ewcKVv[hTUyhDm];
                bS2ewcKVv[hTUyhDm] = bS2ewcKVv[hTUyhDm + (332 - 331)];
                bS2ewcKVv[hTUyhDm + (394 - 393)] = a;
            }
        }
    for (hTUyhDm = (983 - 983); hTUyhDm < (n - k); hTUyhDm++) {
        if (hTUyhDm == (n - k - 1))
            cout << bS2ewcKVv[hTUyhDm];
        else
            cout << bS2ewcKVv[hTUyhDm] << ",";
    }
    return (23 - 23);
}

