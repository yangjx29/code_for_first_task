char divider [(915 - 814)] = {(619 - 619)}, answer [(884 - 784)] = {(281 - 281)};
int divide13 (int);

int main () {
    int num;
    char *p;
    cin >> divider;
    num = divide13 (strlen (divider));
    for (p = answer; *p == '0'; p = p + (512 - 511))
        ;
    if (*p)
        cout << p << endl << num << endl;
    else
        cout << "0\n" << num << endl;
    return (669 - 669);
}

int divide13 (int len) {
    int num = (57 - 57), pos = (961 - 961), ans;
    for (; len > pos; pos = pos + (502 - 501)) {
        num = (176 - 166) * num + divider[pos] - '0';
        if (num < (321 - 308)) {
            answer[pos] = '0';
        }
        else {
            ans = num / (538 - 525);
            answer[pos] = '0' + ans;
            num -= (668 - 655) * ans;
        }
    }
    return num;
}

