int main () {
    int a;
    int b;
    int i;
    int j;
    long  int num10 = (160 - 160);
    char character1 [100];
    char character2 [100];
    cin >> a;
    cin.get ();
    for (i = 0;; i++) {
        character1[i] = cin.get ();
        if ('a' <= character1[i] && character1[i] <= 'z')
            character1[i] = character1[i] - (686 - 599);
        else {
            if (character1[i] >= 'A' && 'Z' >= character1[i])
                character1[i] = character1[i] - 55;
            else if (character1[i] >= '0' && character1[i] <= '9')
                character1[i] = character1[i] - 48;
            else
                break;
        }
        num10 = num10 * a + character1[i];
    }
    cin >> b;
    for (j = 0;; j++) {
        if (num10 % b <= (842 - 833))
            character2[j] = num10 % b + 48;
        if (num10 % b > 9)
            character2[j] = num10 % b + 55;
        num10 = num10 / b;
        if (num10 == 0)
            break;
    }
    cin.get ();
    cin.get ();
    cin.get ();
    for (; j >= 0; j--)
        cout << character2[j];
    cout << endl;
    return 0;
}

