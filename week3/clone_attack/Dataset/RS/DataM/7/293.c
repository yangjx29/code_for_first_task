int main () {
    char lJ3vCa [(486 - 230)], subString [(1235 - 979)], IFVzYeQC1s9 [256];
    char *n = NULL;
    int aQnZk2zD, adEG98K;
    memset (lJ3vCa, '\0', sizeof (lJ3vCa));
    memset (subString, '\0', sizeof (subString));
    memset (IFVzYeQC1s9, '\0', sizeof (IFVzYeQC1s9));
    cin >> lJ3vCa >> subString >> IFVzYeQC1s9;
    n = strstr (lJ3vCa, subString);
    aQnZk2zD = strlen (subString);
    if (n != NULL) {
        for (adEG98K = (522 - 522); adEG98K < aQnZk2zD; adEG98K++) {
            n[adEG98K] = IFVzYeQC1s9[adEG98K];
        };
    }
    cout << lJ3vCa << endl;
    return 0;
}

