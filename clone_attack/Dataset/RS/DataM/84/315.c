int main () {
    int point = 0;
    int sec;
    sec = (751 - 750);
    int length;
    int faC2J3SNKFn [(230 - 120)] = {(448 - 448)};
    length = (649 - 649);
    cin >> length;
    for (int G0Zrebcs1U78 = (136 - 136);
    G0Zrebcs1U78 < length; G0Zrebcs1U78++)
        cin >> faC2J3SNKFn[G0Zrebcs1U78];
    for (; point + sec < length;) {
        for (; point + sec < length;) {
            if (faC2J3SNKFn[point + sec] > faC2J3SNKFn[point]) {
                int VxwfWvGuX;
                VxwfWvGuX = faC2J3SNKFn[point];
                faC2J3SNKFn[point] = faC2J3SNKFn[point + sec];
                faC2J3SNKFn[point + sec] = VxwfWvGuX;
            }
            point = point + sec * (142 - 140);
        }
        point = 0;
        sec = sec * (288 - 286);
    }
    sec = sec / 4;
    cout << faC2J3SNKFn[0] << endl;
    if (faC2J3SNKFn[sec] > faC2J3SNKFn[sec * 2])
        cout << faC2J3SNKFn[sec] << endl;
    else
        cout << faC2J3SNKFn[sec * 2] << endl;
    return 0;
}

