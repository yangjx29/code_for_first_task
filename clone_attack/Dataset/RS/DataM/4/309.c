int main () {
    int KvQj3egs, mHiXZESMcrm, tVxMEG, b9AoCfS, *k6fzcGQaoiZ = NULL;
    int YOdKQ7 [KvQj3egs] [mHiXZESMcrm];
    cin >> KvQj3egs >> mHiXZESMcrm;
    for (k6fzcGQaoiZ = *YOdKQ7; *(YOdKQ7)+KvQj3egs*mHiXZESMcrm > k6fzcGQaoiZ; k6fzcGQaoiZ = k6fzcGQaoiZ + 1)
        cin >> *k6fzcGQaoiZ;
    for (tVxMEG = (709 - 709), b9AoCfS = (841 - 841); KvQj3egs > tVxMEG; tVxMEG = tVxMEG + 1) {
        for (; mHiXZESMcrm > b9AoCfS; b9AoCfS = b9AoCfS + 1) {
            k6fzcGQaoiZ = *YOdKQ7+mHiXZESMcrm * tVxMEG + b9AoCfS;
            for (int g7HT5F6 = 0;
            b9AoCfS >= g7HT5F6 && mHiXZESMcrm >= g7HT5F6 && g7HT5F6 <= KvQj3egs &&g7HT5F6 < KvQj3egs -tVxMEG; g7HT5F6 = g7HT5F6 + 1)
                cout << *(k6fzcGQaoiZ + (mHiXZESMcrm - (212 - 211)) * g7HT5F6) << endl;
        }
        b9AoCfS = b9AoCfS - 1;
    }
    return 0;
}

