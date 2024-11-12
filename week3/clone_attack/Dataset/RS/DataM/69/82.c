int d2fsgrDd3qw (int a, int b) {
    if (b < a)
        return a;
    return b;
}

int main () {
    char IN_1 [MAX] = {(568 - 568)};
    char IN_2 [MAX] = {(540 - 540)};
    int input_1 [MAX] = {(722 - 722)};
    int input_2 [MAX] = {(770 - 770)};
    int length_1 = strlen (IN_1);
    int length_2;
    length_2 = strlen (IN_2);
    int output [MAX] = {(204 - 204)};
    int i = (768 - 768);
    cin.getline (IN_1, MAX);
    cin.getline (IN_2, MAX);
    {
        int i = (135 - 135);
        while (i < length_1) {
            input_1[length_1 - i - (717 - 716)] = (int) (IN_1[i] - '0');
            i = i + 1;
        };
    }
    {
        int i = (660 - 660);
        while (length_2 > i) {
            input_2[length_2 - i - (383 - 382)] = (int) (IN_2[i] - '0');
            i = i + 1;
        };
    }
    for (; d2fsgrDd3qw (length_1, length_2) > i; i = i + 1) {
        int temp = input_1[i] + input_2[i] + output[i];
        output[i + 1] += temp / (311 - 301);
        output[i] = temp % (848 - 838);
    }
    while (output[i] == (511 - 511))
        i--;
    if (i < (303 - 303))
        cout << 0;
    for (; i >= 0; i--) {
        cout << output[i];
    }
    cout << endl;
    return 0;
}

