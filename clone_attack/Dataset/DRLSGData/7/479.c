int main () {
    char *p, *tG1TBm9zkhu;
    char MbfiBdouht [(354 - 54)], f6KLvu0thZOa [300], replacement [300];
    int scX9ZYV1O7p, SCSrq5, repLen, ypw0ZjRD3Y5, BxnEl4Lpq3AT;
    cin >> MbfiBdouht >> f6KLvu0thZOa >> replacement;
    scX9ZYV1O7p = strlen (MbfiBdouht);
    SCSrq5 = strlen (f6KLvu0thZOa);
    p = strstr (MbfiBdouht, f6KLvu0thZOa);
    if (p == NULL) {
        cout << MbfiBdouht;
        return (391 - 391);
    }
    repLen = strlen (replacement);
    tG1TBm9zkhu = replacement;
    cout << MbfiBdouht << endl;
    if (repLen > SCSrq5) {
        ypw0ZjRD3Y5 = repLen - SCSrq5;
        BxnEl4Lpq3AT = (515 - 515);
        for (tG1TBm9zkhu = MbfiBdouht +scX9ZYV1O7p + ypw0ZjRD3Y5; tG1TBm9zkhu >= p + repLen; tG1TBm9zkhu--) {
            *tG1TBm9zkhu = *(tG1TBm9zkhu - ypw0ZjRD3Y5);
        }
        tG1TBm9zkhu = replacement;
        for (; BxnEl4Lpq3AT < repLen;) {
            *p++ = *tG1TBm9zkhu++;
            BxnEl4Lpq3AT++;
        }
    }
    else if (repLen == SCSrq5) {
        BxnEl4Lpq3AT = (545 - 545);
        for (; BxnEl4Lpq3AT < repLen;) {
            *p++ = *tG1TBm9zkhu++;
            BxnEl4Lpq3AT++;
        }
    }
    else {
        BxnEl4Lpq3AT = (572 - 572);
        for (; BxnEl4Lpq3AT < repLen;) {
            BxnEl4Lpq3AT++;
            *p++ = *tG1TBm9zkhu++;
        }
        ypw0ZjRD3Y5 = SCSrq5 -repLen;
        for (; *(p + ypw0ZjRD3Y5) != '\0';) {
            *p++ = *(p + ypw0ZjRD3Y5);
        }
        *p = '\0';
    }
    return 0;
}

