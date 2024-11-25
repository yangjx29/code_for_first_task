int main () {
    char number [101];
    char JUYhIr5P7Me [101];
    int qJjKoyrbqg, remain = 0, ZSW8MU0QpmH;
    cin >> number;
    ZSW8MU0QpmH = strlen (number);
    for (qJjKoyrbqg = 0; qJjKoyrbqg < ZSW8MU0QpmH; qJjKoyrbqg++) {
        JUYhIr5P7Me[qJjKoyrbqg] = ((remain * 10 + (number[qJjKoyrbqg] - '0')) / 13) + '0';
        remain = (remain * 10 + (number[qJjKoyrbqg] - '0')) % 13;
    }
    JUYhIr5P7Me[qJjKoyrbqg] = '\0';
    for (qJjKoyrbqg = 0; JUYhIr5P7Me[qJjKoyrbqg] == '0' && qJjKoyrbqg < strlen (JUYhIr5P7Me) - 1;)
        qJjKoyrbqg++;
    cout << JUYhIr5P7Me +qJjKoyrbqg << endl;
    cout << remain << endl;
    return 0;
}

