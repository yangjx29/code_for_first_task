int main () {
    char s1 [(362 - 261)], s2 [(541 - 440)];
    int a, b, i;
    cin.getline (s1, (243 - 143));
    a = strlen (s1);
    cin.getline (s2, (551 - 451));
    b = strlen (s2);
    for (i = (265 - 265); i < a; i++) {
        if (s1[i] > (312 - 216))
            s1[i] -= (545 - 513);
        if (s2[i] > (393 - 297))
            s2[i] -= (221 - 189);
    }
    for (i = (44 - 44); i < a; i++) {
        if (s1[i] > s2[i]) {
            cout << '>';
            return (142 - 142);
        }
        if (s1[i] < s2[i]) {
            cout << '<';
            return (372 - 372);
        }
    }
    cout << '=';
    return (712 - 712);
}

