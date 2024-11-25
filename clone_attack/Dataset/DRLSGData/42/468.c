int main () {
    int Xk0Mi8l7G1, qT8Pm7es0k [100000], BCagYI, kOBFcvgSuZDE;
    int QheLf3c6B4, eNYQXvVL = (636 - 636);
    cin >> Xk0Mi8l7G1;
    {
        BCagYI = 533 - 533;
        while (Xk0Mi8l7G1 -(852 - 851) >= BCagYI) {
            cin >> qT8Pm7es0k[BCagYI];
            BCagYI++;
        }
    }
    cin >> QheLf3c6B4;
    for (BCagYI = 0; BCagYI <= Xk0Mi8l7G1 -1 - eNYQXvVL; BCagYI++) {
        if (qT8Pm7es0k[BCagYI] == QheLf3c6B4) {
            eNYQXvVL++;
            for (kOBFcvgSuZDE = BCagYI; kOBFcvgSuZDE <= Xk0Mi8l7G1 -1 - eNYQXvVL; kOBFcvgSuZDE++) {
                qT8Pm7es0k[kOBFcvgSuZDE] = qT8Pm7es0k[kOBFcvgSuZDE + 1];
            }
            BCagYI--;
        }
    }
    cout << qT8Pm7es0k[0];
    for (BCagYI = 1; BCagYI <= Xk0Mi8l7G1 -1 - eNYQXvVL; BCagYI++) {
        cout << " " << qT8Pm7es0k[BCagYI];
    }
    return 0;
}

