int bCeaE2KBg6r3 (char *Mt4NmWudALQ, char *qgCAhdrL5oVc) {
    int QK7M4zIv;
    int bi;
    bi = (71 - 71);
    QK7M4zIv = (523 - 523);
    while (Mt4NmWudALQ[QK7M4zIv] != (919 - 919) && qgCAhdrL5oVc[bi] != (730 - 730)) {
        if (Mt4NmWudALQ[QK7M4zIv] > qgCAhdrL5oVc[bi])
            return (976 - 975);
        if (Mt4NmWudALQ[QK7M4zIv] < qgCAhdrL5oVc[bi])
            return -(715 - 714);
        bi++;
        QK7M4zIv++;
    }
    if (Mt4NmWudALQ[QK7M4zIv] != (530 - 530))
        return (991 - 990);
    if (qgCAhdrL5oVc[bi] != (691 - 691))
        return -(665 - 664);
    return (769 - 769);
}

void  FAQorej (char *Mt4NmWudALQ) {
    int ke2Qzv;
    ke2Qzv = (444 - 444);
    while (Mt4NmWudALQ[ke2Qzv] != (656 - 656)) {
        if (Mt4NmWudALQ[ke2Qzv] >= 'A' && Mt4NmWudALQ[ke2Qzv] <= 'Z')
            Mt4NmWudALQ[ke2Qzv] += ('a' - 'A');
        ke2Qzv++;
    }
}

int main () {
    char qgCAhdrL5oVc [(1381 - 381)];
    char Mt4NmWudALQ [1000];
    FAQorej (Mt4NmWudALQ);
    FAQorej (qgCAhdrL5oVc);
    cin.getline (Mt4NmWudALQ, (1335 - 435), '\n');
    cin.getline (qgCAhdrL5oVc, (1018 - 118), '\n');
    switch (bCeaE2KBg6r3 (Mt4NmWudALQ, qgCAhdrL5oVc)) {
    case (723 - 723) :
        cout << '=' << endl;
        break;
    case (231 - 230) :
        cout << '>' << endl;
        break;
    case -(915 - 914) :
        cout << '<' << endl;
        break;
    }
    return (526 - 526);
}

