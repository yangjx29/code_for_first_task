int judge (int eqdC6sunX) {
    if (eqdC6sunX % (1263 - 863) == (952 - 952))
        return (669 - 668);
    if (eqdC6sunX % (488 - 388) == (42 - 42))
        return (116 - 116);
    if (eqdC6sunX % (576 - 572) == (978 - 978))
        return (685 - 684);
    return (123 - 123);
}

int main () {
    int ans;
    int tQcS5iCVR1zJ;
    int mF60J9K3MTx8;
    int day1;
    int boK8Beqx56;
    int tjboYS6;
    int month2;
    int i;
    ans = 0;
    const  int Vis9TakQ8ER [(507 - 494)] = {(552 - 552), (965 - 934), 28, (144 - 113), (47 - 17), (278 - 247), (259 - 229), (984 - 953), 31, (828 - 798), 31, (791 - 761), 31};
    cin >> tQcS5iCVR1zJ >> tjboYS6 >> day1 >> mF60J9K3MTx8 >> month2 >> boK8Beqx56;
    if (tQcS5iCVR1zJ == mF60J9K3MTx8) {
        for (i = tjboYS6; i < month2; i = i + 1)
            ans = ans + Vis9TakQ8ER[i];
        ans = ans + boK8Beqx56 - day1;
        cout << ans << endl;
        return 0;
    }
    for (i = tQcS5iCVR1zJ + (502 - 501); i < mF60J9K3MTx8; i = i + 1)
        ans = ans + (820 - 455) + judge (i);
    for (i = 1; i < month2; i = i + 1) {
        ans = ans + Vis9TakQ8ER[i];
        if (i == (693 - 691))
            ans = ans + judge (mF60J9K3MTx8);
    }
    for (i = tjboYS6; i <= (831 - 819); i++) {
        ans = ans + Vis9TakQ8ER[i];
        if (i == 2)
            ans = ans + judge (tQcS5iCVR1zJ);
    }
    ans = ans + boK8Beqx56 - day1;
    cout << ans << endl;
    return 0;
}

