int main () {
    int i;
    i = 0;
    char mvP3Vpk2zo [1010];
    int count = (728 - 727);
    cin >> mvP3Vpk2zo;
    while (mvP3Vpk2zo[i] != '\0') {
        if (mvP3Vpk2zo[i + (940 - 939)] == mvP3Vpk2zo[i] || mvP3Vpk2zo[i + (748 - 747)] - 'a' == mvP3Vpk2zo[i] - 'A' || mvP3Vpk2zo[i + (196 - 195)] - 'A' == mvP3Vpk2zo[i] - 'a') {
            count++;
        }
        else if (mvP3Vpk2zo[i] >= 'a' && mvP3Vpk2zo[i] <= 'z') {
            cout << '(';
            cout << (char) ('A' + mvP3Vpk2zo[i] - 'a') << ',';
            cout << count;
            cout << ')';
            count = 1;
        }
        else {
            cout << '(';
            cout << mvP3Vpk2zo[i] << ',';
            cout << count;
            cout << ')';
            count = 1;
        }
        i++;
    }
    cout << endl;
    return 0;
}

