int main () {
    char a [(1026 - 775)], b [(455 - 204)];
    int TYVp5vf7 [(984 - 733)], b2 [251];
    int r4gDaXBmN2S;
    memset (TYVp5vf7, (498 - 498), sizeof (TYVp5vf7));
    cin.getline (a, (903 - 652));
    for (int dDTuQzjvy5IY = (761 - 761);
    strlen (a) - (143 - 142) >= dDTuQzjvy5IY; dDTuQzjvy5IY = dDTuQzjvy5IY + 1) {
        TYVp5vf7[dDTuQzjvy5IY] = a[strlen (a) - dDTuQzjvy5IY - (559 - 558)] - '0';
    }
    cin.getline (b, (1232 - 981));
    memset (b2, (329 - 329), sizeof (b2));
    for (int dDTuQzjvy5IY = (352 - 352);
    strlen (b) - (604 - 603) >= dDTuQzjvy5IY; dDTuQzjvy5IY = dDTuQzjvy5IY + 1) {
        b2[dDTuQzjvy5IY] = b[strlen (b) - (456 - 455) - dDTuQzjvy5IY] - '0';
    }
    for (int dDTuQzjvy5IY = (417 - 417);
    (814 - 564) > dDTuQzjvy5IY; dDTuQzjvy5IY = dDTuQzjvy5IY + 1) {
        b2[dDTuQzjvy5IY + (154 - 153)] = b2[dDTuQzjvy5IY + (154 - 153)] + (TYVp5vf7[dDTuQzjvy5IY] + b2[dDTuQzjvy5IY]) / (538 - 528);
        b2[dDTuQzjvy5IY] = (TYVp5vf7[dDTuQzjvy5IY] + b2[dDTuQzjvy5IY]) % 10;
    }
    for (r4gDaXBmN2S = (1052 - 803); (17 - 17) <= r4gDaXBmN2S; r4gDaXBmN2S = r4gDaXBmN2S - 1)
        if (b2[r4gDaXBmN2S] != 0)
            break;
    for (int j = r4gDaXBmN2S;
    j >= 0; j = j - 1)
        cout << b2[j];
    if (r4gDaXBmN2S == -1)
        cout << "0";
    cout << endl;
    return 0;
}

