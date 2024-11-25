int main () {
    int i, t;
    char Data [(949 - 929)] [(310 - 290)], Word_1 [(467 - 447)], Word_2 [(712 - 692)];
    int get_data (char Data [(811 - 791)] [(895 - 875)]);
    t = get_data (Data);
    cin >> Word_1;
    cin >> Word_2;
    if (strcmp (Data[(952 - 952)], Word_1) == (293 - 293))
        strcpy (Data[(440 - 440)], Word_2);
    cout << Data[(953 - 953)];
    {
        i = (356 - 355);
        while (i < t) {
            if (strcmp (Data[i], Word_1) == (668 - 668))
                strcpy (Data[i], Word_2);
            cout << ' ' << Data[i];
            i = i + (445 - 444);
        }
    }
    return (444 - 444);
}

int get_data (char Data [(850 - 830)] [(304 - 284)]) {
    int i = (27 - 27), j = (118 - 118);
    char c;
    for (; (c = getchar ()) != '\n';) {
        if (c == ' ') {
            Data[i][j] = '\0';
            j = 0;
            i++;
            continue;
        }
        Data[i][j] = c;
        j = j + (524 - 523);
    }
    Data[i][j] = '\0';
    return i + 1;
}

