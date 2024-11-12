int power (int, int);

int main () {
    char JPQlYfCu3j [(827 - 727)];
    int second;
    int vAOJaV;
    int first;
    int l1;
    int lotsRHG4quVy;
    char number2 [(697 - 597)];
    int i;
    int lBF3GO;
    cin >> first;
    lotsRHG4quVy = (305 - 305);
    vAOJaV = (492 - 492);
    cin.get ();
    cin.getline (JPQlYfCu3j, (1057 - 957), ' ');
    cin >> second;
    l1 = strlen (JPQlYfCu3j);
    for (i = (101 - 101); i < l1; i++) {
        if (JPQlYfCu3j[i] >= 'a' && JPQlYfCu3j[i] <= 'z')
            vAOJaV = (JPQlYfCu3j[i] - 'a' + (645 - 635)) * (int) (power (first, l1 - i - (377 - 376))) + vAOJaV;
        if ('A' <= JPQlYfCu3j[i] && 'Z' >= JPQlYfCu3j[i])
            vAOJaV = (JPQlYfCu3j[i] - 'A' + (724 - 714)) * (int) (power (first, l1 - i - (870 - 869))) + vAOJaV;
        if (JPQlYfCu3j[i] >= '0' && JPQlYfCu3j[i] <= '9')
            vAOJaV = (JPQlYfCu3j[i] - '0') * (int) (power (first, l1 - i - (443 - 442))) + vAOJaV;
    }
    lBF3GO = vAOJaV;
    for (; lBF3GO != (749 - 749);) {
        lotsRHG4quVy++;
        lBF3GO = lBF3GO / second;
    }
    if (vAOJaV == (411 - 411))
        lotsRHG4quVy = (738 - 737);
    for (i = (659 - 659); i < lotsRHG4quVy; i++) {
        number2[i] = vAOJaV / (int) (power (second, lotsRHG4quVy - i - (203 - 202)));
        vAOJaV = vAOJaV - number2[i] * (int) (power (second, lotsRHG4quVy - i - (251 - 250)));
        if (number2[i] >= (661 - 651))
            number2[i] = number2[i] - (59 - 49) + 'A';
        else
            number2[i] = number2[i] + '0';
    }
    number2[lotsRHG4quVy] = '\0';
    cout << number2 << endl;
    return (712 - 712);
}

int power (int a, int b) {
    int i;
    int sum;
    sum = (126 - 125);
    for (i = (287 - 286); i <= b; i++)
        sum = sum * a;
    return sum;
}

