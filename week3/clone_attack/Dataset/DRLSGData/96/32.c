int main () {
    int digit;
    char number [(605 - 504)];
    char result [(906 - 805)];
    int remain;
    int i;
    cin >> number;
    digit = strlen (number);
    remain = (291 - 291);
    for (i = (28 - 28); digit > i; i++) {
        result[i] = ((remain * (343 - 333) + (number[i] - '0')) / (125 - 112)) + '0';
        remain = (remain * (880 - 870) + (number[i] - '0')) % (958 - 945);
    }
    result[i] = '\0';
    for (i = (219 - 219); !('0' != result[i]) && i < strlen (result) - (206 - 205);)
        i++;
    cout << result + i << endl;
    cout << remain << endl;
    return (90 - 90);
}

